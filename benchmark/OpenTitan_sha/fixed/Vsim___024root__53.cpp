// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__175(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__175\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i 
        = (1U & (((((0x0400U != (0x0700U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__instr_error)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err.__PVT__instr_type_err)) 
                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err.__PVT__instr_wr_err)) 
                 | (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_25) 
                     & (IData)(((0x07800000U != (0x07800000U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                | (0x0010U != (0x0018U 
                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U]))))) 
                    | (~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                          & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err.__PVT__addr_sz_chk) 
                             & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err.__PVT__mask_chk) 
                                & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                 >> 8U))) 
                                   | ((1U == (7U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 8U))) 
                                      | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_err.__PVT__fulldata_chk))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_0 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
            >> 2U) & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_1 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
            >> 1U) & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_2 
        = (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_otp_vendor_test_ctrl__DOT__wd 
           & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__req_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__tlul_oob_err_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_tlul_req = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__req_o) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_part_sel_idx__DOT__req_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__tlul_oob_err_d = 1U;
        }
        if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_part_sel_idx__DOT__req_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7416e31c__0 = 1U;
            if ((0x0aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_part_sel_idx__DOT__idx_o))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_tlul_req 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_part_sel_idx__DOT__idx_o))) 
                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_tlul_req)) 
                       | (0x07ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7416e31c__0) 
                                     << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_part_sel_idx__DOT__idx_o))));
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__wr_err 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o) 
           & (((0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                           >> 0x00000017U))))) 
               & ((0U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                          << 3U) | 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                          >> 0x0000001dU)))) 
                  | (1U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                            << 3U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001dU)))))) 
              | (((2U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                          << 3U) | 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                          >> 0x0000001dU)))) 
                  & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                      << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x00000017U)))))) 
                 | (((3U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 3U) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001dU)))) 
                     & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                         << 9U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000017U)))))) 
                    | (((4U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 3U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
                        & (0U != (7U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                            << 9U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x00000017U)))))) 
                       | (((5U == (0x000003ffU & ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 3U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001dU)))) 
                           & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                               << 9U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000017U)))))) 
                          | (((6U == (0x000003ffU & 
                                      ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
                              & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 9U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x00000017U)))))) 
                             | (((7U == (0x000003ffU 
                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 3U) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001dU)))) 
                                 & (0U != (1U & (~ 
                                                 ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000017U)))))) 
                                | (((8U == (0x000003ffU 
                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 3U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
                                    & (0U != (1U & 
                                              (~ ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000017U)))))) 
                                   | (((9U == (0x000003ffU 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 3U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001dU)))) 
                                       & (0U != (1U 
                                                 & (~ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 9U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000017U)))))) 
                                      | (((0x000aU 
                                           == (0x000003ffU 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 3U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001dU)))) 
                                          & (0U != 
                                             (1U & 
                                              (~ ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000017U)))))) 
                                         | (((0x000bU 
                                              == (0x000003ffU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 3U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001dU)))) 
                                             & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 9U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000017U)))))) 
                                            | (((0x000cU 
                                                 == 
                                                 (0x000003ffU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 3U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001dU)))) 
                                                & (0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x00000017U)))))) 
                                               | (((0x000dU 
                                                    == 
                                                    (0x000003ffU 
                                                     & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 3U) 
                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001dU)))) 
                                                   & (0U 
                                                      != 
                                                      (1U 
                                                       & (~ 
                                                          ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 9U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x00000017U)))))) 
                                                  | (((0x000eU 
                                                       == 
                                                       (0x000003ffU 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 3U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001dU)))) 
                                                      & (0U 
                                                         != 
                                                         (1U 
                                                          & (~ 
                                                             ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 9U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x00000017U)))))) 
                                                     | (((0x000fU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         & (0U 
                                                            != 
                                                            (1U 
                                                             & (~ 
                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 9U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x00000017U)))))) 
                                                        | (((0x0010U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))) 
                                                            & (0U 
                                                               != 
                                                               (1U 
                                                                & (~ 
                                                                   ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x00000017U)))))) 
                                                           | (((0x0011U 
                                                                == 
                                                                (0x000003ffU 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001dU)))) 
                                                               & (0U 
                                                                  != 
                                                                  (1U 
                                                                   & (~ 
                                                                      ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                        << 9U) 
                                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x00000017U)))))) 
                                                              | (((0x0012U 
                                                                   == 
                                                                   (0x000003ffU 
                                                                    & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                        << 3U) 
                                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x0000001dU)))) 
                                                                  & (0U 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 9U) 
                                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x00000017U)))))) 
                                                                 | (((0x0013U 
                                                                      == 
                                                                      (0x000003ffU 
                                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                           << 3U) 
                                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x0000001dU)))) 
                                                                     & (0U 
                                                                        != 
                                                                        (1U 
                                                                         & (~ 
                                                                            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                              << 9U) 
                                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                    | (((0x0014U 
                                                                         == 
                                                                         (0x000003ffU 
                                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                              << 3U) 
                                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                        & (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (~ 
                                                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                       | (((0x0015U 
                                                                            == 
                                                                            (0x000003ffU 
                                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                           & (0U 
                                                                              != 
                                                                              (0x0000000fU 
                                                                               & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                          | (((0x0016U 
                                                                               == 
                                                                               (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                              & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                             | (((0x0017U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0018U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0019U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001aU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001bU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001cU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001dU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001eU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x001fU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0020U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0021U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0022U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((0x0023U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U))))) 
                                                                                & ((0x0024U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0025U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0026U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0027U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0028U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0029U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002aU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002bU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002cU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002dU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002eU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x002fU 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0030U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0031U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0032U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0033U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0034U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0035U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | ((0x0036U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU)))) 
                                                                                | (0x0037U 
                                                                                == 
                                                                                (0x000003ffU 
                                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 3U) 
                                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001dU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addrmiss 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__re_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err) 
           | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o))) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addrmiss) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__wr_err) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_chk.err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_60 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__re_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we 
        = ((1U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we 
        = ((0U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__we 
        = ((0x0019U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__we 
        = ((0x001bU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__we 
        = (((0x001cU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__we 
        = (((0x001dU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__we 
        = (((0x001eU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_regwen__DOT__we 
        = ((0x0012U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we 
        = (((0x001aU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we 
        = ((3U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we 
        = ((2U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001dU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_operation_done__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__we)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd
            : 0U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__we) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__wr_data 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__we;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__wr_data = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__ = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__we)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__direct_access_regwen_d 
        = ((~ ((~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_regwen__DOT__we))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__direct_access_regwen_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__we));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[0U] 
        = ((0xffffffe0U & vlSelfRef.__VdfgRegularize_he50b618e_0_862[0U]) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_vendor_test_read_lock__q) 
                << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_creator_sw_cfg_read_lock__q) 
                           << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_owner_sw_cfg_read_lock__q) 
                                     << 2U))) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_codesign_read_lock__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_state_read_lock__q))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[0U] 
        = ((0x0000001fU & vlSelfRef.__VdfgRegularize_he50b618e_0_862[0U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_consistency_check_period__q 
              << 5U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_consistency_check_period__q 
            >> 0x0000001bU) | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q)))) 
                               << 5U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q)))) 
            >> 0x0000001bU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q))) 
                                        >> 0x00000020U)) 
                               << 5U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U] 
        = ((0xffffffe0U & vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q))) 
                       >> 0x00000020U)) >> 0x0000001bU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U] 
        = ((0xfffffe1fU & vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U]) 
           | (0xffffffe0U & ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd) 
                               | (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we)))))) 
                              << 7U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                                                << 1U)) 
                                         | (3U == (3U 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we)))))) 
                                        << 5U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_862[3U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_1__q)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_0__q)))) 
              << 9U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_1__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_0__q)))) 
            >> 0x00000017U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_1__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_0__q))) 
                                        >> 0x00000020U)) 
                               << 9U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_862[5U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_1__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_0__q))) 
                    >> 0x00000020U)) >> 0x00000017U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__we) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
}

void Vsim___024root___nba_comb__TOP__179(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__179\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__800__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__800__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__800__val;
    __Vfunc_lc_tx_test_true_strict__800__val = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_hi__801__Vfuncout;
    __Vfunc_lc_tx_and_hi__801__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_hi__801__a;
    __Vfunc_lc_tx_and_hi__801__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_hi__801__b;
    __Vfunc_lc_tx_and_hi__801__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__802__Vfuncout;
    __Vfunc_lc_tx_and__802__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__802__a;
    __Vfunc_lc_tx_and__802__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__802__b;
    __Vfunc_lc_tx_and__802__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__802__a_in;
    __Vfunc_lc_tx_and__802__a_in = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__802__b_in;
    __Vfunc_lc_tx_and__802__b_in = 0;
    // Body
    __Vfunc_lc_tx_and_hi__801__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_ack_d;
    __Vfunc_lc_tx_and_hi__801__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out;
    __Vfunc_lc_tx_and__802__b = __Vfunc_lc_tx_and_hi__801__b;
    __Vfunc_lc_tx_and__802__a = __Vfunc_lc_tx_and_hi__801__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_lc_tx_and__802__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16756025361318193874ull);
    __Vfunc_lc_tx_and__802__a_in = __Vfunc_lc_tx_and__802__a;
    __Vfunc_lc_tx_and__802__b_in = __Vfunc_lc_tx_and__802__b;
    vlSelfRef.__Vfunc_lc_tx_and__802__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_lc_tx_and__802__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_lc_tx_and__802__a_in) 
                                                    | (IData)(__Vfunc_lc_tx_and__802__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_lc_tx_and__802__a_in) 
                                                      & (IData)(__Vfunc_lc_tx_and__802__b_in)))));
    vlSelfRef.__Vfunc_lc_tx_and__802__out = ((3U & (IData)(vlSelfRef.__Vfunc_lc_tx_and__802__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_lc_tx_and__802__a_in) 
                                                      | (IData)(__Vfunc_lc_tx_and__802__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_lc_tx_and__802__a_in) 
                                                        & (IData)(__Vfunc_lc_tx_and__802__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_lc_tx_and__802__Vfuncout = vlSelfRef.__Vfunc_lc_tx_and__802__out;
    __Vfunc_lc_tx_and_hi__801__Vfuncout = __Vfunc_lc_tx_and__802__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__800__val = __Vfunc_lc_tx_and_hi__801__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__800__Vfuncout = 
        (5U == (IData)(__Vfunc_lc_tx_test_true_strict__800__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_done 
        = __Vfunc_lc_tx_test_true_strict__800__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lfsr__DOT__lfsr_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__lfsr_seed_en)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U]
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lfsr__DOT____VdfgRegularize_h74523c10_0_0)
                ? 0xfeec587dU : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__lfsr_en)
                                  ? ((0x80200003U & 
                                      (- (IData)((1U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lfsr__DOT__lfsr_q)))) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lfsr__DOT__lfsr_q, 1U))
                                  : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_lfsr__DOT__lfsr_q)));
}

void Vsim___024root___nba_comb__TOP__181(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__181\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
        = (0x000fffffU & ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                           ? ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                 ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__num_words)
                                 : 3U) << 8U) | ((0x000000c0U 
                                                  & (((0U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__info_sel)
                                                       : 
                                                      (vlSymsp->TOP__flash_ctrl_pkg.RmaWipeEntries
                                                       [
                                                       ((4U 
                                                         >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                         ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                         : 0U)] 
                                                       >> 0x00000012U)) 
                                                     << 6U)) 
                                                 | ((0x00000020U 
                                                     & (((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                          ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__part_sel)
                                                          : 
                                                         (vlSymsp->TOP__flash_ctrl_pkg.RmaWipeEntries
                                                          [
                                                          ((4U 
                                                            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                            : 0U)] 
                                                          >> 0x00000014U)) 
                                                        << 5U)) 
                                                    | ((((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_op)) 
                                                        << 1U) 
                                                       | ((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__start)
                                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_start))))))
                           : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                               ? ((vlSelfRef.__VdfgRegularize_he50b618e_0_970[0x00000027U] 
                                   << 5U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_970[0x00000026U] 
                                             >> 0x0000001bU))
                               : 0U)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                             >> 1U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                    >> 1U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                   >> 1U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                      >> 1U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl.sv:754: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                    >> 1U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl.sv", 754, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                             >> 1U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                    >> 1U))))))))) {
        if ((0U != (((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                   >> 1U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                      >> 1U))) << 1U) 
                       | (1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl_arb.sv:244: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_ctrl_arb: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                    >> 1U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl_arb.sv", 244, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__cnt_hit 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           >= (0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                              >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_flash_mp__pg_erase_i 
        = (IData)((4U == (0x00000016U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__cnt_hit 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           >= (0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                              >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_req 
        = (IData)((5U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__pgm_res_err 
        = ((0x00003fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                           >> 6U)) != (0x00003fffU 
                                       & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                            >> 2U) 
                                           + (0x00000fffU 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                 >> 8U))) 
                                          >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_op_valid 
        = (IData)((3U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_op_valid 
        = (IData)((1U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr 
        = ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)
            ? (0x00020000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                              >> 2U)) : (0x0003fe00U 
                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__data_rdy_i) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__cnt_hit));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_flash_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
           & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_op_valid) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__data_rdy_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr = 0U;
    if ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                      >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_err_addr;
    } else if ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr;
    } else if ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_err_addr;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
        = (0x0003ffffU & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                        >> 1U))) ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__int_addr
                           : ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                            >> 1U)))
                               ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__int_addr
                               : ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                >> 1U)))
                                   ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr
                                   : 0U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_bk_erase_en 
        = ((IData)((0x00000014U == (0x00000016U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                >> 0x00000011U) & ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1.__PVT__committed_q))) 
              | ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                     >> 0x00000011U)) & ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__committed_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0 
        = (0x000007ffU & (((IData)(0x00000348U) * (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                      >> 0x00000011U))) 
                          + ((0x000003ffU & ((IData)(0x00000118U) 
                                             * (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 6U)))) 
                             + (0x000001ffU & ((IData)(0x0000001cU) 
                                               * (0x0000000fU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                     >> 9U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_bk_erase_en 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
            >> 5U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_bk_erase_en));
}

void Vsim___024root___nba_comb__TOP__188(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__188\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

extern const VlWide<12>/*383:0*/ Vsim__ConstPool__CONST_h997e551f_0;

void Vsim___024root___nba_sequent__TOP__219(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__219\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__prep_gen_adata_null 
        = ((3U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0U])) 
           & (0U == ((((((((((((Vsim__ConstPool__CONST_h997e551f_0[0U] 
                                ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                      >> 8U))) | (Vsim__ConstPool__CONST_h997e551f_0[1U] 
                                                  ^ 
                                                  ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                      >> 8U)))) 
                              | (Vsim__ConstPool__CONST_h997e551f_0[2U] 
                                 ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                     << 0x00000018U) 
                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                       >> 8U)))) | 
                             (Vsim__ConstPool__CONST_h997e551f_0[3U] 
                              ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[4U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                  >> 8U)))) | (Vsim__ConstPool__CONST_h997e551f_0[4U] 
                                               ^ ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[5U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[4U] 
                                                     >> 8U)))) 
                           | (Vsim__ConstPool__CONST_h997e551f_0[5U] 
                              ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[6U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[5U] 
                                  >> 8U)))) | (Vsim__ConstPool__CONST_h997e551f_0[6U] 
                                               ^ ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[7U] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[6U] 
                                                     >> 8U)))) 
                         | (Vsim__ConstPool__CONST_h997e551f_0[7U] 
                            ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[8U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[7U] 
                                                   >> 8U)))) 
                        | (Vsim__ConstPool__CONST_h997e551f_0[8U] 
                           ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[9U] 
                               << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[8U] 
                                                  >> 8U)))) 
                       | (Vsim__ConstPool__CONST_h997e551f_0[9U] 
                          ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0x0000000aU] 
                              << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[9U] 
                                                 >> 8U)))) 
                      | (Vsim__ConstPool__CONST_h997e551f_0[0x0000000aU] 
                         ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0x0000000bU] 
                             << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0x0000000aU] 
                                                >> 8U)))) 
                     | (Vsim__ConstPool__CONST_h997e551f_0[0x0000000bU] 
                        ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0x0000000cU] 
                            << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_cmd__DOT__u_prim_fifo_sync_cmdreq__DOT__gen_singleton_fifo__DOT__storage[0x0000000bU] 
                                               >> 8U))))));
}

void Vsim___024root___nba_comb__TOP__189(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__189\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__empty_rclk)
            ? 0ULL : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage
           [0U]);
    if ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                              >> 0x0000003dU))))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_383 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000000fU));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_529 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_383;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_525 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_529;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_383 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_529 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_525 = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_383)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      (0x0000fffeU 
                                                       & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o) 
                                                          << 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_383)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000fffeU 
                                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o) 
                                                              << 1U))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000002fU)) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[2U] 
        = (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                          >> 0x0000002fU)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT____VdfgRegularize_h2c272aba_0_2 
        = (((QData)((IData)((0x000000ffU & (IData)(
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                                                    >> 0x00000038U))))) 
            << 0x00000037U) | (((QData)((IData)((0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                                                            >> 0x00000031U))))) 
                                << 0x0000002fU) | (0x00007fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U])) 
                                                       << 0x0000001eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U])) 
                                                         >> 2U)))));
}

void Vsim___024root___nba_comb__TOP__190(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__190\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__dfifo_rspready 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i)) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__empty_rclk)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_38__DOT__dfifo_rspready)));
}

void Vsim___024root___nba_comb__TOP__191(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__191\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__empty_rclk)
            ? 0ULL : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage
           [0U]);
    if ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                              >> 0x0000003dU))))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000000fU));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_530 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_530;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_530 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_526 = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      (0x0000fffeU 
                                                       & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o) 
                                                          << 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_385)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000fffeU 
                                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o) 
                                                              << 1U))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000002fU)) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[2U] 
        = (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                          >> 0x0000002fU)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT____VdfgRegularize_h2c272aba_0_2 
        = (((QData)((IData)((0x000000ffU & (IData)(
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                                                    >> 0x00000038U))))) 
            << 0x00000037U) | (((QData)((IData)((0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                                                            >> 0x00000031U))))) 
                                << 0x0000002fU) | (0x00007fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U])) 
                                                       << 0x0000001eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U])) 
                                                         >> 2U)))));
}

void Vsim___024root___nba_comb__TOP__192(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__192\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__dfifo_rspready 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i)) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__empty_rclk)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_40__DOT__dfifo_rspready)));
}

void Vsim___024root___nba_comb__TOP__193(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__193\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__empty_rclk)
            ? 0ULL : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage
           [0U]);
    if ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                              >> 0x0000003dU))))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000000fU));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_531 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_527 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_531;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_531 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_527 = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      (0x0000fffeU 
                                                       & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o) 
                                                          << 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_387)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000fffeU 
                                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o) 
                                                              << 1U))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000002fU)) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[2U] 
        = (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                          >> 0x0000002fU)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT____VdfgRegularize_h2c272aba_0_2 
        = (((QData)((IData)((0x000000ffU & (IData)(
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                                                    >> 0x00000038U))))) 
            << 0x00000037U) | (((QData)((IData)((0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                                                            >> 0x00000031U))))) 
                                << 0x0000002fU) | (0x00007fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U])) 
                                                       << 0x0000001eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U])) 
                                                         >> 2U)))));
}

void Vsim___024root___nba_comb__TOP__194(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__194\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__dfifo_rspready 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i)) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__empty_rclk)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_42__DOT__dfifo_rspready)));
}

void Vsim___024root___nba_comb__TOP__195(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__195\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_d 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_q)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT____VdfgRegularize_h5e08074e_0_1))
            ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U]
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_q);
}

void Vsim___024root___nba_comb__TOP__198(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__198\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*91:0*/ __VdfgRegularize_he50b618e_0_1047;
    VL_ZERO_W(92, __VdfgRegularize_he50b618e_0_1047);
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_840 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_dbus_addr_en_1__q) 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_dbus_addr_matching_1__q 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__input_masks 
                                                                 >> 0x00000020U))) 
                                                     == 
                                                     (((IData)(
                                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 3U)) 
                                                       << 2U) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__input_masks 
                                                                 >> 0x00000020U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_dbus_addr_en_0__q) 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_dbus_addr_matching_0__q 
               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT____VdfgRegularize_hb07557d4_0_0) 
              == (((IData)((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                            >> 3U)) << 2U) & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT____VdfgRegularize_hb07557d4_0_0)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_req_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_req_d 
            = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_i)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_i;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_req_d 
            = (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.ic_scr_key_req_o));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_d 
            = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.ic_scr_key_req_o)) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__data_tree__BRA__127__03a64__KET__
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__data_tree__BRA__191__03a128__KET__);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_840));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__gnt_tree__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__valid_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__gnt_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__valid_o));
    __VdfgRegularize_he50b618e_0_1047[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we)
                                                                        ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be)
                                                                        : 0x0fU))) 
                                                      << 0x00000038U) 
                                                     | (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i)) 
                                                         << 0x00000018U) 
                                                        | (QData)((IData)(
                                                                          (0x00048001U 
                                                                           | (0x000000feU 
                                                                              & ((IData)(
                                                                                (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U)) 
                                                                                << 1U))))))));
    __VdfgRegularize_he50b618e_0_1047[1U] = ((0xc0000000U 
                                              & __VdfgRegularize_he50b618e_0_1047[1U]) 
                                             | (IData)(
                                                       ((((QData)((IData)(
                                                                          ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we)
                                                                            ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be)
                                                                            : 0x0fU))) 
                                                          << 0x00000038U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i)) 
                                                             << 0x00000018U) 
                                                            | (QData)((IData)(
                                                                              (0x00048001U 
                                                                               | (0x000000feU 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_o 
                                                                                >> 0x00000020U)) 
                                                                                << 1U))))))) 
                                                        >> 0x00000020U)));
    __VdfgRegularize_he50b618e_0_1047[1U] = ((0x3fffffffU 
                                              & __VdfgRegularize_he50b618e_0_1047[1U]) 
                                             | (0xc0000000U 
                                                & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__valid_o)
                                                     ? 
                                                    ((((IData)(
                                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 3U)) 
                                                       << 2U) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o 
                                                                 >> 0x00000020U))) 
                                                     | ((~ (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o 
                                                                    >> 0x00000020U))) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o)))
                                                     : 
                                                    ((IData)(
                                                             (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                              >> 3U)) 
                                                     << 2U)) 
                                                   << 0x0000001cU)));
    __VdfgRegularize_he50b618e_0_1047[2U] = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__valid_o)
                                               ? ((
                                                   ((IData)(
                                                            (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                             >> 3U)) 
                                                    << 2U) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o 
                                                              >> 0x00000020U))) 
                                                  | ((~ (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o 
                                                                 >> 0x00000020U))) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_dbus_trans__DOT__u_sel_region__DOT__data_o)))
                                               : ((IData)(
                                                          (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                           >> 3U)) 
                                                  << 2U)) 
                                             >> 4U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x18U;
    if ((0x00008000U == (0xffff8000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                         << 4U) | (
                                                   __VdfgRegularize_he50b618e_0_1047[1U] 
                                                   >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0U;
    } else if ((0x411e0000U == (0xffffff80U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 1U;
    } else if ((0x00010000U == (0xfffff000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 2U;
    } else if ((0x41200000U == (0xfffffff0U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 3U;
    } else if ((0x10000000U == (0xfffe0000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 4U;
    } else if (((0x40000000U == (0xffe00000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                 << 4U) 
                                                | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                   >> 0x0000001cU)))) 
                | (0x40400000U == (0xffc00000U & ((
                                                   __VdfgRegularize_he50b618e_0_1047[2U] 
                                                   << 4U) 
                                                  | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                     >> 0x0000001cU)))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 5U;
    } else if ((0x40300000U == (0xffffffc0U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 6U;
    } else if ((0x40310000U == (0xffffffc0U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 7U;
    } else if ((0x40320000U == (0xfffff000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 8U;
    } else if ((0x41000000U == (0xfffffe00U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 9U;
    } else if ((0x41008000U == (0xffffff80U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0aU;
    } else if ((0x20000000U == (0xfff00000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0bU;
    } else if ((0x41100000U == (0xffffff00U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0cU;
    } else if ((0x41160000U == (0xffffff00U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0dU;
    } else if ((0x41150000U == (0xffffff80U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0eU;
    } else if ((0x41170000U == (0xffffff80U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x0fU;
    } else if ((0x41180000U == (0xffffff80U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x10U;
    } else if ((0x41110000U == (0xffffe000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x11U;
    } else if ((0x48000000U == (0xf8000000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x12U;
    } else if ((0x41130000U == (0xffff0000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x13U;
    } else if ((0x41140000U == (0xffffff00U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x14U;
    } else if ((0x41120000U == (0xfffff000U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x15U;
    } else if ((0x411c0000U == (0xffffffc0U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x16U;
    } else if ((0x411f0000U == (0xffffff00U & ((__VdfgRegularize_he50b618e_0_1047[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1047[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32 = 0x17U;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_1048[0U] 
        = __VdfgRegularize_he50b618e_0_1047[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1048[1U] 
        = __VdfgRegularize_he50b618e_0_1047[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1048[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_q) 
            << 0x0000001cU) | __VdfgRegularize_he50b618e_0_1047[2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_1048[3U] 
        = ((0x00000ff0U & vlSelfRef.__VdfgRegularize_he50b618e_0_1048[3U]) 
           | (0x00000fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_q) 
                             >> 4U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1048[3U] 
        = ((0x0000000fU & vlSelfRef.__VdfgRegularize_he50b618e_0_1048[3U]) 
           | (0x00000ff0U & (0x00000020U | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we)
                                              ? ((0x0000000fU 
                                                  == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be))
                                                  ? 0U
                                                  : 1U)
                                              : 4U) 
                                            << 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__num_req_outstanding)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32) 
              != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__5__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__6__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__7__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__8__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__3__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__9__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__10__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__12__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__13__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__14__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__15__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__16__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__17__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__18__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__19__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__20__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__21__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__22__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__23__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__11__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_u_o__BRA__4__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests)) 
           & (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32)));
}

void Vsim___024root___nba_comb__TOP__199(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__199\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__src_pulse_en 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_ref_pulse_sync__DOT__src_pulse_d) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__src_busy))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__ref_pulse_in));
}

void Vsim___024root___nba_comb__TOP__200(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__200\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__module_active) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__flash_sram_m2l 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_m2l;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i = 0ULL;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__flash_sram_m2l = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_tpm_cfg_en__q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_m2l
                : 0ULL);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror[0U] 
        = (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror[1U] 
        = (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata[0U] 
        = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
                   >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata[1U] 
        = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
                   >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__rsp_error_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__rsp_error_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__rsp_rdata_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__rsp_rdata_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata
        [1U];
}

void Vsim___024root___nba_comb__TOP__201(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__201\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        if (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
        if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__wready_o) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dmi_en)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dmi_en));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim___024root___nba_comb__TOP__202(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__202\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_rsp = 0U;
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_rsp 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__gen_tap_tlul__DOT__u_dmi_jtag__td_o) 
                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__gen_tap_tlul__DOT__u_dmi_jtag__tdo_oe_o));
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_he4dcabbe__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_rsp 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__pinmux_aon_rv_jtag_rsp;
        }
    } else if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_h917ca39f__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_rsp = 0U;
        }
    }
}

void Vsim___024root___nba_comb__TOP__203(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__203\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__src_pulse_en_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__src_pulse_d) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__src_busy_o))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_rng_val));
}

void Vsim___024root___nba_sequent__TOP__220(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__220\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__status_fifo_rst_n 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT____Vcellinp__u_csb_rst_scan_mux__sel_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__status_fifo_clr_n));
}

void Vsim___024root___nba_comb__TOP__204(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__204\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__empty_rclk)
            ? 0U : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__storage
           [(1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_q))]);
}

void Vsim___024root___nba_comb__TOP__205(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__205\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__clk_src_sys_val_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)
            ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_no_scan_val_sync.q_o)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h113ec98c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h80930582_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h8676a869_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h2c08335f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h6176fbc3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h3d29f860_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_he2dc1bd8_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vsim__ConstPool__TABLE_h9f6336a8_0;

void Vsim___024root___nba_comb__TOP__206(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__206\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = ((0x00000010U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                                     << 2U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset 
        = Vsim__ConstPool__TABLE_h113ec98c_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = Vsim__ConstPool__TABLE_h80930582_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = Vsim__ConstPool__TABLE_h8676a869_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = Vsim__ConstPool__TABLE_h2c08335f_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = Vsim__ConstPool__TABLE_h6176fbc3_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = Vsim__ConstPool__TABLE_h3d29f860_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = Vsim__ConstPool__TABLE_he2dc1bd8_0[__Vtableidx10];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = Vsim__ConstPool__TABLE_h9f6336a8_0[__Vtableidx10];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                      ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q
                      : ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                          ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q
                          : ((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                              ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dr_q)
                              : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q)))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((0x11U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                << 2U) 
                                               | (((0x10U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                   << 1U) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))))))) {
            if ((0U != (((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                         << 2U) | (((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                    << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dmi_jtag_tap.sv:176: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_tap_tlul.u_dmi_jtag.i_dmi_jtag_tap.p_out_sel: unique case, but multiple matches found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 5,(IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/dmi_jtag_tap.sv", 176, "");
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = ((0x00000010U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                               << 4U)) | (0x0000000fU 
                                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                                             >> 1U)));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_d 
                = (0x00001071U | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__error_q) 
                                  << 0x0000000aU));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x10002cdfU;
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_d 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q 
                                       >> 1U));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i) 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                                       >> 1U));
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d 
                = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_pinmux_jtag_buf_lc__DOT__req_i));
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x10002cdfU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_select) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q 
                    >> 0x00000011U))));
}

void Vsim___024root___nba_comb__TOP__207(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__207\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__jtag_in_int 
        = (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__1103__val 
                    = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__u_pm_en_sync.__PVT__lc_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__1103__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__1103__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__1103__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__rv_jtag_req)
            : 0U);
}

void Vsim___024root___nba_sequent__TOP__221(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__221\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__3__Vfuncout;
    __Vfunc_mubi4_test_true_strict__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__3__val;
    __Vfunc_mubi4_test_true_strict__3__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__7__Vfuncout;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__7__val;
    __Vfunc_mubi4_test_true_strict__7__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
    __Vfunc_mubi4_test_true_strict__9__val = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_all_clk_byp) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_io_clk_byp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__rst_sw_clk_byp_en = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__rst_sw_clk_byp_en = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_exfr_is_96m 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_sw_exfr_is_96m_dgl__d_i));
    __Vfunc_mubi4_test_true_strict__3__val = ((((IData)(
                                                        ((0U 
                                                          != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                                            >> 3U))) 
                                                << 3U) 
                                               | (4U 
                                                  & (((~ 
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                      << 2U) 
                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                                              | ((2U 
                                                  & (((~ 
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                      << 1U) 
                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                                                 | (1U 
                                                    & ((0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_ext_freq_is_96m.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
    __Vfunc_mubi4_test_true_strict__3__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__3__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_sw_exfr_is_96m_dgl__d_i 
        = __Vfunc_mubi4_test_true_strict__3__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_all_clk_byp 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__ot_all_clk_byp));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_io_clk_byp 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__ot_io_clk_byp));
    __Vfunc_mubi4_test_true_strict__7__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.mubi_o;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__7__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__ot_all_clk_byp 
        = __Vfunc_mubi4_test_true_strict__7__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__val = ((((IData)(
                                                        ((0U 
                                                          != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q) 
                                                            >> 3U))) 
                                                << 3U) 
                                               | (4U 
                                                  & (((~ 
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                      << 2U) 
                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))) 
                                              | ((2U 
                                                  & (((~ 
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                      << 1U) 
                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q))) 
                                                 | (1U 
                                                    & ((0U 
                                                        != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__gen_bufs_muxes__BRA__0__KET____DOT__u_sig_unstable_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_req.__PVT__gen_flops__DOT__gen_stable_chks__DOT__mubi_q)))));
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__9__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__ot_io_clk_byp 
        = __Vfunc_mubi4_test_true_strict__9__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__208(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__208\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_sys 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim___024root___nba_comb__TOP__209(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__209\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1448__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1448__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1448__val;
    __Vfunc_mubi4_bool_to_mubi__1448__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_d 
        = ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
                ? 0U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
                         ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz)
                             ? 2U : 5U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done)
                                            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q)
                                                ? 6U
                                                : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_q)
                                                    ? 6U
                                                    : 3U))
                                            : 4U)))
            : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
                    ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__wready_o) 
                        & ((((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                             & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) 
                            | ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                               & (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) 
                           | ((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                              & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))))
                        ? 5U : 3U) : ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_process_flag) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q)) 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                          >= vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                                       ? 4U : (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz) 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                     >= vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i)) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_q)) 
                                                & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q)))
                                                ? 4U
                                                : 2U)))
                : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))
                    ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz)
                        ? 2U : 1U) : (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                        >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i))
                                       ? 1U : (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                 >> 1U) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i))
                                                ? 2U
                                                : 0U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_txcount = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_start = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__wready_o) 
                     & ((((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                          & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) 
                         | ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                            & (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) 
                        | ((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)) 
                           & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_txcount = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_start = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)))) {
            if (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                  >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_txcount = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_start = 1U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_seen_d 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT____VdfgRegularize_hce518dd1_0_1) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_process) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i)))) 
           & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_empty_q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rvalid_o))) 
              & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__full_o)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_seen_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_start)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_write 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o) 
              & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_allowed))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_push_not_allowed 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_allowed)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__gnt_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel)) 
              & (0x20U >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__clear_digest 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i) 
           | ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                  >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_en_q)));
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__compute_digest_multimode__DOT__unnamedblk1__DOT__i = 8U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__clear_digest)))) {
                if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                              >> 3U)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__compute_digest_multimode__DOT__unnamedblk2__DOT__i = 8U;
                }
                if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)) {
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__compute_digest_multimode__DOT__unnamedblk3__DOT__i = 8U;
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_go 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_continue_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_write) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
              >> 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)))) {
        if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[1U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d 
                = ((0xffffffff00000000ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d) 
                   | (IData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[1U] 
                                         >> 2U)))));
        }
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d 
                = ((0x00000000ffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d) 
                   | ((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[1U] 
                                        << 0x0000001fU) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0U] 
                                          >> 1U)))) 
                      << 0x00000020U));
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d = 0ULL;
    } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_write) 
                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                    >> 3U)) & (0x20U >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length 
               + (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__wmask_ones)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config_atstart)
                ? 6U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_sha_disabled)
                         ? 2U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_active)
                                  ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_push_not_allowed)
                                           ? 5U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess)
                                                    ? 3U
                                                    : 0U))))) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x7ffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7fffffffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config_atstart)
                               ? 6U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_sha_disabled)
                                        ? 2U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_active)
                                                 ? 4U
                                                 : 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_push_not_allowed)
                                                  ? 5U
                                                  : 
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess)
                                                   ? 3U
                                                   : 0U))))) 
                             >> 0x0000001fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__event_intr_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_sha_disabled) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_active) 
                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_push_not_allowed) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config_atstart))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__req_o) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__gnt_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_start_i) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] = 0x6a09e667U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] = 0xbb67ae85U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] = 0x3c6ef372U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] = 0xa54ff53aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] = 0x510e527fU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] = 0x9b05688cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] = 0x1f83d9abU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] = 0x5be0cd19U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] = 0U;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] = 0xc1059ed8U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] = 0xcbbb9d5dU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] = 0x367cd507U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] = 0x629a292aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] = 0x3070dd17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] = 0x9159015aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] = 0xf70e5939U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] = 0x152fecd8U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] = 0xffc00b31U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] = 0x67332667U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] = 0x68581511U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] = 0x8eb44a87U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] = 0x64f98fa7U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] = 0xdb0c2e0dU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] = 0xbefa4fa4U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] = 0x47b5481dU;
        } else if ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] = 0xf3bcc908U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] = 0x6a09e667U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] = 0x84caa73bU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] = 0xbb67ae85U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] = 0xfe94f82bU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] = 0x3c6ef372U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] = 0x5f1d36f1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] = 0xa54ff53aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] = 0xade682d1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] = 0x510e527fU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] = 0x2b3e6c1fU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] = 0x9b05688cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] = 0xfb41bd6bU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] = 0x1f83d9abU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] = 0x137e2179U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] = 0x5be0cd19U;
        }
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__clear_digest) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    } else if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU])))) 
                           >> 0x00000020U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] 
                = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU]))) 
                           + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU])))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] 
                = (IData)((((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU]))) 
                            + (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU])))) 
                           >> 0x00000020U));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U] 
            = (IData)(((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0U])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U] 
            = (IData)((((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0U])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U] 
            = (IData)(((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[3U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[2U])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U] 
            = (IData)((((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[2U])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U] 
            = (IData)(((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[5U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[4U])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U] 
            = (IData)((((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[5U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[4U])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U] 
            = (IData)(((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[6U])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U] 
            = (IData)((((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[7U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[6U])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U] 
            = (IData)(((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[9U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[8U])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U] 
            = (IData)((((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[9U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[8U])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU] 
            = (IData)(((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000bU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000aU])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU] 
            = (IData)((((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000bU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000aU])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU] 
            = (IData)(((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000dU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000cU])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU] 
            = (IData)((((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000dU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000cU])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU])))) 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU] 
            = (IData)(((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000fU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000eU])))
                        : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU])))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU] 
            = (IData)((((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000fU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000eU])))
                         : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU])))) 
                       >> 0x00000020U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_go) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_d = 8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_d = 8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_d = 8U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q;
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d 
            = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
        if ((1U & (~ (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                       & (0x30U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))) 
                      | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                          | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q))) 
                         & (0x40U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__one_chunk_done)
                    ? 2U : 1U);
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d 
            = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))
                ? ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))
                    ? 1U : 0U) : 0U);
    }
    if ((1U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                   >> 3U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_go)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1748 = 1U;
    } else {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__run_hash) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_d 
                = ((((0x3fU == (0x0000003fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))) 
                     & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q))) 
                    | ((0x4fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q)) 
                       & ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                          | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)))))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))));
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1748 = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT____VdfgRegularize_h7491c228_0_0 
        = (1U & (~ ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                        >> 3U)) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_go) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__valid_o)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rvalid_o)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__idle_o) 
                 & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
                    & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_go)) 
                       & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)))))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__valid_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__ack_in 
            = (0x20U >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
        __Vtemp_9[0U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                         >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx));
        __Vtemp_12[0U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wdata_endian 
                          >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__ack_in = 0U;
        __Vtemp_9[0U] = 0U;
        __Vtemp_12[0U] = 0U;
    }
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SHIFTL_WWI(96,96,7, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask, __Vtemp_9, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__event_intr_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__hw2reg_intr_state_de_o 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
             >> 2U) & (7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__event_intr_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_d 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1748)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__hash_process_i) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT____VdfgRegularize_h7491c228_0_0) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_q) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT____VdfgRegularize_h7491c228_0_0) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__sha_process) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_q)));
    __Vfunc_mubi4_bool_to_mubi__1448__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle;
    __Vfunc_mubi4_bool_to_mubi__1448__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1448__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle_d 
        = __Vfunc_mubi4_bool_to_mubi__1448__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x7ffffdffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7fffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle) 
                             << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[0U] 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask) 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[1U] 
        = ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                    >> 0x00000020U)) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[2U];
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 0U;
    VL_SHIFTL_WWI(96,96,7, __Vtemp_13, __Vtemp_12, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[0U] 
        = ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data 
                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask)) 
           | (__Vtemp_13[0U] & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[0U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[1U] 
        = ((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data 
                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask) 
                    >> 0x00000020U)) | (__Vtemp_13[1U] 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[2U] 
        = (__Vtemp_13[2U] & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__shiftl_mask[2U]);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__ack_in) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__ack_out) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__g_pos_nodup__DOT__pos_d 
                = (0x0000007fU & ((0x20U >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_with_input))
                                   ? 0U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_with_input) 
                                           - (IData)(0x20U))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask_next 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[2U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[1U])));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data_next 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[2U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[1U])));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__g_pos_nodup__DOT__pos_d 
                = (0x0000007fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_with_input));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask_next 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[1U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_mask[0U])));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data_next 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[1U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__concat_data[0U])));
        }
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__ack_out) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__g_pos_nodup__DOT__pos_d 
            = (0x0000007fU & ((0x20U >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q))
                               ? 0U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q) 
                                       - (IData)(0x20U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask_next 
            = (QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                               >> 0x20U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data_next 
            = (QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data 
                               >> 0x20U)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__g_pos_nodup__DOT__pos_d 
            = (0x0000007fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask_next 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data_next 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x01ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7e000000U & (0x08000000U | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_done__DOT__hw2reg_intr_state_de_o) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q)) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_done__DOT__hw2reg_intr_state_de_o) 
                                                  << 4U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_fifo_empty__DOT__hw2reg_intr_state_d_o) 
                                                    << 3U))) 
                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__hw2reg_intr_state_de_o) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q)) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_err__DOT__hw2reg_intr_state_de_o))) 
                                            << 0x00000019U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                  >> 0x0000001dU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_err__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                  >> 0x00000019U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__wr_data 
        = (1U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                 & ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                        >> 0x0000001eU) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_err__DOT__wr_data 
        = (1U & ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                      >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                 & ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                        >> 0x0000001aU) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q) 
                       << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_fifo_empty__q) 
                                  << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q))));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_err__q) 
                       << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q) 
                                  << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_done__q))));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 2U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 3U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 4U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                               >> 0x00000014U)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                                      >> 0x00000016U))) 
                       << 2U) | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                        >> 0x00000016U)) 
                                 | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                          >> 0x00000018U)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff800fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((0x000007e0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                       >> 5U)) | ((0x0000001eU 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                                      >> 0x0000000fU)) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                                        >> 0x00000014U)))) 
                      << 4U));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 5U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                  >> 6U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                             >> 5U)) | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                               >> 7U)) 
                                        | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                                 >> 9U)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x000003f0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                                     << 3U)));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_err_code__DOT__q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next 
            = ((IData)((0ULL != (0x000000000000ff00ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                ? 0U : ((IData)((0ULL != (0x0000000000ff0000ULL 
                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                         ? 0U : ((IData)((0ULL != (0x00000000ff000000ULL 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                                  ? 0U : ((IData)((0ULL 
                                                   != 
                                                   (0x000000ff00000000ULL 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                                           ? 0U : ((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x0000ff0000000000ULL 
                                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                >> 0x28U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x29U)))
                                                      ? 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[2U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x2aU)))
                                                       ? 
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[3U]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x2bU)))
                                                        ? 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[4U]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                    >> 0x2cU)))
                                                         ? 
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[5U]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                     >> 0x2dU)))
                                                          ? 
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[6U]
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                      >> 0x2eU)))
                                                           ? 
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[7U]
                                                           : 
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[8U])))))))
                                                    : 
                                                   ((IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x00ff000000000000ULL 
                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x30U)))
                                                      ? 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[9U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x31U)))
                                                       ? 
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000aU]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x32U)))
                                                        ? 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000bU]
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                    >> 0x33U)))
                                                         ? 
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000cU]
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                     >> 0x34U)))
                                                          ? 
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000dU]
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                      >> 0x35U)))
                                                           ? 
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000eU]
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                       >> 0x36U)))
                                                            ? 
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000fU]
                                                            : 
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000010U])))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x38U)))
                                                      ? 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000011U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x39U)))
                                                       ? 
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[1U]
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x3aU)))
                                                        ? 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0U]
                                                        : 0xffffffffU)))))))));
    }
}

void Vsim___024root___nba_comb__TOP__210(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__210\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o));
}

void Vsim___024root___nba_comb__TOP__211(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__211\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x0000000fffffffffULL & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__wvalid_i))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_wdata
                                                : (
                                                   (0x047fU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & ((IData)(0x00000024U) 
                                                        * 
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000023U) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & ((IData)(0x00000024U) 
                                                                           * 
                                                                           (0x0000001fU 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000001fU 
                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000024U) 
                                                           * 
                                                           (0x0000001fU 
                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000024U) 
                                                             * 
                                                             (0x0000001fU 
                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000001fU 
                                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000001fU 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (0x0000003fU 
                                                                           & (((IData)(0x00000024U) 
                                                                               * 
                                                                               (0x0000001fU 
                                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000024U) 
                                                              * 
                                                              (0x0000001fU 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                                                    : 0ULL))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__rdata_tlword 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                               >> 4U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                         >> 3U)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                              >> 2U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                               >> 1U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1452__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1452__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1452__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1452__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata)) 
                & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))
                ? (0x000000000000000fULL | ((QData)((IData)(
                                                            (((0U 
                                                               == 
                                                               (0x0000001fU 
                                                                & (((IData)(0x01ffU) 
                                                                    - 
                                                                    VL_SHIFTL_III(9,9,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                   - (IData)(0x001fU))))
                                                               ? 0U
                                                               : 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[
                                                               (((IData)(0x0000001fU) 
                                                                 + 
                                                                 (0x000001ffU 
                                                                  & (((IData)(0x01ffU) 
                                                                      - 
                                                                      VL_SHIFTL_III(9,9,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                     - (IData)(0x001fU)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x00000020U) 
                                                                - 
                                                                (0x0000001fU 
                                                                 & (((IData)(0x01ffU) 
                                                                     - 
                                                                     VL_SHIFTL_III(9,9,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                    - (IData)(0x001fU)))))) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[
                                                                (0x0000000fU 
                                                                 & ((((IData)(0x01ffU) 
                                                                      - 
                                                                      VL_SHIFTL_III(9,9,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                     - (IData)(0x001fU)) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & (((IData)(0x01ffU) 
                                                                     - 
                                                                     VL_SHIFTL_III(9,9,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                    - (IData)(0x001fU))))))) 
                                            << 4U))
                : (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT____VdfgRegularize_hf9cc5a99_0_3))
                    ? (0x000000000000000fULL | ((QData)((IData)(
                                                                (((0U 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & (((IData)(0x03ffU) 
                                                                        - 
                                                                        VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                       - (IData)(0x001fU))))
                                                                   ? 0U
                                                                   : 
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[
                                                                   (((IData)(0x0000001fU) 
                                                                     + 
                                                                     (0x000003ffU 
                                                                      & (((IData)(0x03ffU) 
                                                                          - 
                                                                          VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                         - (IData)(0x001fU)))) 
                                                                    >> 5U)] 
                                                                   << 
                                                                   ((IData)(0x00000020U) 
                                                                    - 
                                                                    (0x0000001fU 
                                                                     & (((IData)(0x03ffU) 
                                                                         - 
                                                                         VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                        - (IData)(0x001fU)))))) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[
                                                                    (0x0000001fU 
                                                                     & ((((IData)(0x03ffU) 
                                                                          - 
                                                                          VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                         - (IData)(0x001fU)) 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x0000001fU 
                                                                     & (((IData)(0x03ffU) 
                                                                         - 
                                                                         VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                        - (IData)(0x001fU))))))) 
                                                << 4U))
                    : (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata)) 
                        & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))
                        ? (0x000000000000000fULL | 
                           ((QData)((IData)((((0U == 
                                               (0x0000001fU 
                                                & (((IData)(0x01ffU) 
                                                    - 
                                                    VL_SHIFTL_III(9,9,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                              >> 5U))), 5U)) 
                                                   - (IData)(0x001fU))))
                                               ? 0U
                                               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000001ffU 
                                                     & (((IData)(0x01ffU) 
                                                         - 
                                                         VL_SHIFTL_III(9,9,32, 
                                                                       (0x0000000fU 
                                                                        & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                        - (IData)(0x001fU)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (((IData)(0x01ffU) 
                                                        - 
                                                        VL_SHIFTL_III(9,9,32, 
                                                                      (0x0000000fU 
                                                                       & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                       - (IData)(0x001fU)))))) 
                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[
                                                (0x0000000fU 
                                                 & ((((IData)(0x01ffU) 
                                                      - 
                                                      VL_SHIFTL_III(9,9,32, 
                                                                    (0x0000000fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                     - (IData)(0x001fU)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & (((IData)(0x01ffU) 
                                                     - 
                                                     VL_SHIFTL_III(9,9,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                               >> 5U))), 5U)) 
                                                    - (IData)(0x001fU))))))) 
                            << 4U)) : (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata)) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT____VdfgRegularize_hf9cc5a99_0_3))
                                        ? (0x000000000000000fULL 
                                           | ((QData)((IData)(
                                                              (((0U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & (((IData)(0x03ffU) 
                                                                      - 
                                                                      VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                     - (IData)(0x001fU))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000003ffU 
                                                                    & (((IData)(0x03ffU) 
                                                                        - 
                                                                        VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                       - (IData)(0x001fU)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x00000020U) 
                                                                  - 
                                                                  (0x0000001fU 
                                                                   & (((IData)(0x03ffU) 
                                                                       - 
                                                                       VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                      - (IData)(0x001fU)))))) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[
                                                                  (0x0000001fU 
                                                                   & ((((IData)(0x03ffU) 
                                                                        - 
                                                                        VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                       - (IData)(0x001fU)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & (((IData)(0x03ffU) 
                                                                       - 
                                                                       VL_SHIFTL_III(10,10,32, 
                                                                                (0x0000001fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                                                                                >> 5U))), 5U)) 
                                                                      - (IData)(0x001fU))))))) 
                                              << 4U))
                                        : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rdata_o))))
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rdata_o);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] = 0x000000ffU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] = 0U;
    if (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
          >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rvalid_i))) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                    = (0x000000f0U | (((IData)((QData)((IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                                                >> 4U)))) 
                                       << 8U) | (0x0000000fU 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                    = (((IData)((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                                 >> 4U)))) 
                        >> 0x00000018U) | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                                                     >> 4U))) 
                                                    >> 0x00000020U)) 
                                           << 8U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                    = ((IData)(((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                                 >> 4U))) 
                                >> 0x00000020U)) >> 0x00000018U);
            }
        } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U]) 
                   | (0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[1U]));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[2U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                = (IData)((((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                             >> 4U))) 
                            << 8U) | (QData)((IData)(
                                                     ((0x000000f0U 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U]) 
                                                      | (0x0000000fU 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i)))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U]) 
                   | (IData)(((((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i 
                                                 >> 4U))) 
                                << 8U) | (QData)((IData)(
                                                         ((0x000000f0U 
                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U]) 
                                                          | (0x0000000fU 
                                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rdata_i)))))) 
                              >> 0x00000020U)));
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[2U];
        }
    } else if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[2U];
        if ((1U & (~ ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q)) 
                      & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__hash_process_i) 
                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_q)))))) {
            if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q)) 
                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__hash_process_i) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_q)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                    = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                    = (0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                    = (0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U]);
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rdata 
            = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))
                ? 0ULL : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))
                           ? 0ULL : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))
                                      ? (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                                      : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i)));
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rdata 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))
                ? ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))
                    ? (QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i 
                                       >> 0x00000020U)))
                    : 0ULL) : 0ULL);
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data))) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rdata 
                = ((0U == (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                 >> 3U))) ? 0x0000000080000000ULL
                    : ((1U == (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                     >> 3U))) ? (0x0000000000800000ULL 
                                                 | ((QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U]))) 
                                                    << 0x00000018U))
                        : ((2U == (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                         >> 3U))) ? 
                           (0x0000000000008000ULL | 
                            ((QData)((IData)((0x0000ffffU 
                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                                                  << 8U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                                                    >> 0x00000018U))))) 
                             << 0x00000010U)) : (0x0000000000000080ULL 
                                                 | ((QData)((IData)(
                                                                    (0x00ffffffU 
                                                                     & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                                                                         << 0x00000010U) 
                                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U] 
                                                                           >> 0x00000010U))))) 
                                                    << 8U)))));
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                                         >> 3U))) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                                            >> 3U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                                             >> 3U))))))))))) {
                if ((0U != (((2U == (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                           >> 3U))) 
                             << 2U) | (((1U == (3U 
                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                                   >> 3U))) 
                                        << 1U) | (0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                                      >> 3U))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: prim_sha2_pad.sv:113: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_prim_sha2_512.gen_multimode_logic.u_prim_sha2_multimode.u_pad: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                              >> 3U)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/prim_sha2_pad.sv", 113, "");
                    }
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rdata 
                = ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                    ? ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                        ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                            ? (0x0000000000000080ULL 
                               | (0xffffffffffffff00ULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U])) 
                                      << 0x00000038U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U])) 
                                         << 0x00000018U) 
                                        | (0x00ffffffffffff00ULL 
                                           & ((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U])) 
                                              >> 8U))))))
                            : (0x0000000000008000ULL 
                               | (0xffffffffffff0000ULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U])) 
                                      << 0x00000038U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U])) 
                                         << 0x00000018U) 
                                        | (0x00ffffffffff0000ULL 
                                           & ((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U])) 
                                              >> 8U)))))))
                        : ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                            ? (0x0000000000800000ULL 
                               | (0xffffffffff000000ULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U])) 
                                      << 0x00000038U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U])) 
                                        << 0x00000018U))))
                            : (0x0000000080000000ULL 
                               | ((QData)((IData)((
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                                                      >> 8U)))) 
                                  << 0x00000020U))))
                    : ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                        ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                            ? (0x0000008000000000ULL 
                               | ((QData)((IData)((0x00ffffffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                                                         >> 0x00000010U))))) 
                                  << 0x00000028U)) : 
                           (0x0000800000000000ULL | 
                            ((QData)((IData)((0x0000ffffU 
                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U] 
                                                  << 8U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U] 
                                                    >> 0x00000018U))))) 
                             << 0x00000030U))) : ((8U 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))
                                                   ? 
                                                  (0x0080000000000000ULL 
                                                   | ((QData)((IData)(
                                                                      (0x000000ffU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U]))) 
                                                      << 0x00000038U))
                                                   : 0x8000000000000000ULL)));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rdata 
            = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[2U])) 
                << 0x00000038U) | (((QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[1U])) 
                                    << 0x00000018U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U])) 
                                      >> 8U)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q) 
                      >> 1U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid = 1U;
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid 
            = ((1U & (~ ((~ (0x000000ffU == (0x000000ffU 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U]))) 
                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_valid)))) 
               && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_q)
                    ? ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_msg_len))) 
                       && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_valid))
                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_valid)));
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_msg_len) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__hash_done_next = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo = 0U;
    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid)))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__msg_feed_complete_o) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__hash_done_next = 1U;
                }
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__shaf_rvalid;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__msg_feed_complete_o) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__one_chunk_done))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__hash_done_next = 1U;
            }
        }
    }
    if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                  >> 3U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready 
                    = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))
                        ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo) 
                           & (0U != (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                           >> 3U))))
                        : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo) 
                           & (0U != (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                                           >> 3U)))));
            }
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready 
                = ((1U & (~ ((~ (0x000000ffU == (0x000000ffU 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__full_word[0U]))) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_valid)))) 
                   && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_q)
                        ? ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_msg_len))) 
                           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo))
                        : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_w_from_fifo)));
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_msg_len) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready = 0U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready = 0U;
    if (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
          >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__fifo_rvalid_i))) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready 
                = ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_q))
                    ? (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))
                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready));
        } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__sha_ready;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready = 0U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
                  ? ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)) 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__shaf_rready))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x0000001fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
}

void Vsim___024root___nba_comb__TOP__212(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__212\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT__rst_no 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__u_rst_sync.rst_ni) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__u_rst_sync.rst_ni));
}

void Vsim___024root___nba_comb__TOP__213(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__213\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    __VExpandSel_WordIdx_1 = (0x0000001fU & (((IData)(0x00000048U) 
                                              * (0x0000000fU 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000048U) 
                                             * (0x0000000fU 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__empty) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[2U] = 0U;
    } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wvalid_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[2U] 
            = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[2U]);
    } else if ((0x02cfU >= (0x000003ffU & ((IData)(0x00000048U) 
                                           * (0x0000000fU 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_1] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[1U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[2U] 
            = (0x000000ffU & (((((0x00000014U <= __VExpandSel_WordIdx_1)
                                  ? 0U : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_1)]) 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[2U] 
            = (0x000000ffU & 0U);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__rdata_tlword 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__tlram_rdata 
           & ((((0x0000ff00U & ((- (IData)((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                  >> 4U)))) 
                                << 8U)) | (0x000000ffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                            >> 3U)))))) 
               << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 2U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                    >> 1U))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__d_error 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1558__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1558__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1558__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1558__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__d_valid 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1572__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1572__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1572__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1572__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data[0U] 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[2U])) 
            << 0x00000038U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[1U])) 
                                << 0x00000018U) | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U])) 
                                                   >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_strb_i 
        = (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath)
                           ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write)
                               ? 0xffU : 0U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
                : ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__rdata_tlword)) 
                   << 8U)) : 0ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__d_valid) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
              & (0x00008000U == (0x00018000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o) 
              & (0x00008000U == (0x00018000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__fifo_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__fifo_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_error 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
}

void Vsim___024root___nba_comb__TOP__214(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__214\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__key_sliced
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__key_sliced
            [1U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[0U] = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[1U] = 0ULL;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][3U];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data
            [1U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
            [1U];
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__unnamedblk1__DOT__i = 4U;
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__addr_o 
            = (0x0000007fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [0U][2U] << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][1U] 
                                                  >> 0x0000001eU)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__addr_o = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [2U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [0U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [1U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_state_partial_i 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__mode_q))
            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][1U] << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][0U] >> 0x00000018U))
            : vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__1555__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__1555__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1555__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1555__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1555__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1556__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1556__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1556__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1556__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & ((0U == (7U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U] >> 0x0000000cU) & ((0U == (7U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                        | (1U == (7U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__1569__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__1569__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1569__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1569__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1569__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1570__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1570__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1570__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1570__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
        = (((QData)((IData)((((((((((0x0038U == (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))) 
                                    << 3U) | ((0x0037U 
                                               == (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                              << 2U)) 
                                  | (((0x0036U == (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                      << 1U) | (0x0035U 
                                                == 
                                                (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))))) 
                                 << 9U) | (((0x0034U 
                                             == (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))) 
                                            << 8U) 
                                           | (((0x0033U 
                                                == 
                                                (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))) 
                                               << 7U) 
                                              | ((0x0032U 
                                                  == 
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                                 << 6U)))) 
                               | ((((0x0031U == (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))) 
                                    << 5U) | (((0x0030U 
                                                == 
                                                (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][1U] 
                                                       >> 0x0000001eU)))) 
                                               << 4U) 
                                              | ((0x002fU 
                                                  == 
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                                 << 3U))) 
                                  | (((0x002eU == (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                      << 2U) | (((0x002dU 
                                                  == 
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                                 << 1U) 
                                                | (0x002cU 
                                                   == 
                                                   (0x000003ffU 
                                                    & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          >> 0x0000001eU)))))))) 
                              << 0x0000000cU) | (((
                                                   (((0x002bU 
                                                      == 
                                                      (0x000003ffU 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 5U) 
                                                    | (((0x002aU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 4U) 
                                                       | ((0x0029U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 3U))) 
                                                   | (((0x0028U 
                                                        == 
                                                        (0x000003ffU 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][2U] 
                                                             << 2U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U) 
                                                      | (((0x0027U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 1U) 
                                                         | (0x0026U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU))))))) 
                                                  << 6U) 
                                                 | ((((0x0025U 
                                                       == 
                                                       (0x000003ffU 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 2U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 5U) 
                                                     | (((0x0024U 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 4U) 
                                                        | ((0x0023U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 3U))) 
                                                    | (((0x0022U 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 2U) 
                                                       | (((0x0021U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 1U) 
                                                          | (0x0020U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU))))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0x001fU 
                                                       == 
                                                       (0x000003ffU 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][2U] 
                                                            << 2U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 3U) 
                                                     | ((0x001eU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 2U)) 
                                                    | (((0x001dU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 1U) 
                                                       | (0x001cU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))))) 
                                                   << 0x0000000cU) 
                                                  | (((((0x001bU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 3U) 
                                                       | ((0x001aU 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 2U)) 
                                                      | (((0x0019U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 1U) 
                                                         | (0x0018U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))))) 
                                                     << 8U)) 
                                                 | ((((((0x0017U 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                              [2U][2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][1U] 
                                                                >> 0x0000001eU)))) 
                                                        << 3U) 
                                                       | ((0x0016U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 2U)) 
                                                      | (((0x0015U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 1U) 
                                                         | (0x0014U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))))) 
                                                     << 4U) 
                                                    | ((((0x0013U 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 3U) 
                                                        | ((0x0012U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 2U)) 
                                                       | (((0x0011U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 1U) 
                                                          | (0x0010U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU)))))))) 
                                                << 0x00000010U) 
                                               | (((((((0x000fU 
                                                        == 
                                                        (0x000003ffU 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][2U] 
                                                             << 2U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 3U) 
                                                      | ((0x000eU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 2U)) 
                                                     | (((0x000dU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 1U) 
                                                        | (0x000cU 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))))) 
                                                    << 0x0000000cU) 
                                                   | (((((0x000bU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 3U) 
                                                        | ((0x000aU 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 2U)) 
                                                       | (((9U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 1U) 
                                                          | (8U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU)))))) 
                                                      << 8U)) 
                                                  | ((((((7U 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                               [2U][2U] 
                                                               << 2U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 3U) 
                                                        | ((6U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 2U)) 
                                                       | (((5U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                 [2U][2U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][1U] 
                                                                   >> 0x0000001eU)))) 
                                                           << 1U) 
                                                          | (4U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU)))))) 
                                                      << 4U) 
                                                     | ((((3U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                [2U][2U] 
                                                                << 2U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][1U] 
                                                                  >> 0x0000001eU)))) 
                                                          << 3U) 
                                                         | ((2U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU)))) 
                                                            << 2U)) 
                                                        | (((1U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [2U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [2U][1U] 
                                                                    >> 0x0000001eU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x000003ffU 
                                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                   [2U][2U] 
                                                                   << 2U) 
                                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [2U][1U] 
                                                                     >> 0x0000001eU))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1577__val 
                = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1577__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1577__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1577__Vfuncout));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__msg_data_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__msg_data_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
           [0U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____VdfgRegularize_h4f2315ce_0_0);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
           [1U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____VdfgRegularize_h4f2315ce_0_0);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_win_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((~ (IData)(((0x00008000U == (0x0001c000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rdata_o)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__rready_i)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
    if ((1U & (~ VL_ONEHOT_Q(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))) {
        if ((0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: kmac_reg_top.sv:2988: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/kmac_reg_top.sv", 2988, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__msg_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__msg_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [1U];
}

void Vsim___024root___nba_comb__TOP__215(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__215\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [1U][3U] >> 9U))) | 
                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__instr_error) 
                  | ((~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [1U][3U] >> 9U))) 
                          | ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [1U][3U] 
                                           >> 9U))) 
                             | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [1U][3U] 
                                             >> 9U))))) 
                         & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err.__PVT__addr_sz_chk) 
                            & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err.__PVT__mask_chk) 
                               & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 9U))) 
                                  | ((1U == (7U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [1U][3U] 
                                                   >> 9U))) 
                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err.__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err.__PVT__instr_type_err) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((4U != (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [0U][3U] >> 9U))) | 
                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__instr_error) 
                  | ((~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [0U][3U] >> 9U))) 
                          | ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [0U][3U] 
                                           >> 9U))) 
                             | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [0U][3U] 
                                             >> 9U))))) 
                         & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err.__PVT__addr_sz_chk) 
                            & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err.__PVT__mask_chk) 
                               & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 9U))) 
                                  | ((1U == (7U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [0U][3U] 
                                                   >> 9U))) 
                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err.__PVT__fulldata_chk))))))) 
                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err.__PVT__instr_type_err) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__req_o 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [1U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__req_o 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [0U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__sw_valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__req_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__gnt_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__we_o)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__we_o)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__req_o) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__gnt_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT____VdfgRegularize_hdd26c315_0_0 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__gnt_i) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT____VdfgRegularize_hdd26c315_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)
                                      ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_error)) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT____VdfgRegularize_hdd26c315_0_0)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)
                                          ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT____VdfgRegularize_hdd26c315_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__tl_win_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rsp_gen__DOT__tl_i[2U];
}

extern const VlWide<25>/*799:0*/ Vsim__ConstPool__CONST_hba963b7f_0;

void Vsim___024root___nba_comb__TOP__216(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__216\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U]);
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000019U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000020U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000021U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000022U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000023U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000024U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000025U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000026U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000027U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000028U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000029U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                   >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
                                      << 3U)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | (Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000019U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000020U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000021U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000022U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000023U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000024U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000025U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000026U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000027U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000028U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000029U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                   >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U] 
                                      << 3U)));
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                  << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000039U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000045U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000046U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000047U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
            = (0x000001ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                               >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
                                                  << 6U)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | (Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                  << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000039U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000045U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000046U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000047U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
            = (0x000001ffU & ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                               >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U] 
                                                  << 6U)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[0U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[1U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[3U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[4U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[6U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[7U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
                                              >> 7U)));
}

void Vsim___024root___nba_comb__TOP__217(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__217\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_or_hi__689__Vfuncout;
    __Vfunc_mubi4_or_hi__689__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__689__a;
    __Vfunc_mubi4_or_hi__689__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__689__b;
    __Vfunc_mubi4_or_hi__689__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__690__Vfuncout;
    __Vfunc_mubi4_or__690__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__690__a;
    __Vfunc_mubi4_or__690__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__690__b;
    __Vfunc_mubi4_or__690__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__690__a_in;
    __Vfunc_mubi4_or__690__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__690__b_in;
    __Vfunc_mubi4_or__690__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__854__Vfuncout;
    __Vfunc_mubi4_test_true_loose__854__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__854__val;
    __Vfunc_mubi4_test_true_loose__854__val = 0;
    // Body
    __Vfunc_mubi4_or_hi__689__b = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg2hw[0x00000028U] 
                                                  >> 0x00000010U));
    __Vfunc_mubi4_or_hi__689__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__lc_conv_disable;
    __Vfunc_mubi4_or__690__b = __Vfunc_mubi4_or_hi__689__b;
    __Vfunc_mubi4_or__690__a = __Vfunc_mubi4_or_hi__689__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_or__690__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6122320277492008389ull);
    __Vfunc_mubi4_or__690__a_in = __Vfunc_mubi4_or__690__a;
    __Vfunc_mubi4_or__690__b_in = __Vfunc_mubi4_or__690__b;
    vlSelfRef.__Vfunc_mubi4_or__690__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_or__690__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_or__690__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__690__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_or__690__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__690__b_in)))));
    vlSelfRef.__Vfunc_mubi4_or__690__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__690__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_or__690__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__690__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_or__690__a_in) 
                                                       | (IData)(__Vfunc_mubi4_or__690__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_or__690__Vfuncout = vlSelfRef.__Vfunc_mubi4_or__690__out;
    __Vfunc_mubi4_or_hi__689__Vfuncout = __Vfunc_mubi4_or__690__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf 
        = __Vfunc_mubi4_or_hi__689__Vfuncout;
    __Vfunc_mubi4_test_true_loose__854__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_test_true_loose__854__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__854__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT____Vcellinp__u_scramble__disable_i 
        = __Vfunc_mubi4_test_true_loose__854__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__218(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__218\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__Vfuncout;
    __Vfunc_mubi4_and_hi__692__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__a;
    __Vfunc_mubi4_and_hi__692__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__b;
    __Vfunc_mubi4_and_hi__692__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__Vfuncout;
    __Vfunc_mubi4_and__693__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__a;
    __Vfunc_mubi4_and__693__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__b;
    __Vfunc_mubi4_and__693__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__a_in;
    __Vfunc_mubi4_and__693__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__b_in;
    __Vfunc_mubi4_and__693__b_in = 0;
    // Body
    __Vfunc_mubi4_and_hi__692__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_exec_en_buf__in_i;
    __Vfunc_mubi4_and_hi__692__a = (0x0000000fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf)));
    __Vfunc_mubi4_and__693__b = __Vfunc_mubi4_and_hi__692__b;
    __Vfunc_mubi4_and__693__a = __Vfunc_mubi4_and_hi__692__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__693__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 268722799298027071ull);
    __Vfunc_mubi4_and__693__a_in = __Vfunc_mubi4_and__693__a;
    __Vfunc_mubi4_and__693__b_in = __Vfunc_mubi4_and__693__b;
    vlSelfRef.__Vfunc_mubi4_and__693__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__693__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__693__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__693__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__693__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__693__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__693__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__693__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__693__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__693__out;
    __Vfunc_mubi4_and_hi__692__Vfuncout = __Vfunc_mubi4_and__693__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_exec_en 
        = __Vfunc_mubi4_and_hi__692__Vfuncout;
}

extern const VlUnpacked<CData/*7:0*/, 16> Vsim__ConstPool__TABLE_h6b2eee4a_0;

void Vsim___024root___nba_comb__TOP__219(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__219\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1168__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1168__val;
    __Vfunc_mubi4_bool_to_mubi__1168__val = 0;
    CData/*3:0*/ __Vtableidx120;
    __Vtableidx120 = 0;
    CData/*3:0*/ __Vtableidx121;
    __Vtableidx121 = 0;
    CData/*3:0*/ __Vtableidx122;
    __Vtableidx122 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_388)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0800U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__we_o) 
           & (((0U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001eU)))) 
               & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x00000018U)))))) 
              | (((1U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                          >> 0x0000001eU)))) 
                  & (0U != (0x0000000fU & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000018U)))))) 
                 | (((2U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001eU)))) 
                     & (0U != (0x0000000fU & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x00000018U)))))) 
                    | (((3U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                        & (0U != (0x0000000fU & (~ 
                                                 ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000018U)))))) 
                       | (((4U == (0x0000003fU & ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001eU)))) 
                           & (0U != (0x0000000fU & 
                                     (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                          << 8U) | 
                                         (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                          >> 0x00000018U)))))) 
                          | (((5U == (0x0000003fU & 
                                      ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                              & (0U != (0x0000000fU 
                                        & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000018U)))))) 
                             | (((6U == (0x0000003fU 
                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001eU)))) 
                                 & (0U != (0x0000000fU 
                                           & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x00000018U)))))) 
                                | (((7U == (0x0000003fU 
                                            & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                                    & (0U != (0x0000000fU 
                                              & (~ 
                                                 ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000018U)))))) 
                                   | (((8U == (0x0000003fU 
                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001eU)))) 
                                       & (0U != (0x0000000fU 
                                                 & (~ 
                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000018U)))))) 
                                      | (((9U == (0x0000003fU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001eU)))) 
                                          & (0U != 
                                             (0x0000000fU 
                                              & (~ 
                                                 ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000018U)))))) 
                                         | (((0x0aU 
                                              == (0x0000003fU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001eU)))) 
                                             & (0U 
                                                != 
                                                (0x0000000fU 
                                                 & (~ 
                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000018U)))))) 
                                            | (((0x0bU 
                                                 == 
                                                 (0x0000003fU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001eU)))) 
                                                & (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (~ 
                                                       ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x00000018U)))))) 
                                               | (((0x0cU 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 2U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001eU)))) 
                                                   & (0U 
                                                      != 
                                                      (0x0000000fU 
                                                       & (~ 
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x00000018U)))))) 
                                                  | (((0x0dU 
                                                       == 
                                                       (0x0000003fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      & (0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & (~ 
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x00000018U)))))) 
                                                     | (((0x0eU 
                                                          == 
                                                          (0x0000003fU 
                                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 2U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001eU)))) 
                                                         & (0U 
                                                            != 
                                                            (0x0000000fU 
                                                             & (~ 
                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x00000018U)))))) 
                                                        | (((0x0fU 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 2U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001eU)))) 
                                                            & (0U 
                                                               != 
                                                               (0x0000000fU 
                                                                & (~ 
                                                                   ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                     << 8U) 
                                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x00000018U)))))) 
                                                           | (((0x10U 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001eU)))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x0000000fU 
                                                                   & (~ 
                                                                      ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                        << 8U) 
                                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x00000018U)))))) 
                                                              | (((0x11U 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                        << 2U) 
                                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x0000001eU)))) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x0000000fU 
                                                                      & (~ 
                                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x00000018U)))))) 
                                                                 | (((0x12U 
                                                                      == 
                                                                      (0x0000003fU 
                                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                           << 2U) 
                                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x0000001eU)))) 
                                                                     & (0U 
                                                                        != 
                                                                        (0x0000000fU 
                                                                         & (~ 
                                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                              << 8U) 
                                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                    | (((0x13U 
                                                                         == 
                                                                         (0x0000003fU 
                                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                              << 2U) 
                                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                        & (0U 
                                                                           != 
                                                                           (0x0000000fU 
                                                                            & (~ 
                                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                       | (((0x14U 
                                                                            == 
                                                                            (0x0000003fU 
                                                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                           & (0U 
                                                                              != 
                                                                              (0x0000000fU 
                                                                               & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                          | (((0x15U 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                              & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                             | (((0x16U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U))))) 
                                                                                & ((0x1eU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x1fU 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x20U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | (0x21U 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))))))))))))))))))))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addrmiss 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__re_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__re_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re 
        = ((0x1dU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_0__DOT__re 
        = ((0x19U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_1__DOT__re 
        = ((0x1aU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_2__DOT__re 
        = ((0x1bU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_3__DOT__re 
        = ((0x1cU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we 
        = ((0x20U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__we 
        = ((0x18U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__we 
        = ((0x1fU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__we 
        = ((0x15U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__we 
        = ((0x16U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__we 
        = ((0x17U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we 
        = ((1U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we 
        = ((2U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we 
        = ((3U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we 
        = ((4U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we 
        = ((5U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we 
        = ((6U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we 
        = ((7U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we 
        = ((8U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we 
        = ((9U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we 
        = ((0x0aU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we 
        = ((0x0bU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we 
        = ((0x0cU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we 
        = ((0x0dU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we 
        = ((0x0eU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we 
        = ((0x0fU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we 
        = ((0x10U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we 
        = ((0U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we 
        = ((0x1dU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we 
        = ((0x11U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we 
        = ((0x12U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we 
        = ((0x13U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we 
        = ((0x14U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_out_re__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_3__DOT__re) 
             << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_2__DOT__re) 
                       << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_1__DOT__re) 
                                   << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_0__DOT__re)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_iv_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we) 
             << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we) 
                       << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we) 
                                   << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((((((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_0__DOT__re) 
                                                    << 3U) 
                                                   | (4U 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 5U))) 
                                                  | (((0x0000003fU 
                                                       == 
                                                       (0x0000003fU 
                                                        & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                 << 0x0000000dU) 
                                                | (((0x0000001cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 2U)) 
                                                    | (((0x0000003fU 
                                                         == 
                                                         (0x0000003fU 
                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 1U)) 
                                                    | (((0x0000003fU 
                                                         == 
                                                         (0x0000003fU 
                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                   << 5U) 
                                                  | ((0x0000001cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 2U)) 
                                                     | (((0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003f0U 
                                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                       >> 0x00000016U)) 
                                                                   | (((0x0000003fU 
                                                                        == 
                                                                        (0x0000003fU 
                                                                         & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re) 
                                                                          << 2U) 
                                                                         | (3U 
                                                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                               >> 0x00000018U))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((((((0x0000003fU 
                                                                         == 
                                                                         (0x0000003fU 
                                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__committed_q) 
                                                                             << 2U))) 
                                                                      | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q))) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                                                                              << 2U))) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q)))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_0__DOT__re) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 5U))) 
                                                   | (((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                  << 0x0000000dU) 
                                                 | (((0x0000001cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 2U)) 
                                                     | (((0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                    << 8U)) 
                                                | ((((4U 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 1U)) 
                                                     | (((0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))) 
                                                    << 5U) 
                                                   | ((0x0000001cU 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 2U)) 
                                                      | (((0x0000003fU 
                                                           == 
                                                           (0x0000003fU 
                                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re))))))) 
                               << 0x00000014U) | (QData)((IData)(
                                                                 ((((0x000003f0U 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                        >> 0x00000016U)) 
                                                                    | (((0x0000003fU 
                                                                         == 
                                                                         (0x0000003fU 
                                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re) 
                                                                           << 2U) 
                                                                          | (3U 
                                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                                >> 0x00000018U))))) 
                                                                   << 0x0000000aU) 
                                                                  | ((((((0x0000003fU 
                                                                          == 
                                                                          (0x0000003fU 
                                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__re) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__committed_q) 
                                                                              << 2U))) 
                                                                       | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q))) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                                                                               << 2U))) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q)))))))) 
                             >> 0x00000020U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[2U] 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_1__DOT__re) 
           << 5U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[3U] 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_2__DOT__re) 
           << 6U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[4U] 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_out_3__DOT__re) 
           << 7U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[5U] 
        = (0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[5U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[5U] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[5U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe))))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[6U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe))))) 
            >> 0x00000018U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q 
                                << 0x0000000aU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe)))) 
                                                            >> 0x00000020U)) 
                                                   << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[7U]) 
           | (((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q 
                               >> 0x00000016U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U)) 
              | (0x00000300U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q 
                                >> 0x00000016U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[7U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe))))) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[8U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe))))) 
            >> 0x00000016U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q 
                                << 0x0000000cU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[9U] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[9U]) 
           | (((0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q 
                               >> 0x00000014U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000016U)) 
              | (0x00000c00U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q 
                                >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[9U] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[9U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we))))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we))))) 
               >> 0x00000014U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_1__DOT__we)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                    >> 0x00000018U)))) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_0__DOT__we)))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 0x00000012U) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 << 9U) 
                                                | (0x000001feU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000017U)))) 
                                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                  >> 0x00000018U))))) 
                                           >> 0x00000020U))) 
                               << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0xffff8000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_2__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 0x00000012U) 
              | (0x00004000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0x00007fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we))))) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = ((0xfffe0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we))))) 
               >> 0x00000011U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_0__DOT__we)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                    >> 0x00000018U)))) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_iv_3__DOT__we)))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = ((0x0001ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 0x0000000fU) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 << 9U) 
                                                | (0x000001feU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000017U)))) 
                                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                  >> 0x00000018U))))) 
                                           >> 0x00000020U))) 
                               << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = ((0xfffc0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_1__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 0x0000000fU) 
              | (0x00020000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 6U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = ((0x0003ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we))))) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we))))) 
               >> 0x0000000eU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_3__DOT__we)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                    >> 0x00000018U)))) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_2__DOT__we)))) 
                                           >> 0x00000020U)) 
                                  << 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = ((0x000fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000011U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 0x0000000cU) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 << 9U) 
                                                | (0x000001feU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000017U)))) 
                                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                  >> 0x00000018U))))) 
                                           >> 0x00000020U))) 
                               << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0xffe00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_4__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 0x0000000cU) 
              | (0x00100000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                >> 3U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0x001fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we))))) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U] 
        = ((0xff800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we))))) 
               >> 0x0000000bU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_6__DOT__we)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                    >> 0x00000018U)))) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_5__DOT__we)))) 
                                           >> 0x00000020U)) 
                                  << 0x00000015U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U] 
        = ((0x007fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000014U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 9U) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                        << 9U) | (0x000001feU 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                     >> 0x00000017U)))) 
                       | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                         >> 0x00000018U))))) 
                                  >> 0x00000020U))) 
                      << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U] 
        = ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share1_7__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 9U) 
              | (0x00800000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we))))) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U] 
        = ((0xfc000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we))))) 
               >> 8U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_1__DOT__we)) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(
                                                       ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                           >> 0x00000018U)))) 
                                       << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_0__DOT__we)))) 
                                  >> 0x00000020U)) 
                         << 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U] 
        = ((0x03ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000017U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 6U) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                        << 9U) | (0x000001feU 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                     >> 0x00000017U)))) 
                       | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                         >> 0x00000018U))))) 
                                  >> 0x00000020U))) 
                      << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U] 
        = ((0xf8000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_2__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 6U) 
              | (0x04000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                << 3U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U] 
        = ((0x07ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we))))) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U] 
        = ((0xe0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we)) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                 >> 0x00000018U)))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we))))) 
               >> 5U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_4__DOT__we)) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(
                                                       ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                           >> 0x00000018U)))) 
                                       << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_3__DOT__we)))) 
                                  >> 0x00000020U)) 
                         << 0x0000001bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))))) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                            >> 0x00000018U)))))) 
            >> 3U) | (((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                        << 9U) | (0x000001feU 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                     >> 0x00000017U)))) 
                       | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                         >> 0x00000018U))))) 
                                  >> 0x00000020U))) 
                      << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU]) 
           | ((((0xfffffffeU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                 << 9U) | (0x000001feU 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                              >> 0x00000017U)))) 
                | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_5__DOT__we)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                   >> 0x00000018U))))) 
                           >> 0x00000020U))) >> 3U) 
              | (0x20000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                << 6U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                                >> 0x00000018U)))) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we))))) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(
                                                          ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                              >> 0x00000018U)))) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we))))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_7__DOT__we)) 
                                 << 0x00000021U) | 
                                (((QData)((IData)((
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000018U)))) 
                                  << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_key_share0_6__DOT__we)))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001dU] 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                      >> 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
        = (0x0000000fU & ((((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                   >> 0x00000018U)) 
                            | (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we)))))) 
                           << 2U) | ((2U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                            >> 0x00000017U)) 
                                     | (3U == (3U & 
                                               (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_out_re__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_out_re__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_out_re__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    __Vtableidx120 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_iv_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe 
        = Vsim__ConstPool__TABLE_h6b2eee4a_0[__Vtableidx120];
    __Vtableidx121 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_iv_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe 
        = Vsim__ConstPool__TABLE_h6b2eee4a_0[__Vtableidx121];
    __Vtableidx122 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_iv_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe 
        = Vsim__ConstPool__TABLE_h6b2eee4a_0[__Vtableidx122];
    __Vfunc_mubi4_bool_to_mubi__1168__val = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0U]);
    __Vfunc_mubi4_bool_to_mubi__1168__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1168__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_aes__idle_o 
        = __Vfunc_mubi4_bool_to_mubi__1168__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U] 
            << 7U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U] 
                      >> 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
            << 0x0000000fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
                               >> 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000017U] 
            << 6U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U] 
                      >> 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
            << 0x0000000eU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
                               >> 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][2U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U] 
            << 5U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000017U] 
                      >> 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][2U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U] 
            << 0x0000000dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
                               >> 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][3U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U] 
            << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U] 
                      >> 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][3U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000011U] 
            << 0x0000000cU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U] 
                               >> 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][4U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
            << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U] 
                      >> 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][4U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U] 
            << 0x0000000bU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000011U] 
                               >> 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][5U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
            << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
                      >> 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][5U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U] 
            << 0x0000000aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U] 
                               >> 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][6U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
            << 1U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
                      >> 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][6U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000014U] 
            << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U] 
                      >> 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[0U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init[1U][7U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U] 
            << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000014U] 
                      >> 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xfeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000015U] 
                           >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xfeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
                           >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xfdU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000016U] 
                           >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xfdU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
                           >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xfbU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000017U] 
                           >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xfbU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
                           >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xf7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000018U] 
                           >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xf7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000010U] 
                           >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xefU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (0x00000010U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000019U] 
                                    >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xefU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (0x00000010U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000011U] 
                                    >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xdfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
                                    >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xdfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000012U] 
                                    >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0xbfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (0x00000040U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
                                    >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0xbfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (0x00000040U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000013U] 
                                    >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[0U] 
        = ((0x7fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [0U]) | (0x00000080U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
                                    >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe[1U] 
        = ((0x7fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U]) | (0x00000080U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg2hw[0x00000014U] 
                                    >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_6)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_6)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_6)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_7)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe_buf[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe_buf[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_key_init_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
            [1U] << 8U) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe
           [0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_init_qe_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe_buf
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_init_qe_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe_buf
        [1U];
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_edn__Az22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.genbits_vld_o) 
            & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
               & (~ ((0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)) 
                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q))))) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
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

void Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__0(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__)
            ? ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32)
                ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i)
                    ? ((0x019fU >= (0x000001ffU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                        ? (((0U == (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                             ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                                     (((IData)(0x0000001fU) 
                                       + (0x000001ffU 
                                          & VL_SHIFTL_III(9,9,32, 
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                           | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage[
                              (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                              >> 5U))] 
                              >> (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                        : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31)
                    ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i)
                        ? ((0x019fU >= (0x000001ffU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                            ? (((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(9,9,32, 
                                                        (0x0000000fU 
                                                         & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U)))
                                 ? 0U : (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                         (((IData)(0x0000001fU) 
                                           + (0x000001ffU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, 
                                                             (0x0000000fU 
                                                              & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))) 
                               | (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage[
                                  (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U) 
                                                  >> 5U))] 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(9,9,32, 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)), 5U))))
                            : 0U) : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)
                    : ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30)
                        ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_q
                        : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q)))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data)
               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[4U]
               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0800U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = (((((((0x11U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  << 4U) 
                                                 | (((0x10U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((0x0fU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U))) 
                                                | (((0x0eU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 1U) 
                                                   | (0x0dU 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))))) 
                                               << 0x0000000dU) 
                                              | (((((0x0cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 3U) 
                                                   | ((0x0bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 2U)) 
                                                  | (((0x0aU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (9U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 9U)) 
                                             | ((((((8U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 4U) 
                                                   | (((7U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 3U) 
                                                      | ((6U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 2U) 
                                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001eU)))) 
                                                         << 2U))) 
                                                  | (((5U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 2U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001eU)))) 
                                                      << 1U) 
                                                     | (4U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))))) 
                                                 << 4U) 
                                                | ((((3U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     << 3U) 
                                                    | ((2U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 2U)) 
                                                   | (((1U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 2U) 
                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001eU)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU))))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy)
            ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q
            : ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: edn_reg_top.sv:1526: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/edn_reg_top.sv", 1526, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((1U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q)))
                : ((2U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_fatal_err__q) 
                           << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_edn_cmd_req_done__q)))
                    : ((4U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                        : ((8U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                            : ((0x00000010U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q))
                                : ((0x00000020U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                    ? ((0xffff0000U 
                                        & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q) 
                                            << 0x0000000cU) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q) 
                                              << 8U)) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_edn_enable__q))))
                                    : ((0x00000040U 
                                        & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                        ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_ins_cmd__q
                                        : vlSelfRef.u_reg__DOT____Vcellout__u_boot_gen_cmd__q)))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0x00000100U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00000200U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__q) 
                       << 3U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__q)))));
        } else if ((0x00000400U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__q) 
                       << 6U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__q) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc7fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__q) 
                      << 7U));
        } else if ((0x00000800U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00001000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((0x00002000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = vlSelfRef.u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q;
        } else if ((0x00004000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffcfffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q) 
                       << 0x0000000dU) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q) 
                                          << 0x0000000cU)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__q) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__q)));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff8fffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__q) 
                       << 0x00000016U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__q) 
                                           << 0x00000015U) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__q) 
                                             << 0x00000014U))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x8fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__q) 
                       << 0x0000001eU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__q) 
                                           << 0x0000001dU) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__q) 
                                             << 0x0000001cU))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x00010000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? ((0xffffffe0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q))
                : ((0x00020000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_main_sm_state__DOT__q))
                    : 0xffffffffU));
    }
}

void Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__1(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__1\n"); );
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
}

void Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__2(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__2\n"); );
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
}

extern const VlUnpacked<CData/*2:0*/, 256> Vsim__ConstPool__TABLE_hb753c260_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vsim__ConstPool__TABLE_hb349ab12_0;

void Vsim_edn__Az22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__4(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1520;
    __VdfgRegularize_h6e95ff9d_0_1520 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1521;
    __VdfgRegularize_h6e95ff9d_0_1521 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1522;
    __VdfgRegularize_h6e95ff9d_0_1522 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1523;
    __VdfgRegularize_h6e95ff9d_0_1523 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1524;
    __VdfgRegularize_h6e95ff9d_0_1524 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1525;
    __VdfgRegularize_h6e95ff9d_0_1525 = 0;
    // Body
    vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw;
    if ((0x0132U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x018eU;
        }
    } else if ((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
    } else if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x00ebU;
        }
    } else if ((0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
            vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0025U;
        }
    } else if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x005cU;
    } else if ((0x01d1U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
    }
    if ((0x0132U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
        if ((0x018eU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x005cU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00ebU != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 1U;
                    }
                }
            }
            if ((0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
                    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) {
                        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x01d1U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__)) 
                & ((((0x018eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw)) 
                     | (0x005cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x00ebU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0025U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = 0x0132U;
        vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = 0U;
    }
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o)) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__dst_req_o));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__) 
            & (1U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o)) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))
                     : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status)) 
                 & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data)
                        ? (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q))
                        : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q)))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld)
            ? (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U])))
            : vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q);
    vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q) 
              & (vlSelfRef.__PVT__u_edn_core__DOT__cs_rdata_capt_q 
                 == (((QData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U]))))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
              | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
                 | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))))));
    __VdfgRegularize_h6e95ff9d_0_1520 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1521 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1520) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_1522 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1521) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 3U)));
    __VdfgRegularize_h6e95ff9d_0_1523 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1522) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_1524 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1523) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_1525 = (1U & ((IData)(__VdfgRegularize_h6e95ff9d_0_1524) 
                                               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                                                  >> 6U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out 
        = (((((((IData)(__VdfgRegularize_h6e95ff9d_0_1525) 
                | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req) 
                   >> 7U)) << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1525) 
                                     << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1524) 
                                                 << 1U) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_1523))) 
            << 4U) | ((((IData)(__VdfgRegularize_h6e95ff9d_0_1522) 
                        << 3U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1521) 
                                  << 2U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1520) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out) 
                          ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    __Vtableidx3 = vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_hb753c260_0[__Vtableidx3];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb349ab12_0[__Vtableidx3];
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i)
            ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 7U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 6U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 5U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 4U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 3U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 2U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o) 
              >> 1U));
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o) 
            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o)) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = 0U;
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)));
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                              - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data))));
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                     ? 4U : (7U & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q) 
                                   - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data)))));
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] = 0U;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data) {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i[3U];
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[0U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[0U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[1U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[1U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[2U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[2U];
        vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d[3U] 
            = vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q[3U];
    }
    vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_d = 
        (((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                        : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                           >> 7U))) << 1U)) | (1U & 
                                               ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                    >> 6U))))) 
           << 6U) | (((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                  ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                  : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                     >> 5U))) << 1U)) 
                      | (1U & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 4U))))) << 4U)) 
         | ((((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                      & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                          ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                          : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                             >> 3U))) << 1U)) | (1U 
                                                 & ((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                                                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                                        ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                                        >> 2U))))) 
             << 2U) | ((2U & (((~ (IData)(vlSelfRef.u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o)) 
                               & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                   : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q) 
                                      >> 1U))) << 1U)) 
                       | (1U & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__)) 
                                & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data)
                                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_fips_q)
                                    : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_fips_q)))))));
}

void Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                 >> 4U)));
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

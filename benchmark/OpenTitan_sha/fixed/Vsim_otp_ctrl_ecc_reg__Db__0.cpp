// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0(Vsim_otp_ctrl_ecc_reg__Db* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel)
            ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i
            : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__data_o);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U] 
        = (0x000000ffU & (((((2U & ((~ VL_REDXOR_64(
                                                    (0x7aed348d221a4420ULL 
                                                     & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0xcbdaaa4a91152210ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                            << 6U) | (((2U & ((~ VL_REDXOR_64(
                                                              (0xb5b65926488c9108ULL 
                                                               & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0xb671c711c4438884ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                      << 4U)) | (((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_64(
                                                                     (0xcd0fc0f03c207842ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_64(
                                                                     (0x67003ff003e007c1ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_64(
                                                                      (0x5e00000fffe0003fULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xb9000000001fffffULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))))));
    vlSelfRef.__PVT__data_d[0U] = vlSelfRef.__PVT__data_q[0U];
    vlSelfRef.__PVT__data_d[1U] = vlSelfRef.__PVT__data_q[1U];
    vlSelfRef.__PVT__data_d[2U] = vlSelfRef.__PVT__data_q[2U];
    vlSelfRef.__PVT__data_d[3U] = vlSelfRef.__PVT__data_q[3U];
    vlSelfRef.__PVT__data_d[4U] = vlSelfRef.__PVT__data_q[4U];
    vlSelfRef.__PVT__data_d[5U] = vlSelfRef.__PVT__data_q[5U];
    vlSelfRef.__PVT__data_d[6U] = vlSelfRef.__PVT__data_q[6U];
    vlSelfRef.__PVT__data_d[7U] = vlSelfRef.__PVT__data_q[7U];
    vlSelfRef.__PVT__data_d[8U] = vlSelfRef.__PVT__data_q[8U];
    vlSelfRef.__PVT__data_d[9U] = vlSelfRef.__PVT__data_q[9U];
    vlSelfRef.__PVT__data_d[0x0000000aU] = vlSelfRef.__PVT__data_q[0x0000000aU];
    vlSelfRef.__PVT__data_d[0x0000000bU] = vlSelfRef.__PVT__data_q[0x0000000bU];
    vlSelfRef.__PVT__data_d[0x0000000cU] = vlSelfRef.__PVT__data_q[0x0000000cU];
    vlSelfRef.__PVT__data_d[0x0000000dU] = vlSelfRef.__PVT__data_q[0x0000000dU];
    vlSelfRef.__PVT__data_d[0x0000000eU] = vlSelfRef.__PVT__data_q[0x0000000eU];
    vlSelfRef.__PVT__data_d[0x0000000fU] = vlSelfRef.__PVT__data_q[0x0000000fU];
    vlSelfRef.__PVT__data_d[0x00000010U] = vlSelfRef.__PVT__data_q[0x00000010U];
    vlSelfRef.__PVT__data_d[0x00000011U] = vlSelfRef.__PVT__data_q[0x00000011U];
    vlSelfRef.__PVT__data_d[0x00000012U] = vlSelfRef.__PVT__data_q[0x00000012U];
    vlSelfRef.__PVT__data_d[0x00000013U] = vlSelfRef.__PVT__data_q[0x00000013U];
    vlSelfRef.__PVT__data_d[0x00000014U] = vlSelfRef.__PVT__data_q[0x00000014U];
    vlSelfRef.__PVT__data_d[0x00000015U] = vlSelfRef.__PVT__data_q[0x00000015U];
    vlSelfRef.__PVT__ecc_d[0U] = vlSelfRef.__PVT__ecc_q[0U];
    vlSelfRef.__PVT__ecc_d[1U] = vlSelfRef.__PVT__ecc_q[1U];
    vlSelfRef.__PVT__ecc_d[2U] = vlSelfRef.__PVT__ecc_q[2U];
    if ((0x0bU > (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en) {
            vlSelfRef.__Vlvbound_h55f44042__0 = (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U])));
            if ((0x02bfU >= (0x000003ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))) {
                VL_ASSIGNSEL_WQ(704, 64, (0x000003ffU 
                                          & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)), vlSelfRef.__PVT__data_d, vlSelfRef.__Vlvbound_h55f44042__0);
            }
            vlSelfRef.__Vlvbound_h941e4118__0 = (0x000000ffU 
                                                 & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U]);
            if ((0x57U >= (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))) {
                VL_ASSIGNSEL_WI(88, 8, (0x0000007fU 
                                        & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)), vlSelfRef.__PVT__ecc_d, vlSelfRef.__Vlvbound_h941e4118__0);
            }
        }
    }
}

extern const VlWide<22>/*703:0*/ Vsim__ConstPool__CONST_hc212c38b_0;

void Vsim_otp_ctrl_ecc_reg__Db___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0(Vsim_otp_ctrl_ecc_reg__Db* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_otp_ctrl_ecc_reg__Db___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__ecc_q[0U] = vlSelfRef.__PVT__ecc_d[0U];
        vlSelfRef.__PVT__ecc_q[1U] = vlSelfRef.__PVT__ecc_d[1U];
        vlSelfRef.__PVT__ecc_q[2U] = vlSelfRef.__PVT__ecc_d[2U];
        vlSelfRef.__PVT__data_q[0U] = vlSelfRef.__PVT__data_d[0U];
        vlSelfRef.__PVT__data_q[1U] = vlSelfRef.__PVT__data_d[1U];
        vlSelfRef.__PVT__data_q[2U] = vlSelfRef.__PVT__data_d[2U];
        vlSelfRef.__PVT__data_q[3U] = vlSelfRef.__PVT__data_d[3U];
        vlSelfRef.__PVT__data_q[4U] = vlSelfRef.__PVT__data_d[4U];
        vlSelfRef.__PVT__data_q[5U] = vlSelfRef.__PVT__data_d[5U];
        vlSelfRef.__PVT__data_q[6U] = vlSelfRef.__PVT__data_d[6U];
        vlSelfRef.__PVT__data_q[7U] = vlSelfRef.__PVT__data_d[7U];
        vlSelfRef.__PVT__data_q[8U] = vlSelfRef.__PVT__data_d[8U];
        vlSelfRef.__PVT__data_q[9U] = vlSelfRef.__PVT__data_d[9U];
        vlSelfRef.__PVT__data_q[0x0000000aU] = vlSelfRef.__PVT__data_d[0x0000000aU];
        vlSelfRef.__PVT__data_q[0x0000000bU] = vlSelfRef.__PVT__data_d[0x0000000bU];
        vlSelfRef.__PVT__data_q[0x0000000cU] = vlSelfRef.__PVT__data_d[0x0000000cU];
        vlSelfRef.__PVT__data_q[0x0000000dU] = vlSelfRef.__PVT__data_d[0x0000000dU];
        vlSelfRef.__PVT__data_q[0x0000000eU] = vlSelfRef.__PVT__data_d[0x0000000eU];
        vlSelfRef.__PVT__data_q[0x0000000fU] = vlSelfRef.__PVT__data_d[0x0000000fU];
        vlSelfRef.__PVT__data_q[0x00000010U] = vlSelfRef.__PVT__data_d[0x00000010U];
        vlSelfRef.__PVT__data_q[0x00000011U] = vlSelfRef.__PVT__data_d[0x00000011U];
        vlSelfRef.__PVT__data_q[0x00000012U] = vlSelfRef.__PVT__data_d[0x00000012U];
        vlSelfRef.__PVT__data_q[0x00000013U] = vlSelfRef.__PVT__data_d[0x00000013U];
        vlSelfRef.__PVT__data_q[0x00000014U] = vlSelfRef.__PVT__data_d[0x00000014U];
        vlSelfRef.__PVT__data_q[0x00000015U] = vlSelfRef.__PVT__data_d[0x00000015U];
    } else {
        vlSelfRef.__PVT__ecc_q[0U] = 0xaaaaaaaaU;
        vlSelfRef.__PVT__ecc_q[1U] = 0xaaaaaaaaU;
        vlSelfRef.__PVT__ecc_q[2U] = 0x00aaaaaaU;
        vlSelfRef.__PVT__data_q[0U] = Vsim__ConstPool__CONST_hc212c38b_0[0U];
        vlSelfRef.__PVT__data_q[1U] = Vsim__ConstPool__CONST_hc212c38b_0[1U];
        vlSelfRef.__PVT__data_q[2U] = Vsim__ConstPool__CONST_hc212c38b_0[2U];
        vlSelfRef.__PVT__data_q[3U] = Vsim__ConstPool__CONST_hc212c38b_0[3U];
        vlSelfRef.__PVT__data_q[4U] = Vsim__ConstPool__CONST_hc212c38b_0[4U];
        vlSelfRef.__PVT__data_q[5U] = Vsim__ConstPool__CONST_hc212c38b_0[5U];
        vlSelfRef.__PVT__data_q[6U] = Vsim__ConstPool__CONST_hc212c38b_0[6U];
        vlSelfRef.__PVT__data_q[7U] = Vsim__ConstPool__CONST_hc212c38b_0[7U];
        vlSelfRef.__PVT__data_q[8U] = Vsim__ConstPool__CONST_hc212c38b_0[8U];
        vlSelfRef.__PVT__data_q[9U] = Vsim__ConstPool__CONST_hc212c38b_0[9U];
        vlSelfRef.__PVT__data_q[0x0000000aU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000aU];
        vlSelfRef.__PVT__data_q[0x0000000bU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000bU];
        vlSelfRef.__PVT__data_q[0x0000000cU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000cU];
        vlSelfRef.__PVT__data_q[0x0000000dU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000dU];
        vlSelfRef.__PVT__data_q[0x0000000eU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000eU];
        vlSelfRef.__PVT__data_q[0x0000000fU] = Vsim__ConstPool__CONST_hc212c38b_0[0x0000000fU];
        vlSelfRef.__PVT__data_q[0x00000010U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000010U];
        vlSelfRef.__PVT__data_q[0x00000011U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000011U];
        vlSelfRef.__PVT__data_q[0x00000012U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000012U];
        vlSelfRef.__PVT__data_q[0x00000013U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000013U];
        vlSelfRef.__PVT__data_q[0x00000014U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000014U];
        vlSelfRef.__PVT__data_q[0x00000015U] = Vsim__ConstPool__CONST_hc212c38b_0[0x00000015U];
    }
    vlSelfRef.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & vlSelfRef.__PVT__ecc_q[0U]))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__ecc_q[0U]))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[1U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[1U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__ecc_q[0U]))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[0U]))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & vlSelfRef.__PVT__ecc_q[0U]))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__ecc_q[0U]))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[0U]))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[1U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.__PVT__ecc_q[0U])))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[3U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[2U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[3U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[2U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[0U] 
                                             >> 8U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[0U] 
                                                           >> 8U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[3U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[2U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[3U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[2U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[0U] 
                                                       >> 8U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                     >> 8U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                 >> 8U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                  >> 8U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                     >> 8U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[3U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[2U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                        >> 8U))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[5U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[4U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[5U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[4U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[0U] 
                                             >> 0x00000010U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[0U] 
                                                           >> 0x00000010U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[5U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[4U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[5U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[4U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[0U] 
                                                       >> 0x00000010U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                     >> 0x00000010U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                 >> 0x00000010U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                  >> 0x00000010U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                     >> 0x00000010U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[5U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[4U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[0U] 
                                                                        >> 0x00000010U))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[7U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[6U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[7U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[6U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (vlSelfRef.__PVT__ecc_q[0U] 
                                          >> 0x00000018U))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (vlSelfRef.__PVT__ecc_q[0U] 
                                                        >> 0x00000018U))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[7U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[6U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[7U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[6U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (vlSelfRef.__PVT__ecc_q[0U] 
                                                    >> 0x00000018U))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (vlSelfRef.__PVT__ecc_q[0U] 
                                                                  >> 0x00000018U))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (vlSelfRef.__PVT__ecc_q[0U] 
                                                              >> 0x00000018U))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (vlSelfRef.__PVT__ecc_q[0U] 
                                                               >> 0x00000018U))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (vlSelfRef.__PVT__ecc_q[0U] 
                                                                  >> 0x00000018U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[7U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[6U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (vlSelfRef.__PVT__ecc_q[0U] 
                                                                     >> 0x00000018U)))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[9U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[8U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[9U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[8U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & vlSelfRef.__PVT__ecc_q[1U]))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__ecc_q[1U]))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[9U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[8U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[9U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[8U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__ecc_q[1U]))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[1U]))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & vlSelfRef.__PVT__ecc_q[1U]))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__ecc_q[1U]))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[1U]))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[9U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[8U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.__PVT__ecc_q[1U])))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[1U] 
                                             >> 8U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[1U] 
                                                           >> 8U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[1U] 
                                                       >> 8U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                     >> 8U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                 >> 8U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                  >> 8U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                     >> 8U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000bU])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000aU]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                        >> 8U))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[1U] 
                                             >> 0x00000010U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[1U] 
                                                           >> 0x00000010U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[1U] 
                                                       >> 0x00000010U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                     >> 0x00000010U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                 >> 0x00000010U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                  >> 0x00000010U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                     >> 0x00000010U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000dU])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000cU]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[1U] 
                                                                        >> 0x00000010U))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (vlSelfRef.__PVT__ecc_q[1U] 
                                          >> 0x00000018U))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (vlSelfRef.__PVT__ecc_q[1U] 
                                                        >> 0x00000018U))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (vlSelfRef.__PVT__ecc_q[1U] 
                                                    >> 0x00000018U))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (vlSelfRef.__PVT__ecc_q[1U] 
                                                                  >> 0x00000018U))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (vlSelfRef.__PVT__ecc_q[1U] 
                                                              >> 0x00000018U))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (vlSelfRef.__PVT__ecc_q[1U] 
                                                               >> 0x00000018U))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (vlSelfRef.__PVT__ecc_q[1U] 
                                                                  >> 0x00000018U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000fU])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x0000000eU]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (vlSelfRef.__PVT__ecc_q[1U] 
                                                                     >> 0x00000018U)))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & vlSelfRef.__PVT__ecc_q[2U]))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__ecc_q[2U]))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__ecc_q[2U]))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[2U]))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & vlSelfRef.__PVT__ecc_q[2U]))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__ecc_q[2U]))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.__PVT__ecc_q[2U]))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000011U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000010U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.__PVT__ecc_q[2U])))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[2U] 
                                             >> 8U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[2U] 
                                                           >> 8U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[2U] 
                                                       >> 8U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                     >> 8U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                 >> 8U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                  >> 8U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                     >> 8U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000013U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000012U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                        >> 8U))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_32((((0x221a4420U & (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                    ^ (0x7aed348dU 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                  >> 0x00000020U)))) 
                                   ^ (0x00000080U & 
                                      (0x000000aaU 
                                       ^ (0x000000ffU 
                                          & (vlSelfRef.__PVT__ecc_q[2U] 
                                             >> 0x00000010U)))))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0x91152210U 
                                                     & (IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                    ^ 
                                                    (0xcbdaaa4aU 
                                                     & (IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                >> 0x00000020U)))) 
                                                   ^ 
                                                   (0x00000040U 
                                                    & (0x000000aaU 
                                                       ^ 
                                                       (0x000000ffU 
                                                        & (vlSelfRef.__PVT__ecc_q[2U] 
                                                           >> 0x00000010U)))))))) 
             << 6U) | (((2U & (VL_REDXOR_32((((0x488c9108U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                              ^ (0xb5b65926U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                            >> 0x00000020U)))) 
                                             ^ (0x00000020U 
                                                & (0x000000aaU 
                                                   ^ 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.__PVT__ecc_q[2U] 
                                                       >> 0x00000010U)))))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0xc4438884U 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                              ^ 
                                                              (0xb671c711U 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (0x00000010U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                     >> 0x00000010U)))))))) 
                       << 4U)) | ((((2U & (VL_REDXOR_32(
                                                        (((0x3c207842U 
                                                           & (IData)(
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                          ^ 
                                                          (0xcd0fc0f0U 
                                                           & (IData)(
                                                                     ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                      >> 0x00000020U)))) 
                                                         ^ 
                                                         (8U 
                                                          & (0x000000aaU 
                                                             ^ 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                 >> 0x00000010U)))))) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_32(
                                                         (((0x03e007c1U 
                                                            & (IData)(
                                                                      (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                        << 0x00000020U) 
                                                                       | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                           ^ 
                                                           (0x67003ff0U 
                                                            & (IData)(
                                                                      ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                       >> 0x00000020U)))) 
                                                          ^ 
                                                          (4U 
                                                           & (0x000000aaU 
                                                              ^ 
                                                              (0x000000ffU 
                                                               & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                  >> 0x00000010U)))))))) 
                                   << 2U) | ((2U & 
                                              (VL_REDXOR_32(
                                                            (((0xffe0003fU 
                                                               & (IData)(
                                                                         (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                           << 0x00000020U) 
                                                                          | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                              ^ 
                                                              (0x5e00000fU 
                                                               & (IData)(
                                                                         ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                          >> 0x00000020U)))) 
                                                             ^ 
                                                             (2U 
                                                              & (0x000000aaU 
                                                                 ^ 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                     >> 0x00000010U)))))) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_32(
                                                               (((0x001fffffU 
                                                                  & (IData)(
                                                                            (((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                              << 0x00000020U) 
                                                                             | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))))) 
                                                                 ^ 
                                                                 (0xb9000000U 
                                                                  & (IData)(
                                                                            ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000015U])) 
                                                                               << 0x00000020U) 
                                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__data_q[0x00000014U]))) 
                                                                             >> 0x00000020U)))) 
                                                                ^ 
                                                                (1U 
                                                                 & (0x000000aaU 
                                                                    ^ 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__ecc_q[2U] 
                                                                        >> 0x00000010U))))))))));
    vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0] = 0U;
    vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0[vlSelfRef.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0 
        = vlSelfRef.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    vlSelfRef.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[1U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[1U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[1U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[1U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[1U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[1U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[1U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[1U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[1U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[1U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[1U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[1U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[1U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[1U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[1U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[1U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[1U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[1U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[1U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[1U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[1U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[1U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[1U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[1U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[1U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[1U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[3U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[3U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[3U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[3U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[3U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[3U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[3U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[3U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[3U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[3U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[3U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[3U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[3U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[3U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[3U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[3U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[3U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[3U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[3U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[3U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[3U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[3U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[3U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[3U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[3U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[3U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[3U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[3U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[3U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[3U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[3U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[3U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[2U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[2U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[2U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[2U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[2U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[2U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[2U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[2U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[2U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[2U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[2U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[2U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[2U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[2U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[2U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[5U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[5U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[5U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[5U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[5U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[5U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[5U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[5U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[5U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[5U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[5U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[5U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[5U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[5U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[5U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[5U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[5U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[5U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[5U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[5U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[5U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[5U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[5U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[5U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[5U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[5U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[5U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[5U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[5U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[5U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[5U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[5U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[4U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[4U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[4U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[4U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[4U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[4U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[4U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[4U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[4U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[4U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[4U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[4U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[4U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[4U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[4U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[7U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[7U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[7U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[7U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[7U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[7U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[7U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[7U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[7U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[7U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[7U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[7U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[7U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[7U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[7U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[7U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[7U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[7U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[7U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[7U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[7U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[7U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[7U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[7U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[7U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[7U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[7U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[7U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[7U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[7U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[7U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[7U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[6U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[6U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[6U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[6U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[6U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[6U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[6U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[6U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[6U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[6U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[6U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[6U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[6U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[6U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[6U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[9U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[9U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[9U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[9U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[9U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[9U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[9U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[9U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[9U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[9U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[9U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[9U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[9U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[9U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[9U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[9U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[9U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[9U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[9U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[9U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[9U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[9U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[9U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[9U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[9U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[9U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[9U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[9U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[9U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[9U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[9U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[9U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[8U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[8U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[8U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[8U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[8U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[8U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[8U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[8U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[8U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[8U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[8U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[8U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[8U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[8U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[8U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000bU] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x0000000bU]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000aU] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x0000000aU]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000dU] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x0000000dU]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000cU] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x0000000cU]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x0000000fU] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x0000000fU]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x0000000eU] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x0000000eU]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x00000011U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000011U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000011U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000011U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x00000011U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000010U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x00000010U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x00000013U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000013U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000013U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000013U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x00000013U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000012U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x00000012U]))))))))));
    vlSelfRef.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.__PVT__data_q[0x00000015U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000015U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.__PVT__data_q[0x00000015U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__data_q[0x00000015U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__data_q[0x00000015U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.__PVT__data_q[0x00000014U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.__PVT__data_q[0x00000014U]))))))))));
}

void Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0(Vsim_otp_ctrl_ecc_reg__Db* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel)
            ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i
            : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__data_o);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U] 
        = (0x000000ffU & (((((2U & ((~ VL_REDXOR_64(
                                                    (0x7aed348d221a4420ULL 
                                                     & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0xcbdaaa4a91152210ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                            << 6U) | (((2U & ((~ VL_REDXOR_64(
                                                              (0xb5b65926488c9108ULL 
                                                               & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0xb671c711c4438884ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                      << 4U)) | (((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_64(
                                                                     (0xcd0fc0f03c207842ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_64(
                                                                     (0x67003ff003e007c1ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_64(
                                                                      (0x5e00000fffe0003fULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xb9000000001fffffULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))))));
    vlSelfRef.__PVT__data_d[0U] = vlSelfRef.__PVT__data_q[0U];
    vlSelfRef.__PVT__data_d[1U] = vlSelfRef.__PVT__data_q[1U];
    vlSelfRef.__PVT__data_d[2U] = vlSelfRef.__PVT__data_q[2U];
    vlSelfRef.__PVT__data_d[3U] = vlSelfRef.__PVT__data_q[3U];
    vlSelfRef.__PVT__data_d[4U] = vlSelfRef.__PVT__data_q[4U];
    vlSelfRef.__PVT__data_d[5U] = vlSelfRef.__PVT__data_q[5U];
    vlSelfRef.__PVT__data_d[6U] = vlSelfRef.__PVT__data_q[6U];
    vlSelfRef.__PVT__data_d[7U] = vlSelfRef.__PVT__data_q[7U];
    vlSelfRef.__PVT__data_d[8U] = vlSelfRef.__PVT__data_q[8U];
    vlSelfRef.__PVT__data_d[9U] = vlSelfRef.__PVT__data_q[9U];
    vlSelfRef.__PVT__data_d[0x0000000aU] = vlSelfRef.__PVT__data_q[0x0000000aU];
    vlSelfRef.__PVT__data_d[0x0000000bU] = vlSelfRef.__PVT__data_q[0x0000000bU];
    vlSelfRef.__PVT__data_d[0x0000000cU] = vlSelfRef.__PVT__data_q[0x0000000cU];
    vlSelfRef.__PVT__data_d[0x0000000dU] = vlSelfRef.__PVT__data_q[0x0000000dU];
    vlSelfRef.__PVT__data_d[0x0000000eU] = vlSelfRef.__PVT__data_q[0x0000000eU];
    vlSelfRef.__PVT__data_d[0x0000000fU] = vlSelfRef.__PVT__data_q[0x0000000fU];
    vlSelfRef.__PVT__data_d[0x00000010U] = vlSelfRef.__PVT__data_q[0x00000010U];
    vlSelfRef.__PVT__data_d[0x00000011U] = vlSelfRef.__PVT__data_q[0x00000011U];
    vlSelfRef.__PVT__data_d[0x00000012U] = vlSelfRef.__PVT__data_q[0x00000012U];
    vlSelfRef.__PVT__data_d[0x00000013U] = vlSelfRef.__PVT__data_q[0x00000013U];
    vlSelfRef.__PVT__data_d[0x00000014U] = vlSelfRef.__PVT__data_q[0x00000014U];
    vlSelfRef.__PVT__data_d[0x00000015U] = vlSelfRef.__PVT__data_q[0x00000015U];
    vlSelfRef.__PVT__ecc_d[0U] = vlSelfRef.__PVT__ecc_q[0U];
    vlSelfRef.__PVT__ecc_d[1U] = vlSelfRef.__PVT__ecc_q[1U];
    vlSelfRef.__PVT__ecc_d[2U] = vlSelfRef.__PVT__ecc_q[2U];
    if ((0x0bU > (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en) {
            vlSelfRef.__Vlvbound_h55f44042__0 = (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U])));
            if ((0x02bfU >= (0x000003ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))) {
                VL_ASSIGNSEL_WQ(704, 64, (0x000003ffU 
                                          & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)), vlSelfRef.__PVT__data_d, vlSelfRef.__Vlvbound_h55f44042__0);
            }
            vlSelfRef.__Vlvbound_h941e4118__0 = (0x000000ffU 
                                                 & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U]);
            if ((0x57U >= (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))) {
                VL_ASSIGNSEL_WI(88, 8, (0x0000007fU 
                                        & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)), vlSelfRef.__PVT__ecc_d, vlSelfRef.__Vlvbound_h941e4118__0);
            }
        }
    }
}

void Vsim_otp_ctrl_ecc_reg__Db___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0(Vsim_otp_ctrl_ecc_reg__Db* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_otp_ctrl_ecc_reg__Db___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_sel)
            ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i
            : 0ULL);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i);
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U] 
        = (0x000000ffU & (((((2U & ((~ VL_REDXOR_64(
                                                    (0x7aed348d221a4420ULL 
                                                     & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0xcbdaaa4a91152210ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                            << 6U) | (((2U & ((~ VL_REDXOR_64(
                                                              (0xb5b65926488c9108ULL 
                                                               & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0xb671c711c4438884ULL 
                                                             & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                      << 4U)) | (((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_64(
                                                                     (0xcd0fc0f03c207842ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_64(
                                                                     (0x67003ff003e007c1ULL 
                                                                      & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_64(
                                                                      (0x5e00000fffe0003fULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xb9000000001fffffULL 
                                                                       & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i)))))));
}

void Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0(Vsim_otp_ctrl_ecc_reg__Db* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_otp_ctrl_ecc_reg__Db___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_d[0U] = vlSelfRef.__PVT__data_q[0U];
    vlSelfRef.__PVT__data_d[1U] = vlSelfRef.__PVT__data_q[1U];
    vlSelfRef.__PVT__data_d[2U] = vlSelfRef.__PVT__data_q[2U];
    vlSelfRef.__PVT__data_d[3U] = vlSelfRef.__PVT__data_q[3U];
    vlSelfRef.__PVT__data_d[4U] = vlSelfRef.__PVT__data_q[4U];
    vlSelfRef.__PVT__data_d[5U] = vlSelfRef.__PVT__data_q[5U];
    vlSelfRef.__PVT__data_d[6U] = vlSelfRef.__PVT__data_q[6U];
    vlSelfRef.__PVT__data_d[7U] = vlSelfRef.__PVT__data_q[7U];
    vlSelfRef.__PVT__data_d[8U] = vlSelfRef.__PVT__data_q[8U];
    vlSelfRef.__PVT__data_d[9U] = vlSelfRef.__PVT__data_q[9U];
    vlSelfRef.__PVT__data_d[0x0000000aU] = vlSelfRef.__PVT__data_q[0x0000000aU];
    vlSelfRef.__PVT__data_d[0x0000000bU] = vlSelfRef.__PVT__data_q[0x0000000bU];
    vlSelfRef.__PVT__data_d[0x0000000cU] = vlSelfRef.__PVT__data_q[0x0000000cU];
    vlSelfRef.__PVT__data_d[0x0000000dU] = vlSelfRef.__PVT__data_q[0x0000000dU];
    vlSelfRef.__PVT__data_d[0x0000000eU] = vlSelfRef.__PVT__data_q[0x0000000eU];
    vlSelfRef.__PVT__data_d[0x0000000fU] = vlSelfRef.__PVT__data_q[0x0000000fU];
    vlSelfRef.__PVT__data_d[0x00000010U] = vlSelfRef.__PVT__data_q[0x00000010U];
    vlSelfRef.__PVT__data_d[0x00000011U] = vlSelfRef.__PVT__data_q[0x00000011U];
    vlSelfRef.__PVT__data_d[0x00000012U] = vlSelfRef.__PVT__data_q[0x00000012U];
    vlSelfRef.__PVT__data_d[0x00000013U] = vlSelfRef.__PVT__data_q[0x00000013U];
    vlSelfRef.__PVT__data_d[0x00000014U] = vlSelfRef.__PVT__data_q[0x00000014U];
    vlSelfRef.__PVT__data_d[0x00000015U] = vlSelfRef.__PVT__data_q[0x00000015U];
    vlSelfRef.__PVT__ecc_d[0U] = vlSelfRef.__PVT__ecc_q[0U];
    vlSelfRef.__PVT__ecc_d[1U] = vlSelfRef.__PVT__ecc_q[1U];
    vlSelfRef.__PVT__ecc_d[2U] = vlSelfRef.__PVT__ecc_q[2U];
    if ((0x0bU > (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__buffer_reg_en) {
            vlSelfRef.__Vlvbound_h55f44042__0 = (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U])));
            if ((0x02bfU >= (0x000003ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))) {
                VL_ASSIGNSEL_WQ(704, 64, (0x000003ffU 
                                          & VL_SHIFTL_III(10,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)), vlSelfRef.__PVT__data_d, vlSelfRef.__Vlvbound_h55f44042__0);
            }
            vlSelfRef.__Vlvbound_h941e4118__0 = (0x000000ffU 
                                                 & vlSelfRef.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U]);
            if ((0x57U >= (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))) {
                VL_ASSIGNSEL_WI(88, 8, (0x0000007fU 
                                        & VL_SHIFTL_III(7,32,32, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)), vlSelfRef.__PVT__ecc_d, vlSelfRef.__Vlvbound_h941e4118__0);
            }
        }
    }
}

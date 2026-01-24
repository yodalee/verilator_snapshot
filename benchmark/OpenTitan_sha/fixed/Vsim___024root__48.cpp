// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__73(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__73\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__1980__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__1980__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__1980__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__1980__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__1980__payload;
    __Vfunc_extract_d2h_rsp_intg__1980__payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1230[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1230[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = ((2U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U]) 
           | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1230[2U]);
    __Vfunc_extract_d2h_rsp_intg__1980__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__1980__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__1980__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__1980__payload = (
                                                   (0x00000038U 
                                                    & ((__Vfunc_extract_d2h_rsp_intg__1980__tl[2U] 
                                                        << 5U) 
                                                       | (0x00000018U 
                                                          & (__Vfunc_extract_d2h_rsp_intg__1980__tl[1U] 
                                                             >> 0x0000001bU)))) 
                                                   | ((6U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__1980__tl[1U] 
                                                          >> 0x00000018U)) 
                                                      | (1U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__1980__tl[0U] 
                                                            >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__1980__Vfuncout = __Vfunc_extract_d2h_rsp_intg__1980__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__1980__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__74(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__74\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_q;
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__seed_valid_q;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_q;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__seed_valid_q;
                        }
                    }
                }
            }
        }
    }
}

void Vsim___024root___nba_comb__TOP__75(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__75\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i) 
              != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1752 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                    ? 
                                                   ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000018U))
                                                    : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
            ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)) : 0xffffffffU);
}

void Vsim___024root___nba_comb__TOP__76(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__76\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_conv_endian32__1446__Vfuncout;
    __Vfunc_conv_endian32__1446__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1446__v;
    __Vfunc_conv_endian32__1446__v = 0;
    CData/*0:0*/ __Vfunc_conv_endian32__1446__swap;
    __Vfunc_conv_endian32__1446__swap = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1446__conv_data;
    __Vfunc_conv_endian32__1446__conv_data = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1447__Vfuncout;
    __Vfunc_conv_endian32__1447__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1447__v;
    __Vfunc_conv_endian32__1447__v = 0;
    CData/*0:0*/ __Vfunc_conv_endian32__1447__swap;
    __Vfunc_conv_endian32__1447__swap = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1447__conv_data;
    __Vfunc_conv_endian32__1447__conv_data = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__VdfgRegularize_h6e95ff9d_0_1749));
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)
            ? ((((0x0000ff00U & ((- (IData)((1U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001bU)))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001aU)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x00000019U)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000018U)))))))
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__1449__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__1449__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1449__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1449__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1449__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1450__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1450__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1450__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1450__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1490__val 
                = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1490__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1490__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1490__Vfuncout));
    __Vfunc_conv_endian32__1446__v = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)
                                       ? ((((((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001bU) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o))
                                              ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1752 
                                                 >> 0x00000018U)
                                              : 0U) 
                                            << 0x00000018U) 
                                           | ((((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001aU) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o))
                                                ? (0x000000ffU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1752 
                                                      >> 0x00000010U))
                                                : 0U) 
                                              << 0x00000010U)) 
                                          | (((((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000019U) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o))
                                                ? (0x000000ffU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1752 
                                                      >> 8U))
                                                : 0U) 
                                              << 8U) 
                                             | (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x00000018U) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__we_o))
                                                 ? 
                                                (0x000000ffU 
                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1752)
                                                 : 0U)))
                                       : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__wmask_ones 
        = (0x0000003fU & (((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o) 
                           + (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                             >> 0x0000000aU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                              >> 0x0000000bU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                >> 0x0000000dU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                 >> 0x0000000eU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                  >> 0x0000000fU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                   >> 0x00000010U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                    >> 0x00000011U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                     >> 0x00000012U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                      >> 0x00000013U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                       >> 0x00000014U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                        >> 0x00000015U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                         >> 0x00000016U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                          >> 0x00000017U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                           >> 0x00000018U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                            >> 0x00000019U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                             >> 0x0000001aU)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                              >> 0x0000001bU)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                               >> 0x0000001cU)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                                >> 0x0000001dU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                                >> 0x0000001eU)) 
                                                                             + 
                                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o 
                                                                              >> 0x0000001fU)))))))))))))))))))))))))))))));
    __Vfunc_conv_endian32__1447__swap = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                               >> 5U));
    __Vfunc_conv_endian32__1447__v = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__wmask_o;
    __Vfunc_conv_endian32__1447__conv_data = VL_STREAML_III(32, __Vfunc_conv_endian32__1447__v, 8U);
    __Vfunc_conv_endian32__1447__Vfuncout = ((IData)(__Vfunc_conv_endian32__1447__swap)
                                              ? __Vfunc_conv_endian32__1447__conv_data
                                              : __Vfunc_conv_endian32__1447__v);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
        = __Vfunc_conv_endian32__1447__Vfuncout;
    __Vfunc_conv_endian32__1446__swap = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                               >> 5U));
    __Vfunc_conv_endian32__1446__conv_data = VL_STREAML_III(32, __Vfunc_conv_endian32__1446__v, 8U);
    __Vfunc_conv_endian32__1446__Vfuncout = ((IData)(__Vfunc_conv_endian32__1446__swap)
                                              ? __Vfunc_conv_endian32__1446__conv_data
                                              : __Vfunc_conv_endian32__1446__v);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wdata_endian 
        = __Vfunc_conv_endian32__1446__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0800U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__VdfgRegularize_h6e95ff9d_0_1749));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_d_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__inmask_ones 
        = (0x0000003fU & (((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian) 
                           + (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                             >> 0x0000000aU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                              >> 0x0000000bU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                >> 0x0000000dU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                 >> 0x0000000eU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                  >> 0x0000000fU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                   >> 0x00000010U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                    >> 0x00000011U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                     >> 0x00000012U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                      >> 0x00000013U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                       >> 0x00000014U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                        >> 0x00000015U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                         >> 0x00000016U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                          >> 0x00000017U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                           >> 0x00000018U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                            >> 0x00000019U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                             >> 0x0000001aU)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                              >> 0x0000001bU)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                               >> 0x0000001cU)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                                >> 0x0000001dU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                                >> 0x0000001eU)) 
                                                                             + 
                                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
                                                                              >> 0x0000001fU)))))))))))))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0U;
    if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian 
         >> 0x1fU)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1fU;
    }
    if ((0x40000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1eU;
    }
    if ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1dU;
    }
    if ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1cU;
    }
    if ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1bU;
    }
    if ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x1aU;
    }
    if ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x19U;
    }
    if ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x18U;
    }
    if ((0x00800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x17U;
    }
    if ((0x00400000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x16U;
    }
    if ((0x00200000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x15U;
    }
    if ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x14U;
    }
    if ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x13U;
    }
    if ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x12U;
    }
    if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x11U;
    }
    if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x10U;
    }
    if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0fU;
    }
    if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 9U;
    }
    if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 8U;
    }
    if ((0x00000080U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 7U;
    }
    if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 6U;
    }
    if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 5U;
    }
    if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 4U;
    }
    if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 3U;
    }
    if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 2U;
    }
    if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 1U;
    }
    if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_fifo_wmask_endian)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__lod_idx = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_with_input 
        = (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__inmask_ones)));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vsim__ConstPool__TABLE_hc7e221b9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h46dd8664_0;
extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim___024root___nba_comb__TOP__77(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__77\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ = 0;
    CData/*6:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                               >> 9U))) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__instr_error) 
                                           | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                                                  & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err.__PVT__addr_sz_chk) 
                                                     & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err.__PVT__mask_chk) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                                >> 9U))) 
                                                           | ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                                   >> 9U))) 
                                                              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err.__PVT__fulldata_chk))))))) 
                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err.__PVT__instr_type_err) 
                                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__we_o) 
           & (((0U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                       << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001eU)))) 
               & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                   << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x00000018U)))))) 
              | (((1U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                          >> 0x0000001eU)))) 
                  & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                      << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x00000018U)))))) 
                 | (((2U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001eU)))) 
                     & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x00000018U)))))) 
                    | (((3U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                        & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x00000018U)))))) 
                       | (((4U == (0x000007ffU & ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001eU)))) 
                           & (0U != (3U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x00000018U)))))) 
                          | (((5U == (0x000007ffU & 
                                      ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                              & (0U != (1U & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x00000018U)))))) 
                             | (((6U == (0x000007ffU 
                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                               >> 0x0000001eU)))) 
                                 & (0U != (3U & (~ 
                                                 ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x00000018U)))))) 
                                | ((0U != (0x0000000fU 
                                           & (~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x00000018U))))) 
                                   & ((7U == (0x000007ffU 
                                              & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001eU)))) 
                                      | ((8U == (0x000007ffU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x0000001eU)))) 
                                         | ((9U == 
                                             (0x000007ffU 
                                              & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001eU)))) 
                                            | ((0x000aU 
                                                == 
                                                (0x000007ffU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x0000001eU)))) 
                                               | ((0x000bU 
                                                   == 
                                                   (0x000007ffU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  | ((0x000cU 
                                                      == 
                                                      (0x000007ffU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     | ((0x000dU 
                                                         == 
                                                         (0x000007ffU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU)))) 
                                                        | ((0x000eU 
                                                            == 
                                                            (0x000007ffU 
                                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001eU)))) 
                                                           | ((0x000fU 
                                                               == 
                                                               (0x000007ffU 
                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 2U) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001eU)))) 
                                                              | ((0x0010U 
                                                                  == 
                                                                  (0x000007ffU 
                                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x0000001eU)))) 
                                                                 | ((0x0011U 
                                                                     == 
                                                                     (0x000007ffU 
                                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x0000001eU)))) 
                                                                    | ((0x0012U 
                                                                        == 
                                                                        (0x000007ffU 
                                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 2U) 
                                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001eU)))) 
                                                                       | ((0x0013U 
                                                                           == 
                                                                           (0x000007ffU 
                                                                            & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                          | ((0x0014U 
                                                                              == 
                                                                              (0x000007ffU 
                                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                             | ((0x0015U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0016U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0017U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0018U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0019U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001aU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001bU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001cU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001dU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001eU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x001fU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0020U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0021U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0022U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0023U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0024U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0025U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0026U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0027U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0028U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0029U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002aU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002bU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002cU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002dU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002eU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x002fU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0030U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0031U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0032U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0033U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0034U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0035U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0036U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0037U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0038U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | ((0x0039U 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                | (0x003aU 
                                                                                == 
                                                                                (0x000007ffU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addrmiss 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addr_hit)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__re_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_chk.err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_64 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__re_o));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we 
        = ((0x003aU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we 
        = ((0x0039U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we 
        = ((0x0038U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we 
        = ((4U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we 
        = ((1U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we 
        = ((0U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we 
        = ((9U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we 
        = ((0x000bU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we 
        = ((0x000dU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we 
        = ((0x000fU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we 
        = ((0x0011U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we 
        = ((0x0013U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we 
        = ((0x0015U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we 
        = ((0x0017U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we 
        = ((0x0019U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we 
        = ((0x001bU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we 
        = ((0x001dU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we 
        = ((0x001fU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we 
        = ((0x0021U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we 
        = ((0x0023U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we 
        = ((0x0025U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we 
        = ((0x0027U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we 
        = ((0x0029U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we 
        = ((0x002bU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we 
        = ((0x002dU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we 
        = ((0x002fU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we 
        = ((0x0031U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we 
        = ((0x0033U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we 
        = ((0x0035U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we 
        = ((0x0037U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we 
        = ((3U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we 
        = ((0x000aU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we 
        = ((0x000cU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we 
        = ((0x000eU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we 
        = ((0x0010U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we 
        = ((0x0012U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we 
        = ((0x0014U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we 
        = ((0x0016U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we 
        = ((0x0018U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we 
        = ((0x001aU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we 
        = ((0x001cU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we 
        = ((0x001eU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we 
        = ((0x0020U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we 
        = ((0x0022U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we 
        = ((0x0024U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we 
        = ((0x0026U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we 
        = ((0x0028U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we 
        = ((0x002aU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we 
        = ((0x002cU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we 
        = ((0x002eU == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we 
        = ((0x0030U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we 
        = ((0x0032U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we 
        = ((0x0034U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we 
        = ((0x0036U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                        << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we 
        = ((2U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i 
        = ((8U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we 
        = ((5U == (0x000007ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____VdfgRegularize_h726c3ce7_0_63));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_hmac_done__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_hmac_err__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 2U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we));
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)))) {
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_secret_key__DOT__unnamedblk1__DOT__i = 0x00000020U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__init_hash) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU];
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__run_hash) {
        VL_COND_WIWW(512, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d, 
                     (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)), 
                     ([&]() {
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[1U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[2U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[3U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[4U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[5U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[6U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[7U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[9U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000aU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000bU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000cU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000dU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000eU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000fU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__k 
                        = vlSymsp->TOP__prim_sha2_pkg.CubicRootPrime256
                        [(0x0000003fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__w 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0U];
                    vlSelfRef.__Vfunc_compress_multi_256__1467__sigma_1 
                        = ((([&]() {
                                    vlSelfRef.__Vfunc_rotr32__1468__v 
                                        = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U];
                                    vlSelfRef.__Vfunc_rotr32__1468__Vfuncout 
                                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1468__v, 6U) 
                                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1468__v, 0x0000001aU));
                                }(), vlSelfRef.__Vfunc_rotr32__1468__Vfuncout) 
                            ^ ([&]() {
                                    vlSelfRef.__Vfunc_rotr32__1469__v 
                                        = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U];
                                    vlSelfRef.__Vfunc_rotr32__1469__Vfuncout 
                                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1469__v, 0x0000000bU) 
                                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1469__v, 0x00000015U));
                                }(), vlSelfRef.__Vfunc_rotr32__1469__Vfuncout)) 
                           ^ ([&]() {
                                vlSelfRef.__Vfunc_rotr32__1470__v 
                                    = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U];
                                vlSelfRef.__Vfunc_rotr32__1470__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1470__v, 0x00000019U) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1470__v, 7U));
                            }(), vlSelfRef.__Vfunc_rotr32__1470__Vfuncout));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__ch 
                        = ((vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U] 
                            & vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000aU]) 
                           ^ ((~ vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U]) 
                              & vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000cU]));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__temp1 
                        = ((((vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000eU] 
                              + vlSelfRef.__Vfunc_compress_multi_256__1467__sigma_1) 
                             + vlSelfRef.__Vfunc_compress_multi_256__1467__ch) 
                            + vlSelfRef.__Vfunc_compress_multi_256__1467__k) 
                           + vlSelfRef.__Vfunc_compress_multi_256__1467__w);
                    vlSelfRef.__Vfunc_compress_multi_256__1467__sigma_0 
                        = ((([&]() {
                                    vlSelfRef.__Vfunc_rotr32__1471__v 
                                        = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U];
                                    vlSelfRef.__Vfunc_rotr32__1471__Vfuncout 
                                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1471__v, 2U) 
                                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1471__v, 0x0000001eU));
                                }(), vlSelfRef.__Vfunc_rotr32__1471__Vfuncout) 
                            ^ ([&]() {
                                    vlSelfRef.__Vfunc_rotr32__1472__v 
                                        = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U];
                                    vlSelfRef.__Vfunc_rotr32__1472__Vfuncout 
                                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1472__v, 0x0000000dU) 
                                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1472__v, 0x00000013U));
                                }(), vlSelfRef.__Vfunc_rotr32__1472__Vfuncout)) 
                           ^ ([&]() {
                                vlSelfRef.__Vfunc_rotr32__1473__v 
                                    = vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U];
                                vlSelfRef.__Vfunc_rotr32__1473__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1473__v, 0x00000016U) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__1473__v, 0x0000000aU));
                            }(), vlSelfRef.__Vfunc_rotr32__1473__Vfuncout));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__maj 
                        = (((vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U] 
                             & vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[2U]) 
                            ^ (vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U] 
                               & vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[4U])) 
                           ^ (vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[2U] 
                              & vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[4U]));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__temp2 
                        = (vlSelfRef.__Vfunc_compress_multi_256__1467__sigma_0 
                           + vlSelfRef.__Vfunc_compress_multi_256__1467__maj);
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000cU] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000aU])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000dU] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000aU])) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000eU] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000cU])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000fU] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0x0000000cU])) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000aU] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0x0000000bU] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[8U])) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[8U] 
                        = (IData)((QData)((IData)((
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[6U] 
                                                   + vlSelfRef.__Vfunc_compress_multi_256__1467__temp1))));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[9U] 
                        = (IData)(((QData)((IData)(
                                                   (vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[6U] 
                                                    + vlSelfRef.__Vfunc_compress_multi_256__1467__temp1))) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[4U] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[2U])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[5U] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[2U])) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[6U] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[4U])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[7U] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[4U])) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[0U] 
                        = (IData)((QData)((IData)((vlSelfRef.__Vfunc_compress_multi_256__1467__temp1 
                                                   + vlSelfRef.__Vfunc_compress_multi_256__1467__temp2))));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[1U] 
                        = (IData)(((QData)((IData)(
                                                   (vlSelfRef.__Vfunc_compress_multi_256__1467__temp1 
                                                    + vlSelfRef.__Vfunc_compress_multi_256__1467__temp2))) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[2U] 
                        = (IData)((QData)((IData)(vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U])));
                    vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout[3U] 
                        = (IData)(((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_multi_256__1467__h_i[0U])) 
                                   >> 0x00000020U));
                }(), vlSelfRef.__Vfunc_compress_multi_256__1467__Vfuncout), 
                     ([&]() {
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[1U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[2U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[3U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[4U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[5U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[6U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[7U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[8U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[9U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000aU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000bU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000cU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000dU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000eU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU];
                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000fU] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU];
                    vlSelfRef.__Vfunc_compress_512__1474__k 
                        = ((0x4fU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))
                            ? vlSymsp->TOP__prim_sha2_pkg.CubicRootPrime512
                           [vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q]
                            : 0ULL);
                    vlSelfRef.__Vfunc_compress_512__1474__w 
                        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0U])));
                    vlSelfRef.__Vfunc_compress_512__1474__sigma_1 
                        = ((([&]() {
                                    vlSelfRef.__Vfunc_rotr64__1475__v 
                                        = (((QData)((IData)(
                                                            vlSelfRef.__Vfunc_compress_512__1474__h_i[9U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__Vfunc_compress_512__1474__h_i[8U])));
                                    vlSelfRef.__Vfunc_rotr64__1475__Vfuncout 
                                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1475__v, 0x0000000eU) 
                                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1475__v, 0x00000032U));
                                }(), vlSelfRef.__Vfunc_rotr64__1475__Vfuncout) 
                            ^ ([&]() {
                                    vlSelfRef.__Vfunc_rotr64__1476__v 
                                        = (((QData)((IData)(
                                                            vlSelfRef.__Vfunc_compress_512__1474__h_i[9U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__Vfunc_compress_512__1474__h_i[8U])));
                                    vlSelfRef.__Vfunc_rotr64__1476__Vfuncout 
                                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1476__v, 0x00000012U) 
                                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1476__v, 0x0000002eU));
                                }(), vlSelfRef.__Vfunc_rotr64__1476__Vfuncout)) 
                           ^ ([&]() {
                                vlSelfRef.__Vfunc_rotr64__1477__v 
                                    = (((QData)((IData)(
                                                        vlSelfRef.__Vfunc_compress_512__1474__h_i[9U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.__Vfunc_compress_512__1474__h_i[8U])));
                                vlSelfRef.__Vfunc_rotr64__1477__Vfuncout 
                                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1477__v, 0x00000029U) 
                                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1477__v, 0x00000017U));
                            }(), vlSelfRef.__Vfunc_rotr64__1477__Vfuncout));
                    vlSelfRef.__Vfunc_compress_512__1474__ch 
                        = (((((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[9U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.__Vfunc_compress_512__1474__h_i[8U]))) 
                            & (((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000bU])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000aU])))) 
                           ^ ((~ (((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_512__1474__h_i[9U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_compress_512__1474__h_i[8U])))) 
                              & (((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000dU])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000cU])))));
                    vlSelfRef.__Vfunc_compress_512__1474__temp1 
                        = (((((((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000fU])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000eU]))) 
                              + vlSelfRef.__Vfunc_compress_512__1474__sigma_1) 
                             + vlSelfRef.__Vfunc_compress_512__1474__ch) 
                            + vlSelfRef.__Vfunc_compress_512__1474__k) 
                           + vlSelfRef.__Vfunc_compress_512__1474__w);
                    vlSelfRef.__Vfunc_compress_512__1474__sigma_0 
                        = ((([&]() {
                                    vlSelfRef.__Vfunc_rotr64__1478__v 
                                        = (((QData)((IData)(
                                                            vlSelfRef.__Vfunc_compress_512__1474__h_i[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__Vfunc_compress_512__1474__h_i[0U])));
                                    vlSelfRef.__Vfunc_rotr64__1478__Vfuncout 
                                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1478__v, 0x0000001cU) 
                                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1478__v, 0x00000024U));
                                }(), vlSelfRef.__Vfunc_rotr64__1478__Vfuncout) 
                            ^ ([&]() {
                                    vlSelfRef.__Vfunc_rotr64__1479__v 
                                        = (((QData)((IData)(
                                                            vlSelfRef.__Vfunc_compress_512__1474__h_i[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__Vfunc_compress_512__1474__h_i[0U])));
                                    vlSelfRef.__Vfunc_rotr64__1479__Vfuncout 
                                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1479__v, 0x00000022U) 
                                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1479__v, 0x0000001eU));
                                }(), vlSelfRef.__Vfunc_rotr64__1479__Vfuncout)) 
                           ^ ([&]() {
                                vlSelfRef.__Vfunc_rotr64__1480__v 
                                    = (((QData)((IData)(
                                                        vlSelfRef.__Vfunc_compress_512__1474__h_i[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.__Vfunc_compress_512__1474__h_i[0U])));
                                vlSelfRef.__Vfunc_rotr64__1480__Vfuncout 
                                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1480__v, 0x00000027U) 
                                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_rotr64__1480__v, 0x00000019U));
                            }(), vlSelfRef.__Vfunc_rotr64__1480__Vfuncout));
                    vlSelfRef.__Vfunc_compress_512__1474__maj 
                        = ((((((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.__Vfunc_compress_512__1474__h_i[0U]))) 
                             & (((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[3U])) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   vlSelfRef.__Vfunc_compress_512__1474__h_i[2U])))) 
                            ^ ((((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[1U])) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   vlSelfRef.__Vfunc_compress_512__1474__h_i[0U]))) 
                               & (((QData)((IData)(
                                                   vlSelfRef.__Vfunc_compress_512__1474__h_i[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_compress_512__1474__h_i[4U]))))) 
                           ^ ((((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.__Vfunc_compress_512__1474__h_i[2U]))) 
                              & (((QData)((IData)(vlSelfRef.__Vfunc_compress_512__1474__h_i[5U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.__Vfunc_compress_512__1474__h_i[4U])))));
                    vlSelfRef.__Vfunc_compress_512__1474__temp2 
                        = (vlSelfRef.__Vfunc_compress_512__1474__sigma_0 
                           + vlSelfRef.__Vfunc_compress_512__1474__maj);
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[8U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelfRef.__Vfunc_compress_512__1474__h_i[7U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.__Vfunc_compress_512__1474__h_i[6U]))) 
                                   + vlSelfRef.__Vfunc_compress_512__1474__temp1));
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[9U] 
                        = (IData)((((((QData)((IData)(
                                                      vlSelfRef.__Vfunc_compress_512__1474__h_i[7U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.__Vfunc_compress_512__1474__h_i[6U]))) 
                                    + vlSelfRef.__Vfunc_compress_512__1474__temp1) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000aU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[8U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000bU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[9U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000cU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000aU];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000dU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000bU];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000eU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000cU];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0x0000000fU] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[0x0000000dU];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[0U] 
                        = (IData)((vlSelfRef.__Vfunc_compress_512__1474__temp1 
                                   + vlSelfRef.__Vfunc_compress_512__1474__temp2));
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[1U] 
                        = (IData)(((vlSelfRef.__Vfunc_compress_512__1474__temp1 
                                    + vlSelfRef.__Vfunc_compress_512__1474__temp2) 
                                   >> 0x00000020U));
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[2U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[0U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[3U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[1U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[4U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[2U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[5U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[3U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[6U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[4U];
                    vlSelfRef.__Vfunc_compress_512__1474__Vfuncout[7U] 
                        = vlSelfRef.__Vfunc_compress_512__1474__h_i[5U];
                }(), vlSelfRef.__Vfunc_compress_512__1474__Vfuncout));
    }
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_process 
        = ((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((QData)((IData)((((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we))) 
                                 << 0x0000000aU) | 
                                (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we) 
                                  << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we) 
                                             << 8U) 
                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we) 
                                               << 7U)))) 
                               | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we) 
                                      << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we))) 
                                   << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we))))) 
                              << 0x0000000dU) | (((
                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we))) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we) 
                                                         << 7U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we) 
                                                           << 6U)))) 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
                                                         << 4U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we) 
                                                           << 3U))) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we)))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we))))) 
                                                << 0x00000010U) 
                                               | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we))) 
                                                   << 0x0000000cU) 
                                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we) 
                                                       << 0x0000000bU) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we) 
                                                         << 0x0000000aU)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we) 
                                                         << 9U) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we) 
                                                                << 5U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
                                                                   << 4U) 
                                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we) 
                                                                     << 3U))) 
                                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i 
        = ((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we)) 
                    << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
            << 2U) | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_lower__DOT__we)) 
                                << 0x00000021U) | (
                                                   ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we)))) 
                              >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
        = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
        = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we))))) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we))))) 
            >> 0x0000001eU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 4U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
        = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U]) 
           | (((3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                      >> 0x0000001cU)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_0__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x0000001eU)) 
              | (0x0000000cU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000001cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we))))) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we))))) 
            >> 0x0000001cU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 6U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
        = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U]) 
           | (((0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000001aU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_2__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001cU)) 
              | (0x00000030U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000001aU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
        = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we))))) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we))))) 
            >> 0x0000001aU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 8U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U]) 
           | (((0x0000003fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000018U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_4__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001aU)) 
              | (0x000000c0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000018U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we))))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we))))) 
            >> 0x00000018U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000aU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | (((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000016U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_6__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U)) 
              | (0x00000300U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000016U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we))))) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we))))) 
            >> 0x00000016U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000cU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | (((0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000014U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_8__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000016U)) 
              | (0x00000c00U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we))))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we))))) 
            >> 0x00000014U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000eU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU]) 
           | (((0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000012U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_10__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000014U)) 
              | (0x00003000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000012U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we))))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we))))) 
            >> 0x00000012U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000010U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U]) 
           | (((0x00003fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000010U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_12__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000012U)) 
              | (0x0000c000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000010U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we))))) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000011U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we))))) 
            >> 0x00000010U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000012U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0xfffc0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | (((0x0000ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000000eU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_14__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000010U)) 
              | (0x00030000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000000eU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0x0003ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we))))) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000013U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we))))) 
            >> 0x0000000eU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000014U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U] 
        = ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U]) 
           | (((0x0003ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000000cU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_0__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000000eU)) 
              | (0x000c0000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000000cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U] 
        = ((0x000fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we))))) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000015U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we))))) 
            >> 0x0000000cU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000016U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000014U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U] 
        = ((0xffc00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U]) 
           | (((0x000fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000000aU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_2__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000000cU)) 
              | (0x00300000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000000aU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U] 
        = ((0x003fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we))))) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000017U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we))))) 
            >> 0x0000000aU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000018U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000016U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U] 
        = ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U]) 
           | (((0x003fffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 8U)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_4__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x0000000aU)) 
              | (0x00c00000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 8U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we))))) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000019U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we))))) 
            >> 8U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                       << 0x0000001aU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
        = ((0xfc000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU]) 
           | (((0x00ffffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 6U)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_6__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 8U)) | 
              (0x03000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                              >> 6U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
        = ((0x03ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we))))) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we))))) 
            >> 6U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                       << 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000001aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU]) 
           | (((0x03ffffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 4U)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_8__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 6U)) | 
              (0x0c000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                              >> 4U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we))))) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001dU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we))))) 
            >> 4U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                       << 0x0000001eU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000001cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU]) 
           | (((0x0fffffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 2U)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_10__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 4U)) | 
              (0x30000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                              >> 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we))))) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001fU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we))))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we)) 
                                 << 0x00000021U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                  << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we)))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000020U] 
        = (((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i) 
            | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we)) 
                          << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                              << 1U) 
                                             | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_12__DOT__we)))) 
                        >> 0x00000020U)) >> 2U)) | 
           (0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000021U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we)) 
                    << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000022U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
            << 2U) | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we)) 
                                << 0x00000021U) | (
                                                   ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_14__DOT__we)))) 
                              >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U] 
        = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U] 
        = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we))))) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000024U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we))))) 
            >> 0x0000001eU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 4U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U] 
        = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U]) 
           | (((3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                      >> 0x0000001cU)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_16__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x0000001eU)) 
              | (0x0000000cU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000001cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we))))) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000026U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we))))) 
            >> 0x0000001cU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 6U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U] 
        = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U]) 
           | (((0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000001aU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_18__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001cU)) 
              | (0x00000030U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000001aU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U] 
        = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we))))) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000028U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we))))) 
            >> 0x0000001aU) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 8U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we)) 
                                                     << 0x00000021U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                        << 1U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we)))) 
                                                   >> 0x00000020U)) 
                                          << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U]) 
           | (((0x0000003fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000018U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_20__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001aU)) 
              | (0x000000c0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000018U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we))))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002aU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we))))) 
            >> 0x00000018U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000aU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU] 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU]) 
           | (((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000016U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_22__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U)) 
              | (0x00000300U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000016U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we))))) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002cU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we))))) 
            >> 0x00000016U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000cU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU]) 
           | (((0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000014U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_24__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000016U)) 
              | (0x00000c00U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we))))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002eU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we))))) 
            >> 0x00000014U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x0000000eU) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU]) 
           | (((0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000012U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_26__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000014U)) 
              | (0x00003000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000012U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we))))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000030U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we))))) 
            >> 0x00000012U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000010U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U]) 
           | (((0x00003fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x00000010U)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_28__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000012U)) 
              | (0x0000c000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x00000010U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we))))) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000032U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we)) 
                      << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                          << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we))))) 
            >> 0x00000010U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                << 0x00000012U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000033U] 
        = ((0xfffc0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000033U]) 
           | (((0x0000ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                               >> 0x0000000eU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_30__DOT__we)))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000010U)) 
              | (0x00030000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                >> 0x0000000eU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000033U] 
        = ((0x0003ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000033U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)))) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U] 
        = ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                         << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)))) 
               >> 0x0000000eU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i)) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i))) 
                                           >> 0x00000020U)) 
                                  << 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U] 
        = ((0x0007ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U]) 
           | ((((((((0x0000007fU == (0x0000007fU & 
                                     (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we))))) 
                    << 3U) | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                    << 1U))) | (((0x0000007fU 
                                                  == 
                                                  (0x0000007fU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we))))) 
                                                 << 1U) 
                                                | (1U 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i))) 
                 << 9U) | (((0x0000007fU == (0x0000007fU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we))))) 
                            << 8U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                              >> 2U)) 
                                       | (0x0000000fU 
                                          == (0x0000000fU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we)))))) 
                                      << 6U))) | ((
                                                   ((4U 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i) 
                                                    | (((0x0000000fU 
                                                         == 
                                                         (0x0000000fU 
                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                             >> 1U)))) 
                                                   << 3U) 
                                                  | (((0x0000000fU 
                                                       == 
                                                       (0x0000000fU 
                                                        & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                            << 1U)) 
                                                        | (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))))))) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000035U] 
        = (0x7fffffffU & (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q) 
                                 << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_fifo_empty__q) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q) 
                                   << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_err__q))) 
                              << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_done__q) 
                                                     << 8U) 
                                                    | (0x00000080U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                          << 5U))))) 
                            | ((((((7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we))))) 
                                   << 3U) | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                   << 1U))) 
                                 | (((7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we))))) 
                                     << 1U) | (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i))) 
                                << 3U) | (((7U == (7U 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we))))) 
                                           << 2U) | 
                                          ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we))))) 
                           << 0x00000011U) | ((((0x0000007eU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                    >> 8U)) 
                                                | (0x0000007fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we)))))) 
                                               << 0x0000000aU) 
                                              | ((((0x0000001eU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                       >> 4U)) 
                                                   | (0x0000007fU 
                                                      == 
                                                      (0x0000007fU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we)))))) 
                                                  << 5U) 
                                                 | ((((4U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                          >> 2U)) 
                                                      | (((0x0000007fU 
                                                           == 
                                                           (0x0000007fU 
                                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we))))) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                               >> 3U)))) 
                                                     << 2U) 
                                                    | (((0x0000007fU 
                                                         == 
                                                         (0x0000007fU 
                                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we))))) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                                             >> 2U))))))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_continue 
        = ((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
              >> 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_start 
        = ((0x0000000fU == (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cmd_hash_continue__DOT__we))))) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i);
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st_next 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st)
            ? (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q))
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_process) 
               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                   >> 3U) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config)) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[0U] 
        = (IData)((((QData)((IData)((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we) 
                                          << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we))) 
                                       << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we) 
                                                  << 8U) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we) 
                                                       << 6U)))) 
                                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we))))))) 
                    << 0x00000030U) | (((QData)((IData)(
                                                        ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                             << 2U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)))))) 
                                        << 0x00000029U) 
                                       | (((QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we) 
                                                             << 2U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we))))) 
                                           << 0x00000026U) 
                                          | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                                              << 0x00000025U) 
                                             | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                                                 << 0x00000024U) 
                                                | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)) 
                                                    << 0x00000023U) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we) 
                                                                          << 0x0000001fU) 
                                                                         | (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we))) 
                                                                                << 0x0000000bU) 
                                                                               | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we))) 
                                                                                << 7U)) 
                                                                              | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))))) 
                                                                             << 0x0000000fU) 
                                                                            | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                                                                                << 7U)) 
                                                                               | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we)))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[1U] 
        = ((0x80000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[1U]) 
           | (IData)(((((QData)((IData)((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_13__DOT__we) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we))) 
                                           << 9U) | 
                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_9__DOT__we) 
                                            << 8U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                               << 7U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_5__DOT__we) 
                                                 << 6U)))) 
                                         | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_1__DOT__we) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                   << 3U))) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_29__DOT__we) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_25__DOT__we))))))) 
                        << 0x00000030U) | (((QData)((IData)(
                                                            ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_21__DOT__we) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_17__DOT__we))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_13__DOT__we) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we)))))) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_9__DOT__we) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_5__DOT__we))))) 
                                               << 0x00000026U) 
                                              | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we)) 
                                                  << 0x00000025U) 
                                                 | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_1__DOT__we)) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i)) 
                                                        << 0x00000023U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we) 
                                                                              << 0x0000001fU) 
                                                                             | (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_11__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_3__DOT__we))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_27__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_19__DOT__we))) 
                                                                                << 7U)) 
                                                                                | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_11__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_3__DOT__we))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_cfg_digest_size__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))))) 
                                                                                << 0x0000000fU) 
                                                                                | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_31__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_15__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                                                                                << 7U)) 
                                                                                | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_digest_7__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_7__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_key_23__DOT__we) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__we)))))))))))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[1U] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
            >> 1U) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                               >> 0x00000020U)) << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT____VdfgRegularize_h2b951de2_0_64[3U] 
        = (0x03ffffffU & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                   >> 0x00000020U)) 
                          >> 1U));
    __Vtableidx77 = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__hash_process_i) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_done_o) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_on_blk_o))) 
                      << 3U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__init_hash) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__run_hash) 
                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest))) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__done_state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__done_state_d 
        = Vsim__ConstPool__TABLE_hc7e221b9_0[__Vtableidx77];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_done_event 
        = Vsim__ConstPool__TABLE_h46dd8664_0[__Vtableidx77];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i) 
           | ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_q))) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_secret_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000018U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000019U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i;
    } else if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)))) {
        if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000032U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000033U] 
                    << 0x0000000eU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000032U] 
                                       >> 0x00000012U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000032U] 
                    << 0x0000000fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U] 
                                       >> 0x00000011U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[1U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000030U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U] 
                    << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000030U] 
                                       >> 0x00000010U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[2U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000030U] 
                    << 0x00000011U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU] 
                                       >> 0x0000000fU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[3U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002eU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU] 
                    << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002eU] 
                                       >> 0x0000000eU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[4U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002eU] 
                    << 0x00000013U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU] 
                                       >> 0x0000000dU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[5U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002cU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU] 
                    << 0x00000014U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002cU] 
                                       >> 0x0000000cU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[6U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002cU] 
                    << 0x00000015U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU] 
                                       >> 0x0000000bU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[7U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002aU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU] 
                    << 0x00000016U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002aU] 
                                       >> 0x0000000aU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[8U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002aU] 
                    << 0x00000017U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U] 
                                       >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[9U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000080U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000028U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U] 
                    << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000028U] 
                                       >> 8U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000aU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000028U] 
                    << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U] 
                                       >> 7U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000bU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000026U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000026U] 
                                       >> 6U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000cU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000026U] 
                    << 0x0000001bU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U] 
                                       >> 5U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000dU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000024U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U] 
                    << 0x0000001cU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000024U] 
                                       >> 4U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000eU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000024U] 
                    << 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U] 
                                       >> 3U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000fU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000022U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U] 
                    << 0x0000001eU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000022U] 
                                       >> 2U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000010U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000021U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000022U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000021U] 
                                       >> 1U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000011U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001fU] 
             >> 0x0000001fU)) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000020U];
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000012U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x40000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001fU] 
                    << 1U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
                              >> 0x0000001fU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000013U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001dU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
                    << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001dU] 
                              >> 0x0000001eU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000014U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001dU] 
                    << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
                              >> 0x0000001dU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000015U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001bU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
                    << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
                              >> 0x0000001cU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000016U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
                    << 5U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
                              >> 0x0000001bU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000017U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000019U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
                    << 6U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000019U] 
                              >> 0x0000001aU));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000018U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000019U] 
                    << 7U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U] 
                              >> 0x00000019U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000019U] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000017U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U] 
                    << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000017U] 
                              >> 0x00000018U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001aU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00400000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000017U] 
                    << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U] 
                              >> 0x00000017U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001bU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00200000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000015U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U] 
                    << 0x0000000aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000015U] 
                                       >> 0x00000016U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001cU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000015U] 
                    << 0x0000000bU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U] 
                                       >> 0x00000015U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001dU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000013U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U] 
                    << 0x0000000cU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000013U] 
                                       >> 0x00000014U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001eU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
        if ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U])) {
            vlSelfRef.__Vfunc_conv_endian32__1435__swap 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                         >> 9U));
            vlSelfRef.__Vfunc_conv_endian32__1435__v 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000013U] 
                    << 0x0000000dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U] 
                                       >> 0x00000013U));
            vlSelfRef.__Vfunc_conv_endian32__1435__conv_data 
                = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1435__v, 8U);
            vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1435__swap)
                    ? vlSelfRef.__Vfunc_conv_endian32__1435__conv_data
                    : vlSelfRef.__Vfunc_conv_endian32__1435__v);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001fU] 
                = vlSelfRef.__Vfunc_conv_endian32__1435__Vfuncout;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we = 0U;
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
              << 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
                                 >> 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfeU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
                        >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0U] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x0020U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
                                                   >> 3U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfeU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[2U] 
                         >> 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
                                   >> 3U))));
        VL_ASSIGNSEL_WI(512, 32, 0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
                                << 0x0000001cU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
                                                   >> 4U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
              << 0x0000001cU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
                                 >> 4U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfdU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[3U] 
                        >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[2U] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x0060U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
                                << 0x0000001bU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
                                                   >> 5U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfdU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (2U & ((0x1ffffffeU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
                                        >> 3U)) | (0x0ffffffeU 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
                                                      >> 4U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x0040U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
                                << 0x0000001aU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
                                                   >> 6U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
              << 0x0000001bU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
                                 >> 5U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[4U] 
                        >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[4U] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x00a0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
                                << 0x00000019U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
                                                   >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xfbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (4U & ((0x0ffffffcU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
                                        >> 4U)) | (0x07fffffcU 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
                                                      >> 5U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x0080U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000080U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
                                                   >> 8U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
              << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
                                 >> 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xf7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[5U] 
                        >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[6U] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x00e0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
                                << 0x00000017U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
                                                   >> 9U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xf7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (8U & ((0x07fffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
                                        >> 5U)) | (0x03fffff8U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
                                                      >> 6U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x00c0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
                                << 0x00000016U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
                                                   >> 0x0000000aU));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
              << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
                                 >> 7U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xefU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000010U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[6U] 
                                 >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[8U] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x0120U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
                                << 0x00000015U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
                                                   >> 0x0000000bU));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xefU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000010U & ((0x03fffff0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
                                                 >> 6U)) 
                                 | (0x01fffff0U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
                                                   >> 7U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x0100U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000bU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
                                << 0x00000014U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
                                                   >> 0x0000000cU));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
              << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
                                 >> 8U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xdfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[7U] 
                                 >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000aU] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x0160U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
                                << 0x00000013U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
                                                   >> 0x0000000dU));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xdfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000020U & ((0x01ffffe0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
                                                 >> 7U)) 
                                 | (0x00ffffe0U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
                                                   >> 8U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x0140U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000dU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
                                << 0x00000012U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
                                                   >> 0x0000000eU));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
              << 0x00000017U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
                                 >> 9U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xbfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000040U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[8U] 
                                 >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000cU] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x01a0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
                                << 0x00000011U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
                                                   >> 0x0000000fU));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0xbfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000040U & ((0x00ffffc0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
                                                 >> 8U)) 
                                 | (0x007fffc0U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
                                                   >> 9U)))));
        VL_ASSIGNSEL_WI(512, 32, 0x0180U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000fU])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U] 
                                << 0x00000010U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
                                                   >> 0x00000010U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU]));
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.__Vfunc_conv_endian32__1436__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1436__v = 
            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
              << 0x00000016U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
                                 >> 0x0000000aU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0x7fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000080U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[9U] 
                                 >> 2U)));
        vlSelfRef.__Vfunc_conv_endian32__1436__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1436__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1436__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1436__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1436__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw[0x0000000eU] 
            = vlSelfRef.__Vfunc_conv_endian32__1436__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))) {
        VL_ASSIGNSEL_WI(512, 32, 0x01e0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1437__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000011U] 
                                << 0x0000000fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U] 
                                                   >> 0x00000011U));
                        vlSelfRef.__Vfunc_conv_endian32__1437__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1437__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1437__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1437__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1437__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1437__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we 
            = ((0x7fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw_we)) 
               | (0x00000080U & ((0x007fff80U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000010U] 
                                                 >> 9U)) 
                                 | (0x003fff80U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000011U] 
                                                   >> 0x0000000aU)))));
        VL_ASSIGNSEL_WI(512, 32, 0x01c0U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_sw, 
                        ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000011U])
                          ? ([&]() {
                        vlSelfRef.__Vfunc_conv_endian32__1438__swap 
                            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 7U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__v 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U] 
                                << 0x0000000eU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000011U] 
                                                   >> 0x00000012U));
                        vlSelfRef.__Vfunc_conv_endian32__1438__conv_data 
                            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1438__v, 8U);
                        vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1438__swap)
                                ? vlSelfRef.__Vfunc_conv_endian32__1438__conv_data
                                : vlSelfRef.__Vfunc_conv_endian32__1438__v);
                    }(), vlSelfRef.__Vfunc_conv_endian32__1438__Vfuncout)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU]));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block) {
        if ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000012U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000013U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000014U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00200000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000015U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00400000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000016U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000017U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000018U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000019U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001aU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001bU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001cU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001dU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x40000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001eU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000001fU] 
             >> 0x0000001fU)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000021U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000022U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000023U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000024U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000025U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000026U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000027U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000080U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000028U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000029U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002aU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002bU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002cU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002dU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002eU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x0000002fU])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000030U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000031U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
        if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000032U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__update_seckey_inprocess = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_continue) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1227));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT____VdfgRegularize_hce518dd1_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_start) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_continue));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_hash_start) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1227));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_hmac_done__DOT__hw2reg_intr_state_de_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
            & (7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_done_event));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_active 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT____VdfgRegularize_hce518dd1_0_1) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_sha_disabled 
        = ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
               >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT____VdfgRegularize_hce518dd1_0_1));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config_atstart 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT____VdfgRegularize_hce518dd1_0_1) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_or_continue 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__load_txcount = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__idle_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i))) 
           & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)) 
              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_d)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__idle_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_continue = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)))) {
                if ((1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i))))) {
                    if (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                          >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__load_txcount = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_continue = 1U;
                    }
                }
            }
        }
    }
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_or_continue)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_continue_i 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_continue)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err 
        = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree[0U] 
        = (IData)((((QData)((IData)((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__) 
                                          << 3U) | 
                                         ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__) 
                                          << 2U)) | 
                                        (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__) 
                                          << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__))) 
                                       << 9U) | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__) 
                                                  << 8U) 
                                                 | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__) 
                                                     << 7U) 
                                                    | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__) 
                                                       << 6U)))) 
                                     | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__) 
                                          << 5U) | 
                                         (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__) 
                                           << 4U) | 
                                          ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__) 
                                           << 3U))) 
                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__) 
                                            << 2U) 
                                           | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__) 
                                               << 1U) 
                                              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__))))))) 
                    << 0x0000002fU) | (((QData)((IData)(
                                                        ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__) 
                                                           << 5U) 
                                                          | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__) 
                                                              << 4U) 
                                                             | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__) 
                                                                << 3U))) 
                                                         | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__) 
                                                             << 2U) 
                                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__) 
                                                                << 1U) 
                                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__)))))) 
                                        << 0x00000029U) 
                                       | (((QData)((IData)(
                                                           (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__) 
                                                             << 2U) 
                                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__) 
                                                                << 1U) 
                                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__))))) 
                                           << 0x00000026U) 
                                          | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__)) 
                                              << 0x00000025U) 
                                             | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__)) 
                                                 << 0x00000024U) 
                                                | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__)) 
                                                    << 0x00000023U) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__) 
                                                                         << 1U) 
                                                                        | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
                                                                          << 0x0000001fU) 
                                                                         | (((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__))) 
                                                                                << 0x0000000bU) 
                                                                               | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__))) 
                                                                                << 7U)) 
                                                                              | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__))))) 
                                                                             << 0x0000000fU) 
                                                                            | (((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__))) 
                                                                                << 7U)) 
                                                                               | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err)))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree[1U] 
        = (IData)(((((QData)((IData)((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__59__KET__) 
                                           << 3U) | 
                                          ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__58__KET__) 
                                           << 2U)) 
                                         | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__57__KET__) 
                                             << 1U) 
                                            | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__56__KET__))) 
                                        << 9U) | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__55__KET__) 
                                                   << 8U) 
                                                  | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__) 
                                                      << 7U) 
                                                     | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__) 
                                                        << 6U)))) 
                                      | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__) 
                                           << 5U) | 
                                          (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__) 
                                            << 4U) 
                                           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__) 
                                              << 3U))) 
                                         | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__) 
                                             << 2U) 
                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__) 
                                                << 1U) 
                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__))))))) 
                     << 0x0000002fU) | (((QData)((IData)(
                                                         ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__) 
                                                            << 5U) 
                                                           | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__) 
                                                               << 4U) 
                                                              | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__) 
                                                                 << 3U))) 
                                                          | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__) 
                                                              << 2U) 
                                                             | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__) 
                                                                 << 1U) 
                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__)))))) 
                                         << 0x00000029U) 
                                        | (((QData)((IData)(
                                                            (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__) 
                                                              << 2U) 
                                                             | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__) 
                                                                 << 1U) 
                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__))))) 
                                            << 0x00000026U) 
                                           | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__)) 
                                               << 0x00000025U) 
                                              | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__)) 
                                                  << 0x00000024U) 
                                                 | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__)) 
                                                     << 0x00000023U) 
                                                    | (((QData)((IData)(
                                                                        (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__) 
                                                                          << 1U) 
                                                                         | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
                                                                           << 0x0000001fU) 
                                                                          | (((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__))) 
                                                                                << 7U)) 
                                                                               | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__))))) 
                                                                              << 0x0000000fU) 
                                                                             | (((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__))) 
                                                                                << 7U)) 
                                                                                | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err)))))))))))))))) 
                   >> 0x00000020U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err) 
           | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[0U] 
        = (IData)((((QData)((IData)((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we) 
                                          << 3U) | 
                                         ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
                                          << 2U)) | 
                                        (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__) 
                                          << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__))) 
                                       << 9U) | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__) 
                                                  << 8U) 
                                                 | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
                                                     << 7U) 
                                                    | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__) 
                                                       << 6U)))) 
                                     | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
                                          << 5U) | 
                                         (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__) 
                                           << 4U) | 
                                          ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
                                           << 3U))) 
                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__) 
                                            << 2U) 
                                           | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
                                               << 1U) 
                                              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__))))))) 
                    << 0x00000030U) | (((QData)((IData)(
                                                        ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
                                                             << 3U) 
                                                            | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__) 
                                                               << 2U)) 
                                                           | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
                                                               << 1U) 
                                                              | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__))) 
                                                          << 3U) 
                                                         | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
                                                             << 2U) 
                                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__) 
                                                                << 1U) 
                                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__)))))) 
                                        << 0x00000029U) 
                                       | (((QData)((IData)(
                                                           (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__) 
                                                             << 2U) 
                                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
                                                                << 1U) 
                                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__))))) 
                                           << 0x00000026U) 
                                          | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__)) 
                                              << 0x00000025U) 
                                             | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                                                 << 0x00000024U) 
                                                | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__)) 
                                                    << 0x00000023U) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                         << 1U) 
                                                                        | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
                                                                          << 0x0000001fU) 
                                                                         | (((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__))) 
                                                                                << 0x0000000bU) 
                                                                               | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__))) 
                                                                                << 7U)) 
                                                                              | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__))))) 
                                                                             << 0x0000000fU) 
                                                                            | (((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__))) 
                                                                                << 7U)) 
                                                                               | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[1U] 
        = ((0x80000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[1U]) 
           | (IData)(((((QData)((IData)((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_msg_length_upper__DOT__we) 
                                              << 3U) 
                                             | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
                                                << 2U)) 
                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__) 
                                                << 1U) 
                                               | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__))) 
                                           << 9U) | 
                                          (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__) 
                                            << 8U) 
                                           | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
                                               << 7U) 
                                              | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__) 
                                                 << 6U)))) 
                                         | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
                                              << 5U) 
                                             | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__) 
                                                 << 4U) 
                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
                                                   << 3U))) 
                                            | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__) 
                                                << 2U) 
                                               | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
                                                   << 1U) 
                                                  | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__))))))) 
                        << 0x00000030U) | (((QData)((IData)(
                                                            ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
                                                                 << 3U) 
                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__) 
                                                                   << 2U)) 
                                                               | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
                                                                   << 1U) 
                                                                  | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__))) 
                                                              << 3U) 
                                                             | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
                                                                 << 2U) 
                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__) 
                                                                    << 1U) 
                                                                   | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__)))))) 
                                            << 0x00000029U) 
                                           | (((QData)((IData)(
                                                               (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__) 
                                                                 << 2U) 
                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
                                                                    << 1U) 
                                                                   | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__))))) 
                                               << 0x00000026U) 
                                              | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__)) 
                                                  << 0x00000025U) 
                                                 | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__)) 
                                                        << 0x00000023U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                             << 1U) 
                                                                            | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
                                                                              << 0x0000001fU) 
                                                                             | (((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__))) 
                                                                                << 7U)) 
                                                                                | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__))))) 
                                                                                << 0x0000000fU) 
                                                                                | (((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__))) 
                                                                                << 0x0000000bU) 
                                                                                | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__))) 
                                                                                << 7U)) 
                                                                                | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__) 
                                                                                << 3U) 
                                                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 2U)) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__))) 
                                                                                << 3U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)))))))))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[1U] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
            >> 1U) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                               >> 0x00000020U)) << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[3U] 
        = ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                    >> 0x00000020U)) >> 1U);
}

void Vsim___024root___nba_sequent__TOP__192(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__192\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_out_n)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode)
            : 0U);
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_s2p.sv:43: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_s2p: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_s2p.sv", 43, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_s2p.sv:91: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_s2p: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_s2p.sv", 91, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_p2s.sv:60: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_p2s: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_p2s.sv", 60, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_p2s.sv:100: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_p2s: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_p2s.sv", 100, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_p2s.sv:136: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_p2s: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_p2s.sv", 136, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_p2s.sv:185: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_p2s: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_p2s.sv", 185, "");
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__last_beat 
            = (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o 
            = (6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt));
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__last_beat 
            = (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o 
            = (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__last_beat 
            = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
               & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o 
            = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
               & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt)));
    }
}

void Vsim___024root___nba_comb__TOP__78(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__78\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__empty_rclk)
            ? 0ULL : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage
           [0U]);
    if ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                              >> 0x0000003dU))))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_381 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000000fU));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_528 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_381;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_524 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_528;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_381 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_528 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_524 = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_381)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      (0x0000fffeU 
                                                       & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o) 
                                                          << 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_381)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000fffeU 
                                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o) 
                                                              << 1U))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U]) 
           | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                       >> 0x0000002fU)) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[2U] 
        = (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                          >> 0x0000002fU)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT____VdfgRegularize_h2c272aba_0_2 
        = (((QData)((IData)((0x000000ffU & (IData)(
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                                                    >> 0x00000038U))))) 
            << 0x00000037U) | (((QData)((IData)((0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                                                            >> 0x00000031U))))) 
                                << 0x0000002fU) | (0x00007fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[1U])) 
                                                       << 0x0000001eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__u_devicefifo__DOT__rspfifo__DOT__wdata_i[0U])) 
                                                         >> 2U)))));
}

void Vsim___024root___nba_comb__TOP__79(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__79\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__dfifo_rspready 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i)) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__empty_rclk)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_36__DOT__dfifo_rspready)));
}

void Vsim___024root___nba_comb__TOP__80(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__80\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__526__Vfuncout;
    __Vfunc_mubi4_test_true_strict__526__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__526__val;
    __Vfunc_mubi4_test_true_strict__526__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__527__Vfuncout;
    __Vfunc_mubi4_and_hi__527__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__527__a;
    __Vfunc_mubi4_and_hi__527__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__527__b;
    __Vfunc_mubi4_and_hi__527__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__528__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__528__val;
    __Vfunc_mubi4_bool_to_mubi__528__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__529__Vfuncout;
    __Vfunc_mubi4_and__529__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__529__a;
    __Vfunc_mubi4_and__529__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__529__b;
    __Vfunc_mubi4_and__529__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__529__a_in;
    __Vfunc_mubi4_and__529__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__529__b_in;
    __Vfunc_mubi4_and__529__b_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rdata_sram = 0ULL;
    __Vfunc_mubi4_and_hi__527__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__528__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__528__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__528__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_and_hi__527__a = __Vfunc_mubi4_bool_to_mubi__528__Vfuncout;
    __Vfunc_mubi4_and__529__b = __Vfunc_mubi4_and_hi__527__b;
    __Vfunc_mubi4_and__529__a = __Vfunc_mubi4_and_hi__527__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__529__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5515989544322897505ull);
    __Vfunc_mubi4_and__529__a_in = __Vfunc_mubi4_and__529__a;
    __Vfunc_mubi4_and__529__b_in = __Vfunc_mubi4_and__529__b;
    vlSelfRef.__Vfunc_mubi4_and__529__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__529__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__529__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__529__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__529__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__529__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__529__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__529__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__529__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__529__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__529__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__529__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__529__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__529__out;
    __Vfunc_mubi4_and_hi__527__Vfuncout = __Vfunc_mubi4_and__529__Vfuncout;
    __Vfunc_mubi4_test_true_strict__526__val = __Vfunc_mubi4_and_hi__527__Vfuncout;
    __Vfunc_mubi4_test_true_strict__526__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__526__val));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__526__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rdata_sram 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0x0000000fU & ((IData)(5U) 
                                           * (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                     ? (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (0x0000000fU 
                                           & ((IData)(5U) 
                                              * (1U 
                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))
                     : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x21U >= (0x0000003fU & ((IData)(0x00000011U) 
                                              * (1U 
                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                     ? (0x0001ffffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                               >> (0x0000003fU 
                                                   & ((IData)(0x00000011U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))))
                     : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
        = (0x0000007fffffffffULL & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rdata_sram 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__481__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__481__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__481__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__481__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata = 0ULL;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rvalid = 0U;
    if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__516__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__516__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__516__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__516__Vfuncout)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rvalid = 1U;
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__517__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__517__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__517__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__517__Vfuncout))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffeULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffeULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)));
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0x00000027U;
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 1U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 1U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffdULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 1U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 1U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffdULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 1U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 2U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 2U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffbULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 2U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 2U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffffbULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 2U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 3U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 3U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffff7ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 3U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 3U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffff7ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 3U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 4U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 4U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffefULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 4U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 4U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffefULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 4U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 5U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 5U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffdfULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 5U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 5U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffdfULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 5U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 6U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 6U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffbfULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 6U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 6U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffffbfULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 6U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 7U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 7U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffff7fULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 7U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 7U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffff7fULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 7U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 8U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 8U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffeffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 8U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 8U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffeffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 8U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 9U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 9U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffdffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 9U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 9U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffdffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 9U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0aU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0aU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffbffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000aU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0aU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffffbffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000aU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0bU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0bU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffff7ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000bU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0bU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffff7ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000bU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0cU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0cU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffefffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000cU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0cU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffefffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000cU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0dU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0dU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffdfffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000dU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0dU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffdfffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000dU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0eU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0eU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffbfffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000eU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0eU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffffbfffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000eU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x0fU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x0fU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffff7fffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000000fU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x0fU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffff7fffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000000fU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x10U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x10U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffeffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000010U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x10U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffeffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000010U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x11U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x11U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffdffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000011U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x11U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffdffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000011U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x12U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x12U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffbffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000012U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x12U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffffbffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000012U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x13U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x13U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffff7ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000013U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x13U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffff7ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000013U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x14U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x14U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffefffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000014U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x14U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffefffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000014U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x15U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x15U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffdfffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000015U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x15U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffdfffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000015U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x16U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x16U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffbfffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000016U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x16U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fffbfffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000016U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x17U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x17U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fff7fffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000017U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x17U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fff7fffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000017U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x18U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x18U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffeffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000018U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x18U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffeffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000018U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x19U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x19U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffdffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000019U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x19U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffdffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000019U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1aU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1aU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffbffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001aU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1aU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ffbffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001aU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1bU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1bU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ff7ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001bU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1bU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007ff7ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001bU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1cU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1cU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fefffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001cU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1cU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fefffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001cU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1dU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1dU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fdfffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001dU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1dU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fdfffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001dU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1eU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1eU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fbfffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001eU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1eU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007fbfffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001eU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x1fU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x1fU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007f7fffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x0000001fU));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x1fU)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007f7fffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x0000001fU));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x20U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x20U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007effffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000020U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x20U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007effffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000020U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x21U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x21U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007dffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000021U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x21U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007dffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000021U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x22U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x22U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007bffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000022U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x22U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000007bffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000022U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x23U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x23U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x00000077ffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000023U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x23U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x00000077ffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000023U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x24U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x24U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000006fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000024U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x24U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000006fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000024U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x25U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x25U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000005fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000025U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x25U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000005fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000025U));
            }
            if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q 
                               >> 0x26U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_q 
                                     >> 0x26U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000003fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__0)) 
                          << 0x00000026U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1 
                    = (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata 
                                     >> 0x26U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                    = ((0x0000003fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata) 
                       | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT____Vlvbound_h42dad1d3__1)) 
                          << 0x00000026U));
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rdata;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__rdata_tlword 
        = ((0U != (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                  >> 1U))) ? ((0x26U 
                                               >= (0x0000003fU 
                                                   & ((IData)(0x00000027U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o)))))
                                               ? (0x0000007fffffffffULL 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rdata 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ((IData)(0x00000027U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o))))))
                                               : 0ULL)
            : 0x0000002a00000000ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_rvalid));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__rdata_tlword)) 
            << 8U) | (QData)((IData)((0x000000feU & 
                                      ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__rdata_tlword 
                                                >> 0x00000020U)) 
                                       << 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x000000ffffffffffULL & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i
                                                : (
                                                   (0x4fU 
                                                    >= 
                                                    (0x0000007fU 
                                                     & ((IData)(0x00000028U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000027U) 
                                                                       + 
                                                                       (0x0000007fU 
                                                                        & ((IData)(0x00000028U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000028U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x0000007fU 
                                                                            & ((IData)(0x00000028U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000028U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (3U 
                                                                           & (((IData)(0x00000028U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000028U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))))
                                                    : 0ULL))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_error 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                  >> 0x0000000fU)))
                     ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o) 
                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                           >> 0x0000000eU)) : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 0x0000000eU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x00008000U != (0x0001c000U 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rvalid_o) 
              & (0x00008000U == (0x00018000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_data 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_error)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__vld_rd_rsp))
            ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                       >> 8U)) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__error_blanking_data);
}

void Vsim___024root___nba_comb__TOP__81(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__81\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__102__Vfuncout;
    __Vfunc_mubi4_test_true_strict__102__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__102__val;
    __Vfunc_mubi4_test_true_strict__102__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__103__Vfuncout;
    __Vfunc_mubi4_and_hi__103__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__103__a;
    __Vfunc_mubi4_and_hi__103__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__103__b;
    __Vfunc_mubi4_and_hi__103__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__104__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__104__val;
    __Vfunc_mubi4_bool_to_mubi__104__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__105__Vfuncout;
    __Vfunc_mubi4_and__105__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__105__a;
    __Vfunc_mubi4_and__105__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__105__b;
    __Vfunc_mubi4_and__105__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__105__a_in;
    __Vfunc_mubi4_and__105__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__105__b_in;
    __Vfunc_mubi4_and__105__b_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__rdata_sram = 0U;
    __Vfunc_mubi4_and_hi__103__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__104__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__104__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__104__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_and_hi__103__a = __Vfunc_mubi4_bool_to_mubi__104__Vfuncout;
    __Vfunc_mubi4_and__105__b = __Vfunc_mubi4_and_hi__103__b;
    __Vfunc_mubi4_and__105__a = __Vfunc_mubi4_and_hi__103__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__105__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4643120775503122064ull);
    __Vfunc_mubi4_and__105__a_in = __Vfunc_mubi4_and__105__a;
    __Vfunc_mubi4_and__105__b_in = __Vfunc_mubi4_and__105__b;
    vlSelfRef.__Vfunc_mubi4_and__105__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__105__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__105__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__105__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__105__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__105__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__105__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__105__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__105__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__105__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__105__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__105__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__105__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__105__out;
    __Vfunc_mubi4_and_hi__103__Vfuncout = __Vfunc_mubi4_and__105__Vfuncout;
    __Vfunc_mubi4_test_true_strict__102__val = __Vfunc_mubi4_and_hi__103__Vfuncout;
    __Vfunc_mubi4_test_true_strict__102__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__102__val));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__102__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__rdata_sram 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x0000000fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__idx_o)
                                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (7U & VL_SHIFTL_III(3,3,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 2U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__95__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__95__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__95__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__95__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rvalid_o));
    if ((0x0dU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid)) 
               | (0x3fffU & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0) 
                             << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))));
    }
}

void Vsim___024root___nba_sequent__TOP__193(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__193\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__30__KET__ 
        = ((IData)((0x01e00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01f00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__29__KET__ 
        = ((IData)((0x01c00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01d00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__28__KET__ 
        = ((IData)((0x01a00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01b00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__27__KET__ 
        = ((IData)((0x01800000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01900000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__26__KET__ 
        = ((IData)((0x01600000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01700000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__25__KET__ 
        = ((IData)((0x01400000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01500000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__24__KET__ 
        = ((IData)((0x01200000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01300000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__23__KET__ 
        = ((IData)((0x01000000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x01100000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__22__KET__ 
        = ((IData)((0x00e00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00f00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__21__KET__ 
        = ((IData)((0x00c00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00d00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__20__KET__ 
        = ((IData)((0x00a00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00b00000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__19__KET__ 
        = ((IData)((0x00800000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00900000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__18__KET__ 
        = ((IData)((0x00600000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00700000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__17__KET__ 
        = ((IData)((0x00400000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00500000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__16__KET__ 
        = ((IData)((0x00200000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00300000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__15__KET__ 
        = ((IData)((0U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))) 
           | (IData)((0x00100000U == (0x01f00000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__30__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__29__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__28__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__27__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__26__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__25__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__24__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__23__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__22__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__21__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__20__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__19__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__18__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__17__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__16__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__15__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__30__KET__ 
        = ((0x1eU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x1fU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__29__KET__ 
        = ((0x1cU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x1dU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__28__KET__ 
        = ((0x1aU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x1bU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__27__KET__ 
        = ((0x18U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x19U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__26__KET__ 
        = ((0x16U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x17U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__25__KET__ 
        = ((0x14U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x15U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__24__KET__ 
        = ((0x12U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x13U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__23__KET__ 
        = ((0x10U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x11U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__22__KET__ 
        = ((0x0eU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x0fU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__21__KET__ 
        = ((0x0cU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x0dU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__20__KET__ 
        = ((0x0aU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                     >> 0x00000014U))) 
           | (0x0bU == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                       >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__19__KET__ 
        = ((8U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                  >> 0x00000014U))) 
           | (9U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__18__KET__ 
        = ((6U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                  >> 0x00000014U))) 
           | (7U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__17__KET__ 
        = ((4U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                  >> 0x00000014U))) 
           | (5U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__16__KET__ 
        = ((2U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                  >> 0x00000014U))) 
           | (3U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__15__KET__ 
        = ((0U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                  >> 0x00000014U))) 
           | (1U == (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i 
        = (0x0000001fU & (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)) 
                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q))
                           ? (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                              >> 0x0000001bU) : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                 >> 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__14__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__29__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__13__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__27__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__12__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__25__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__11__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__23__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__10__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__21__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__9__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__19__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__8__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__17__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__7__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000015U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__15__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000015U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__14__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__29__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__30__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__29__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__29__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__30__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__13__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__27__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__28__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__27__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__27__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__28__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__12__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__25__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__26__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__25__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__26__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__11__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__23__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__24__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__23__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__10__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__21__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__22__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__21__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__19__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__19__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__8__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__17__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__18__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__17__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__7__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__15__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__16__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__15__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__30__KET__ 
        = ((IData)((0x1eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__29__KET__ 
        = ((IData)((0x1cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__28__KET__ 
        = ((IData)((0x1aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x1bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__27__KET__ 
        = ((IData)((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x19U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__26__KET__ 
        = ((IData)((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__25__KET__ 
        = ((IData)((0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__24__KET__ 
        = ((IData)((0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__23__KET__ 
        = ((IData)((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__22__KET__ 
        = ((IData)((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__21__KET__ 
        = ((IData)((0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__20__KET__ 
        = ((IData)((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__19__KET__ 
        = ((IData)((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__18__KET__ 
        = ((IData)((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__17__KET__ 
        = ((IData)((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__16__KET__ 
        = ((IData)((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__15__KET__ 
        = ((IData)((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))) 
           | (IData)((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__30__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__29__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__28__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__27__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__26__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__25__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__24__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__23__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__22__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__21__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__20__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__19__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__18__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__17__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__16__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__15__KET__ = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__30__KET__ 
        = ((0x1eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__29__KET__ 
        = ((0x1cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__28__KET__ 
        = ((0x1aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x1bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__27__KET__ 
        = ((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x19U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__26__KET__ 
        = ((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__25__KET__ 
        = ((0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__24__KET__ 
        = ((0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__23__KET__ 
        = ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__22__KET__ 
        = ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__21__KET__ 
        = ((0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__20__KET__ 
        = ((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__19__KET__ 
        = ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__18__KET__ 
        = ((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__17__KET__ 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__16__KET__ 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__15__KET__ 
        = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)) 
           | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__6__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000016U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__13__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000016U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__5__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000016U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__11__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000016U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__4__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000016U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__9__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000016U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__3__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000016U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__7__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000016U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__6__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__13__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__14__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__13__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__13__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__14__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__5__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__11__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__12__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__11__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__9__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__10__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__9__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__7__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__7__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__14__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__29__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__13__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__27__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__12__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__25__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__11__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__23__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__10__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__21__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__9__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__19__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__8__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__17__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__7__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__15__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__14__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__29__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__30__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__29__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__29__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__30__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__13__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__27__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__28__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__27__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__27__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__28__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__12__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__25__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__26__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__25__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__26__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__11__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__23__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__24__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__23__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__10__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__21__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__22__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__21__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__19__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__19__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__8__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__17__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__18__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__17__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__7__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__15__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__16__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__15__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__2__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000017U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__5__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000017U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__1__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000017U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__3__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000017U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__5__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__6__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__5__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__6__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__3__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__6__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__13__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__5__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__11__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__4__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__9__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__3__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__7__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__6__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__13__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__14__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__13__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__13__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__14__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__5__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__11__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__12__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__11__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__9__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__10__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__9__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__7__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__7__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__0__KET__ 
        = (((~ (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
                >> 0x00000018U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__1__KET__)) 
           | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__instr_rdata_id 
               >> 0x00000018U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__BRA__2__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__oh0_err 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__1__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__BRA__2__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__1__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__BRA__2__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__2__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__5__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__1__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__3__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__5__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__6__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__5__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__6__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__3__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__0__KET__ 
        = (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
                >> 4U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__1__KET__)) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_enc_raddr_a__DOT__in_i) 
               >> 4U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__BRA__2__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__oh0_err 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__1__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__BRA__2__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__1__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__BRA__2__KET__)));
}

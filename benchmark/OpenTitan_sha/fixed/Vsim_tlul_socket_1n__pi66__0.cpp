// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_socket_1n__pi66___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = (2U | (0xffff0001U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]));
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__9__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__9__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__payload;
    __Vfunc_extract_d2h_rsp_intg__9__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_incr_rptr) {
            if ((1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_incr_wptr)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_incr_wptr) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__9__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__9__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__9__payload = ((0x00000038U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__9__tl[2U] 
                                                     << 5U) 
                                                    | (0x00000018U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__9__tl[1U] 
                                                          >> 0x0000001bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__9__tl[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__9__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = __Vfunc_extract_d2h_rsp_intg__9__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__1__unused_cmd_payload;
    __Vfunc_get_cmd_intg__1__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__1__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__1__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__1__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__1__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__0__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__2__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 681419010538678306ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__1__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__2__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__1__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__1__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__1__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__1__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__4__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__1__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__1__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__0__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__0__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__0__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__6__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__7__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__6__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__6__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__6__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__6__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__5__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__6__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__5__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__5__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__5__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x24U 
                                                    <= 
                                                    (0x0000003fU 
                                                     & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 5U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU)))) 
                                                   & (0x27U 
                                                      >= 
                                                      (0x0000003fU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 5U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU)))))
                                                   ? 0U
                                                   : 
                                                  (((0x28U 
                                                     <= 
                                                     (0x0000003fU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU)))) 
                                                    & (0x2bU 
                                                       >= 
                                                       (0x0000003fU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))
                                                    ? 1U
                                                    : 2U)));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [0U][0U]));
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [0U][1U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [1U][0U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [1U][1U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [2U][0U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [2U][1U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
        [3U][0U];
    vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
        [3U][1U];
    vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [0U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [0U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [1U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [1U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [2U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [2U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [2U][2U];
    }
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__2(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1188[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk)) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__3(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rready_i))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rready_i))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1388[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
    vlSelfRef.__PVT__tl_u_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__19__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__19__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__19__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__19__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__19__payload;
    __Vfunc_extract_d2h_rsp_intg__19__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_incr_rptr) {
            if ((1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_incr_wptr)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_incr_wptr) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__19__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__19__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__19__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__19__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__19__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__19__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__19__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__19__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__19__Vfuncout = __Vfunc_extract_d2h_rsp_intg__19__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__19__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__11__unused_cmd_payload;
    __Vfunc_get_cmd_intg__11__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__11__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__11__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__11__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__11__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__10__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__12__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13807422927167256539ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__11__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__12__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__11__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__11__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__13__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__11__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__11__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__14__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__11__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__11__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__10__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__10__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__10__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__16__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__17__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__16__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__16__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__16__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__16__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__15__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__16__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__15__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__15__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__15__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x24U 
                                                    <= 
                                                    (0x0000003fU 
                                                     & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 5U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU)))) 
                                                   & (0x27U 
                                                      >= 
                                                      (0x0000003fU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 5U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU)))))
                                                   ? 0U
                                                   : 
                                                  (((0x28U 
                                                     <= 
                                                     (0x0000003fU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU)))) 
                                                    & (0x2bU 
                                                       >= 
                                                       (0x0000003fU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))
                                                    ? 1U
                                                    : 2U)));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__2(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1189[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk)) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__3(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rready_i))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rready_i))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1389[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
    vlSelfRef.__PVT__tl_u_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__29__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__29__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__29__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__29__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__29__payload;
    __Vfunc_extract_d2h_rsp_intg__29__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) {
        if (vlSelfRef.__PVT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__accept_t_rsp)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSelfRef.__PVT__accept_t_rsp) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__29__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__29__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__29__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__29__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__29__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__29__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__29__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__29__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__29__Vfuncout = __Vfunc_extract_d2h_rsp_intg__29__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__29__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__9__KET____DOT__dev_select) {
        vlSelfRef.__VdfgRegularize_ha6beb6f7_0_1 = 
            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
              << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                        >> 0x00000017U));
        vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i 
            = (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)));
    } else {
        vlSelfRef.__VdfgRegularize_ha6beb6f7_0_1 = 0xffffffffU;
        vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_ha6beb6f7_0_1)) 
                    << 0x00000018U) | (QData)((IData)(
                                                      ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[1U] 
        = ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_ha6beb6f7_0_1)) 
                        << 0x00000018U) | (QData)((IData)(
                                                          ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_364 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[1U] 
        = ((0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[1U]) 
           | ((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                                 << 0x00000029U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                      >> 0x00000017U))))) 
              << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[2U] 
        = (((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                               << 0x00000029U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                    >> 0x00000017U))))) 
            >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                    << 0x00000029U) 
                                   | (((QData)((IData)(
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                       << 9U) | ((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                                 >> 0x00000017U)))) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[3U] 
        = (0x00000fffU & ((IData)(((0x000fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])) 
                                        << 0x00000029U) 
                                       | (((QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U])) 
                                           << 9U) | 
                                          ((QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U])) 
                                           >> 0x00000017U)))) 
                                   >> 0x00000020U)) 
                          >> 8U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__21__unused_cmd_payload;
    __Vfunc_get_cmd_intg__21__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__21__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__21__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__21__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__21__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__20__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__22__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16219395093222571548ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__21__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__22__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__21__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__21__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__23__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__21__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__21__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__24__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__21__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__21__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__20__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__20__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__20__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__26__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__27__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__26__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__26__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__26__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__26__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__25__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__26__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__25__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__25__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__25__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x1000U 
                                                    <= 
                                                    (0x00001fffU 
                                                     & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 5U) 
                                                        | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001bU)))) 
                                                   & (0x1d3fU 
                                                      >= 
                                                      (0x00001fffU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 5U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001bU)))))
                                                   ? 0U
                                                   : 
                                                  (((0x1e00U 
                                                     <= 
                                                     (0x00001fffU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU)))) 
                                                    & (0x1fbfU 
                                                       >= 
                                                       (0x00001fffU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU)))))
                                                    ? 1U
                                                    : 2U)));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__2(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1363[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__3(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[0U][0U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[0U][1U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[0U][2U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[0U][3U] = vlSelf->__PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[1U][0U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[1U][1U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[1U][2U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[1U][3U] = vlSelf->__PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.__PVT__tl_u_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
    vlSelfRef.tl_d_o[2U][0U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[0U];
    vlSelfRef.tl_d_o[2U][1U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[1U];
    vlSelfRef.tl_d_o[2U][2U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[2U];
    vlSelfRef.tl_d_o[2U][3U] = vlSelf->__PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d->tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__4(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [0U][0U]));
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [0U][1U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [1U][0U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [1U][1U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [2U][0U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [2U][1U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
        [3U][0U];
    vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
        [3U][1U];
    vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [0U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [0U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [1U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [1U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [2U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [2U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [2U][2U];
    }
    vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o 
        = ((IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__hfifo_reqready));
    vlSelfRef.__PVT__accept_t_rsp = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
                                     & (vlSelfRef.__PVT__tl_t_p[2U] 
                                        >> 1U));
    vlSelfRef.__PVT__accept_t_req = ((IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i) 
                                     & (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__5(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__6(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1141 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                << 2U)) 
                                                            | (3U 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1217[0U])))));
}

void Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [0U][0U]));
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [0U][1U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [1U][0U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [1U][1U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [2U][0U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [2U][1U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
        [3U][0U];
    vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
        [3U][1U];
    vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [0U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [0U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [1U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [1U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [2U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [2U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [2U][2U];
    }
    vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o 
        = ((IData)(vlSelfRef.__PVT__hfifo_reqready) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__accept_t_rsp = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                     & (vlSelfRef.__PVT__tl_t_p[2U] 
                                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_420 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__tl_t_p[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__tl_t_p[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__tl_t_p[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__tl_t_p[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__PVT__accept_t_req = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                     & (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_420)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_420)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
}

void Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1269 = (
                                                   ((((2U 
                                                       & (VL_REDXOR_32(
                                                                       (0x10U 
                                                                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            VL_REDXOR_32(
                                                                         (8U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                     << 0x0000000eU) 
                                                    | (((2U 
                                                         & (VL_REDXOR_32(
                                                                         (4U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (0x22U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000800U 
                                                       & (VL_REDXOR_32(
                                                                       (0x21U 
                                                                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                          << 0x0000000bU)) 
                                                      | ((0x00000400U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x1fU 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                                             << 0x0000000aU)) 
                                                         | ((0x00000200U 
                                                             & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                                << 9U)) 
                                                            | (0x000001ffU 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1226[0U])))));
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__39__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__39__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__39__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__39__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__39__payload;
    __Vfunc_extract_d2h_rsp_intg__39__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__accept_t_rsp)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSelfRef.__PVT__accept_t_rsp) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__39__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__39__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__39__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__39__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__39__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__39__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__39__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__39__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__39__Vfuncout = __Vfunc_extract_d2h_rsp_intg__39__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__39__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__31__unused_cmd_payload;
    __Vfunc_get_cmd_intg__31__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__31__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__31__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__31__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__31__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__30__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__32__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16685499880127930336ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__31__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__32__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__31__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__31__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__33__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__31__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__31__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__34__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__31__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__31__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__30__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__30__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__30__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__36__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__37__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__36__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__36__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__36__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__36__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__35__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__36__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__35__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__35__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__35__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x01b0U 
                                                    <= 
                                                    (0x000001ffU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 4U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU)))) 
                                                   & (0x01b3U 
                                                      >= 
                                                      (0x000001ffU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 4U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001cU)))))
                                                   ? 0U
                                                   : 
                                                  (((0x01b4U 
                                                     <= 
                                                     (0x000001ffU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 4U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001cU)))) 
                                                    & (0x01b7U 
                                                       >= 
                                                       (0x000001ffU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))
                                                    ? 1U
                                                    : 2U)));
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__VdfgRegularize_h6e95ff9d_0_1270[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__VdfgRegularize_h6e95ff9d_0_1270[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__VdfgRegularize_h6e95ff9d_0_1270[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__VdfgRegularize_h6e95ff9d_0_1270[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [0U][0U]));
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [0U][1U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [1U][0U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [1U][1U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [2U][0U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [2U][1U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
        [3U][0U];
    vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
        [3U][1U];
    vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [0U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [0U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [1U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [1U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [2U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [2U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [2U][2U];
    }
    vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o 
        = ((IData)(vlSelfRef.__PVT__hfifo_reqready) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__accept_t_rsp = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                     & (vlSelfRef.__PVT__tl_t_p[2U] 
                                        >> 1U));
    vlSelfRef.__PVT__accept_t_req = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                     & (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o));
}

void Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
}

void Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__2(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1279 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                << 2U)) 
                                                            | (3U 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1229[0U])))));
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__49__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__49__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__49__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__49__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__49__payload;
    __Vfunc_extract_d2h_rsp_intg__49__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__accept_t_rsp)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSelfRef.__PVT__accept_t_rsp) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__49__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__49__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__49__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__49__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__49__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__49__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__49__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__49__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__49__Vfuncout = __Vfunc_extract_d2h_rsp_intg__49__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__49__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__41__unused_cmd_payload;
    __Vfunc_get_cmd_intg__41__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__41__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__41__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__41__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__41__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__40__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__42__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 57210162188610139ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__41__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__42__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__41__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__41__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__43__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__41__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__41__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__41__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__41__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__40__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__40__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__40__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__46__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__47__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__46__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__46__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__46__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__46__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__45__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__46__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__45__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__45__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__45__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x0400U 
                                                    <= 
                                                    (0x00000fffU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 4U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU)))) 
                                                   & (0x05ffU 
                                                      >= 
                                                      (0x00000fffU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 4U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001cU)))))
                                                   ? 0U
                                                   : 
                                                  ((0x0800U 
                                                    <= 
                                                    (0x00000fffU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 4U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU))))
                                                    ? 1U
                                                    : 2U)));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__VdfgRegularize_h6e95ff9d_0_1280[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__VdfgRegularize_h6e95ff9d_0_1280[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__VdfgRegularize_h6e95ff9d_0_1280[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__VdfgRegularize_h6e95ff9d_0_1280[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__59__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__59__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__59__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__59__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__59__payload;
    __Vfunc_extract_d2h_rsp_intg__59__payload = 0;
    SData/*8:0*/ __Vdly__num_req_outstanding;
    __Vdly__num_req_outstanding = 0;
    // Body
    __Vdly__num_req_outstanding = vlSelfRef.__PVT__num_req_outstanding;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__accept_t_rsp)))) {
                __Vdly__num_req_outstanding = (0x000001ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_req_outstanding)));
            }
            vlSelfRef.__PVT__dev_select_outstanding 
                = vlSelfRef.__PVT__fifo_h__DOT__spare_req_i;
        } else if (vlSelfRef.__PVT__accept_t_rsp) {
            __Vdly__num_req_outstanding = (0x000001ffU 
                                           & ((IData)(vlSelfRef.__PVT__num_req_outstanding) 
                                              - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U])) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((IData)(((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                             >> 0x0000000cU) & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0x000000ffU & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                                   << 4U) | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 9U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
                         >> 4U));
            vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0x0000000fU & (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
                                  >> 0x0000000fU));
        }
    } else {
        __Vdly__num_req_outstanding = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelfRef.__PVT__dev_select_outstanding = 0U;
    }
    vlSelfRef.__PVT__num_req_outstanding = __Vdly__num_req_outstanding;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0xfe00ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                             << 0x00000011U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x01ffffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xfe000000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                << 0x00000019U))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((0x01ffffffU & (((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                      ? 1U : 0U) >> 2U)) 
                    | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                       >> 7U))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout))
                      ? 0U : 0xffffffffU));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    __Vfunc_extract_d2h_rsp_intg__59__tl[0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__59__tl[1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__59__tl[2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__59__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__59__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__59__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__59__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__59__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__59__Vfuncout = __Vfunc_extract_d2h_rsp_intg__59__payload;
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__59__Vfuncout;
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       (((((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x10U 
                                                             & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (8U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (VL_REDXOR_32(
                                                                (4U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x22U 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (VL_REDXOR_32(
                                                                (0x21U 
                                                                 & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     VL_REDXOR_32(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (VL_REDXOR_8(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x98505586U 
                                                                   & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                         >> 0x00000010U)))))))) 
                                         << 8U) | (
                                                   ((((2U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U)))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x413d89aaU 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))))) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                             << 0x00000010U) 
                                                                            | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                               >> 0x00000010U))))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & ((vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                                                               << 0x00000010U) 
                                                                              | (vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                                                >> 0x00000010U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))))));
    vlSelfRef.__PVT__tl_u_i[3U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [3U][0U]) | 
                                       ((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][1U] = (((IData)((0x0003ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                          >> 0x00000010U))))) 
                                        >> 0x00000010U) 
                                       | ((IData)((
                                                   (0x0003ffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                        << 0x00000030U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                           << 0x00000010U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                             >> 0x00000010U)))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[3U][2U] = (3U & ((IData)(
                                                     ((0x0003ffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                                                           << 0x00000030U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                                              << 0x00000010U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                                                >> 0x00000010U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000010U));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__51__unused_cmd_payload;
    __Vfunc_get_cmd_intg__51__unused_cmd_payload = 0;
    // Body
    vlSelfRef.__PVT__blanked_auser = ((0x007fc000U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                                          >> 1U)) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__51__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__51__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__51__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__51__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__50__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__52__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1974989045633911713ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__51__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__52__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__51__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__51__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__51__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__51__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__51__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__51__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__50__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__50__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__50__Vfuncout)) 
                                        << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__56__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__57__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__56__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__56__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__56__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__56__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__55__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__56__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__55__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__55__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__55__Vfuncout))));
    vlSelfRef.__PVT__fifo_h__DOT__spare_req_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.err_o)
                                                  ? 2U
                                                  : 
                                                 (((0x4000U 
                                                    <= 
                                                    (0x0000ffffU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 4U) 
                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001cU)))) 
                                                   & (0x5fffU 
                                                      >= 
                                                      (0x0000ffffU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 4U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001cU)))))
                                                   ? 0U
                                                   : 
                                                  (((0x8000U 
                                                     <= 
                                                     (0x0000ffffU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 4U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001cU)))) 
                                                    & (0x8bffU 
                                                       >= 
                                                       (0x0000ffffU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001cU)))))
                                                    ? 1U
                                                    : 2U)));
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hold_all_requests = ((0U != (IData)(vlSelfRef.__PVT__num_req_outstanding)) 
                                          & ((IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i) 
                                             != (IData)(vlSelfRef.__PVT__dev_select_outstanding)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__VdfgRegularize_h6e95ff9d_0_1277[0U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__VdfgRegularize_h6e95ff9d_0_1277[1U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__VdfgRegularize_h6e95ff9d_0_1277[2U];
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__VdfgRegularize_h6e95ff9d_0_1277[3U]));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U]) 
           | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                              & ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
                                 & (3U <= (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)))) 
                             << 0x0000000cU)));
    vlSelfRef.__PVT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.__PVT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i)));
    vlSelfRef.__PVT__tl_u_o[3U][0U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[0U];
    vlSelfRef.__PVT__tl_u_o[3U][1U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[1U];
    vlSelfRef.__PVT__tl_u_o[3U][2U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[2U];
    vlSelfRef.__PVT__tl_u_o[3U][3U] = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i[3U];
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__3(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [0U][0U]));
    vlSelfRef.__PVT__tl_u_i[0U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [0U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [0U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [0U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [0U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[0U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [0U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [0U][1U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[0U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [0U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [0U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [1U][0U]));
    vlSelfRef.__PVT__tl_u_i[1U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [1U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [1U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [1U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [1U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[1U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [1U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [1U][1U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[1U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [1U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [1U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (0x0000ffffU 
                                        & vlSelfRef.tl_d_i
                                        [2U][0U]));
    vlSelfRef.__PVT__tl_u_i[2U][0U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][0U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) << 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0xffff0000U 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (((1U == (7U 
                                                 & ((vlSelfRef.tl_d_i
                                                     [2U][2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tl_d_i
                                                       [2U][1U] 
                                                       >> 0x0000001eU))))
                                          ? ((vlSelfRef.tl_d_i
                                              [2U][1U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.tl_d_i
                                                [2U][0U] 
                                                >> 0x00000010U))
                                          : 0U) >> 0x00000010U));
    vlSelfRef.__PVT__tl_u_i[2U][1U] = ((0x0000ffffU 
                                        & vlSelfRef.__PVT__tl_u_i
                                        [2U][1U]) | 
                                       (0xffff0000U 
                                        & vlSelfRef.tl_d_i
                                        [2U][1U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((2U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (1U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__tl_u_i[2U][2U] = ((1U & vlSelfRef.__PVT__tl_u_i
                                        [2U][2U]) | 
                                       (2U & vlSelfRef.tl_d_i
                                        [2U][2U]));
    vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                       [3U][0U]);
    if ((0U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__fifo_h__DOT__spare_req_i))) {
        vlSelfRef.__PVT__hfifo_reqready = (1U & vlSelfRef.__PVT__tl_u_i
                                           [2U][0U]);
    }
    if (vlSelfRef.__PVT__hold_all_requests) {
        vlSelfRef.__PVT__hfifo_reqready = 0U;
    }
    vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
        [3U][0U];
    vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
        [3U][1U];
    vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
        [3U][2U];
    if ((0U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [0U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [0U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [1U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [1U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__dev_select_outstanding))) {
        vlSelfRef.__PVT__tl_t_p[0U] = vlSelfRef.__PVT__tl_u_i
            [2U][0U];
        vlSelfRef.__PVT__tl_t_p[1U] = vlSelfRef.__PVT__tl_u_i
            [2U][1U];
        vlSelfRef.__PVT__tl_t_p[2U] = vlSelfRef.__PVT__tl_u_i
            [2U][2U];
    }
    vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o 
        = ((IData)(vlSelfRef.__PVT__hfifo_reqready) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__accept_t_rsp = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                     & (vlSelfRef.__PVT__tl_t_p[2U] 
                                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_423 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__tl_t_p[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__tl_t_p[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__tl_t_p[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__tl_t_p[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__PVT__accept_t_req = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                     & (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_423)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                       | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_423)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.__PVT__tl_t_p[0U]) 
                                                           | (IData)(vlSelfRef.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[1U]) 
           | (0xffff0000U & vlSelfRef.__PVT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[2U] 
        = (1U & vlSelfRef.__PVT__tl_t_p[2U]);
}

void Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__4(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1276 = (
                                                   ((((2U 
                                                       & (VL_REDXOR_32(
                                                                       (0x10U 
                                                                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            VL_REDXOR_32(
                                                                         (8U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                     << 0x0000000eU) 
                                                    | (((2U 
                                                         & (VL_REDXOR_32(
                                                                         (4U 
                                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (0x22U 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000800U 
                                                       & (VL_REDXOR_32(
                                                                       (0x21U 
                                                                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                          << 0x0000000bU)) 
                                                      | ((0x00000400U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x1fU 
                                                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))) 
                                                             << 0x0000000aU)) 
                                                         | ((0x00000200U 
                                                             & (VL_REDXOR_8(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                                << 9U)) 
                                                            | (0x000001ffU 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1230[0U])))));
}

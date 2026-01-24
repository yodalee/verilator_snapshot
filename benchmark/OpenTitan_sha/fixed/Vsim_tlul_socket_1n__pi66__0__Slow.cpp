// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__9__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__9__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__9__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__9__payload;
    __Vfunc_extract_d2h_rsp_intg__9__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket__1\n"); );
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__19__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__19__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__19__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__19__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__19__payload;
    __Vfunc_extract_d2h_rsp_intg__19__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket__1\n"); );
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__29__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__29__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__29__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__29__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__29__payload;
    __Vfunc_extract_d2h_rsp_intg__29__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_socket__1\n"); );
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__39__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__39__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__39__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__39__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__39__payload;
    __Vfunc_extract_d2h_rsp_intg__39__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__49__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__49__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__49__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__49__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__49__payload;
    __Vfunc_extract_d2h_rsp_intg__49__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket__1\n"); );
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__59__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__59__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__59__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__59__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__59__payload;
    __Vfunc_extract_d2h_rsp_intg__59__payload = 0;
    // Body
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((1U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                    << 1U)));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
        = ((0x0000ffffU & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
           | (0xffff0000U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x0000001eU) 
                             | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x00000019U) | 
                                ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                 << 0x00000011U)))));
    vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((2U & vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (3U & ((((4U == (IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                       ? 1U : 0U) >> 2U) | (((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                               >> 0x0000000fU)))));
    VL_ASSIGNSEL_WI(66, 32, 0x00000010U, vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val 
                        = vlSelfRef.__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout))
                      ? 0U : 0xffffffffU));
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__1(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket__1\n"); );
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

VL_ATTR_COLD void Vsim_tlul_socket_1n__pi66___ctor_var_reset(Vsim_tlul_socket_1n__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_tlul_socket_1n__pi66___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h_i, __VscopeHash, 2122476622687747023ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_h_o, __VscopeHash, 6319575076937490387ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_d_o[__Vi0], __VscopeHash, 11368034984740101998ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d_i[__Vi0], __VscopeHash, 13014753160808655041ull);
    }
    vlSelf->dev_select_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9780703115793365750ull);
    vlSelf->__PVT__num_req_outstanding = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8115702185828414756ull);
    vlSelf->__PVT__dev_select_outstanding = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18018042537905053479ull);
    vlSelf->__PVT__hold_all_requests = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10441476944803042646ull);
    vlSelf->__PVT__accept_t_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5816803876228373727ull);
    vlSelf->__PVT__accept_t_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13750820929618853581ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__tl_u_o[__Vi0], __VscopeHash, 12413014628287530225ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__tl_u_i[__Vi0], __VscopeHash, 1288306618369700321ull);
    }
    vlSelf->__PVT__blanked_auser = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10847117081531502884ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__tl_t_p, __VscopeHash, 7967713819449480206ull);
    vlSelf->__PVT__hfifo_reqready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13824809692032171429ull);
    vlSelf->__PVT__gen_u_o__BRA__0__KET____DOT__dev_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17351085587291138688ull);
    vlSelf->__PVT__gen_u_o__BRA__1__KET____DOT__dev_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1833379692233148022ull);
    vlSelf->__PVT__gen_u_o__BRA__2__KET____DOT__dev_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7740758103164271381ull);
    vlSelf->__VdfgRegularize_ha6beb6f7_0_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10704174280240596028ull);
    vlSelf->__PVT__fifo_h__DOT__spare_req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5686582706736466060ull);
    vlSelf->__PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2888383716303077918ull);
    vlSelf->__PVT__fifo_h__DOT__reqfifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8315602235089194102ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i, __VscopeHash, 7410670805776271116ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12594366311631413515ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__err_source = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9914380739189554885ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__err_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11960664806892488989ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13698317617787863876ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8718269137880931199ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, __VscopeHash, 5950059791635092252ull);
    vlSelf->__PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8383869090579499168ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__0__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11941654921827325469ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__0__tl, __VscopeHash, 7233815437794268305ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__0__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 219321670452963223ull);
    vlSelf->__Vfunc_get_cmd_intg__1__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8073538046926336626ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__1__tl, __VscopeHash, 11391921065163913693ull);
    vlSelf->__Vfunc_get_cmd_intg__1__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13827060661307082873ull);
    vlSelf->__Vfunc_get_cmd_intg__1__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 11439725510147071493ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__2__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10380206014790187446ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__2__tl, __VscopeHash, 13198952615130643246ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__2__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 681419010538678306ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__3__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7338716832400520230ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__3__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 16073879504137726542ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__3__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9375731989357271517ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__4__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 454472481186077069ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__4__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 7584643741470812339ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__4__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2350715976266336236ull);
    vlSelf->__Vfunc_get_bad_data_intg__5__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12163209318835948015ull);
    vlSelf->__Vfunc_get_bad_data_intg__5__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16283226265357145555ull);
    vlSelf->__Vfunc_get_data_intg__6__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7455975073027127613ull);
    vlSelf->__Vfunc_get_data_intg__6__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9772533329859842634ull);
    vlSelf->__Vfunc_get_data_intg__6__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 80122292268067337ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__7__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 3499202032937359587ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__7__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 9521540406544162759ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976253508738990664ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3085217849644718442ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__10__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7011625065084978557ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__10__tl, __VscopeHash, 9090682944912169276ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__10__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15331098388721038795ull);
    vlSelf->__Vfunc_get_cmd_intg__11__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6519932560933050889ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__11__tl, __VscopeHash, 3402831362014111203ull);
    vlSelf->__Vfunc_get_cmd_intg__11__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4359048422470784552ull);
    vlSelf->__Vfunc_get_cmd_intg__11__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17726954626777280750ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__12__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 15280984389562336860ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__12__tl, __VscopeHash, 16410560438055771109ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__12__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13807422927167256539ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__13__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1479151132954019278ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__13__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 5141666189003440440ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__13__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11668413038462616631ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__14__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17345398120727476469ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__14__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 8507296900267427813ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__14__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9614442820229618043ull);
    vlSelf->__Vfunc_get_bad_data_intg__15__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17824597081251759796ull);
    vlSelf->__Vfunc_get_bad_data_intg__15__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13192423013155054374ull);
    vlSelf->__Vfunc_get_data_intg__16__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1712814893692389513ull);
    vlSelf->__Vfunc_get_data_intg__16__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5773600811566411192ull);
    vlSelf->__Vfunc_get_data_intg__16__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 7897373478510913250ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__17__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15817765284139123699ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__17__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 17194000677233248467ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__18__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13876649618787868946ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__18__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1999945937542950614ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__20__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3987932780016680988ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__20__tl, __VscopeHash, 772340726050554520ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__20__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10281921544895125924ull);
    vlSelf->__Vfunc_get_cmd_intg__21__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2802857790749441280ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__21__tl, __VscopeHash, 6298108898947937090ull);
    vlSelf->__Vfunc_get_cmd_intg__21__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11462200663242531048ull);
    vlSelf->__Vfunc_get_cmd_intg__21__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10511243389794346384ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__22__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 3897021673477653638ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__22__tl, __VscopeHash, 12787169433863714136ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__22__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16219395093222571548ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__23__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14864068446468862987ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__23__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 17287915181391150841ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__23__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18383292911469187610ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__24__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11845678860027196821ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__24__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 13207158002726694145ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__24__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5126717804592450253ull);
    vlSelf->__Vfunc_get_bad_data_intg__25__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2777961832931190643ull);
    vlSelf->__Vfunc_get_bad_data_intg__25__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15957909028965259199ull);
    vlSelf->__Vfunc_get_data_intg__26__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5513330751216952265ull);
    vlSelf->__Vfunc_get_data_intg__26__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8454497257376308073ull);
    vlSelf->__Vfunc_get_data_intg__26__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 17692787370546868738ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__27__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 9635611661639999487ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__27__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 7626561629010928175ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__28__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6276631325249736779ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__28__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4780215640931438013ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__30__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10398951125570332005ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__30__tl, __VscopeHash, 5446981391758872552ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__30__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10318271157270399462ull);
    vlSelf->__Vfunc_get_cmd_intg__31__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4688262515699830669ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__31__tl, __VscopeHash, 928385535189115227ull);
    vlSelf->__Vfunc_get_cmd_intg__31__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16725698164714386670ull);
    vlSelf->__Vfunc_get_cmd_intg__31__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 17307976711086806773ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__32__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 4990570124321177297ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__32__tl, __VscopeHash, 11196582706798429897ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__32__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16685499880127930336ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__33__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16224262671922351102ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__33__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 13168736927331192783ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__33__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17639592948835667312ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__34__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 798914175271582297ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__34__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 1863497198849967663ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__34__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8312757361486952470ull);
    vlSelf->__Vfunc_get_bad_data_intg__35__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10641525747608246817ull);
    vlSelf->__Vfunc_get_bad_data_intg__35__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10456378332979322691ull);
    vlSelf->__Vfunc_get_data_intg__36__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14983050413906756161ull);
    vlSelf->__Vfunc_get_data_intg__36__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6154152318348864986ull);
    vlSelf->__Vfunc_get_data_intg__36__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 5483673247708283248ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__37__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 8092503599355316487ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__37__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 10401990747814646234ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__38__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117187784091672030ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__38__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3130745059004056713ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__40__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8085568511038869823ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__40__tl, __VscopeHash, 11171060174841734359ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__40__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1011823245017308822ull);
    vlSelf->__Vfunc_get_cmd_intg__41__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10406410489982012824ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__41__tl, __VscopeHash, 2407061864261787031ull);
    vlSelf->__Vfunc_get_cmd_intg__41__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16360765083286898514ull);
    vlSelf->__Vfunc_get_cmd_intg__41__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 13156140299467173735ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__42__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 9050113596324321036ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__42__tl, __VscopeHash, 17255884736851283583ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__42__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 57210162188610139ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__43__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2666073942390291073ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__43__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 2408256051045981577ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__43__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 333548990322852484ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9485204116493419118ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__44__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 11909784441082240822ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__44__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9275912699249849144ull);
    vlSelf->__Vfunc_get_bad_data_intg__45__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14020189966949602886ull);
    vlSelf->__Vfunc_get_bad_data_intg__45__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17594090629214627503ull);
    vlSelf->__Vfunc_get_data_intg__46__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6683356109690165965ull);
    vlSelf->__Vfunc_get_data_intg__46__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5623583128733158691ull);
    vlSelf->__Vfunc_get_data_intg__46__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 2002633906915814419ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__47__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15039914447597104038ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__47__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 10984469176930424735ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__48__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 383290510234207602ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__48__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17740836336927475150ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__50__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12891269800845310002ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__50__tl, __VscopeHash, 8662252487544664831ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__50__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17249654779250637431ull);
    vlSelf->__Vfunc_get_cmd_intg__51__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16122044524027226080ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__51__tl, __VscopeHash, 14107190424260462436ull);
    vlSelf->__Vfunc_get_cmd_intg__51__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6103239890382620588ull);
    vlSelf->__Vfunc_get_cmd_intg__51__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12734360046352680867ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__52__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10680511754507365484ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__52__tl, __VscopeHash, 2790605197236282784ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__52__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1974989045633911713ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2976715849912954721ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__53__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 14342025435188129285ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__53__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9495969404310850282ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14085192219976593023ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__54__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 2810231451907031862ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__54__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13756708144359394991ull);
    vlSelf->__Vfunc_get_bad_data_intg__55__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12216741263106273589ull);
    vlSelf->__Vfunc_get_bad_data_intg__55__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16757330011082285398ull);
    vlSelf->__Vfunc_get_data_intg__56__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17444921855485178679ull);
    vlSelf->__Vfunc_get_data_intg__56__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1947893299533139072ull);
    vlSelf->__Vfunc_get_data_intg__56__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 8476860621696617685ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__57__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 2107359806361501271ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__57__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 13038345305047861663ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__58__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514521567790659983ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__58__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7091445556607751521ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_420 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16955149411596127981ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_423 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12915332696633403963ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1141 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 483526352319043561ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1217, __VscopeHash, 11517676232752612995ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1226, __VscopeHash, 12713367787210380486ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1229, __VscopeHash, 18263546634258291586ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1230, __VscopeHash, 3009436441120027674ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1269 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18436337373291836612ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1276 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8902909358722277589ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1279 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13113790423110874871ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1363, __VscopeHash, 17045310443060078909ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1388, __VscopeHash, 3331713337387549178ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1389, __VscopeHash, 6881642828805568229ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                         << 2U) 
                                                        | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                           >> 0x0000001eU))))
                                                    ? 
                                                   ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                       >> 0x00000010U))
                                                    : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_501 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_503 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_504 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_505 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_506 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    }
    if (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
            = vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 = ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU))))
                                                   ? 
                                                  ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000010U))
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 = (((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[2U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000019U))))) 
                                                 << 0x00000037U) 
                                                | (((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                                                                        >> 0x00000012U)))) 
                                                    << 0x0000002fU) 
                                                   | (0x00007fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U])) 
                                                          << 0x0000001eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U])) 
                                                            >> 2U)))));
}

VL_ATTR_COLD void Vsim_tlul_socket_m1__pi53___ctor_var_reset(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h_i[__Vi0], __VscopeHash, 2122476622687747023ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_h_o[__Vi0], __VscopeHash, 6319575076937490387ull);
    }
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_d_o, __VscopeHash, 11368034984740101998ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d_i, __VscopeHash, 13014753160808655041ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__hreq_fifo_o[__Vi0], __VscopeHash, 2846214923403807190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__hrsp_fifo_i[__Vi0], __VscopeHash, 7427737661285130173ull);
    }
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o, __VscopeHash, 4491437488457671166ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[__Vi0], __VscopeHash, 13130773719414280315ull);
    }
    vlSelf->__VdfgRegularize_hc7c2fcdb_0_2 = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 7065596738063815087ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o, __VscopeHash, 8555165453033496602ull);
    vlSelf->__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13125811460904487595ull);
    vlSelf->__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10258574948347149070ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage, __VscopeHash, 6543824275301144627ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o, __VscopeHash, 2333787502815419606ull);
    vlSelf->__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2638660485122605773ull);
    vlSelf->__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535993153966757109ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage, __VscopeHash, 18203978308444858019ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16887577979642906165ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[__Vi0], __VscopeHash, 15140659251767772230ull);
    }
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7134186693965182155ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13872883241865370560ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8087007497370320917ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3625424698775606877ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3193686072538656447ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16028971062806210447ull);
    vlSelf->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7252647819987285801ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_499 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3735298879068536488ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_500 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2499120450303133466ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_501 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7239291436221270679ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_502 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9069034425622657891ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_503 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7389249931798100311ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_504 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1500722276423763103ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_505 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12066103654610884661ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_506 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9588958674648163318ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_507 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6372201860662263286ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_508 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14546967301508067695ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_509 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11551697660609288244ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_510 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9103481532639478498ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_511 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2756406721568313872ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_512 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1961885270539062923ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1270, __VscopeHash, 8059368120298140032ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1277, __VscopeHash, 8714834574410603706ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1280, __VscopeHash, 15049471573059936382ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1396, __VscopeHash, 15945974400017307279ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1397, __VscopeHash, 12428384960297215207ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1398, __VscopeHash, 6896494710256950981ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1399, __VscopeHash, 8591628561489313594ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1400, __VscopeHash, 3057650520768419916ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1401, __VscopeHash, 4833888527198454124ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1402, __VscopeHash, 9085581597346249877ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1403, __VscopeHash, 4736311611915686666ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1404, __VscopeHash, 14172438902122358010ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1405, __VscopeHash, 5379292739253038631ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1406, __VscopeHash, 1911063650254306828ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1407, __VscopeHash, 6002430241860081123ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1408, __VscopeHash, 14161598658463111176ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1409, __VscopeHash, 8316476709428875352ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1410, __VscopeHash, 11094179145371947666ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1411, __VscopeHash, 1953362404168491949ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1412, __VscopeHash, 3046690254461904629ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1413, __VscopeHash, 15714786119070529810ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1414, __VscopeHash, 7098593953569858301ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1415, __VscopeHash, 14098687138087752260ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1416, __VscopeHash, 5685219906247046228ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1417, __VscopeHash, 6547148944058675ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1418, __VscopeHash, 1636700619413096473ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1419, __VscopeHash, 11776959190588328003ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1420, __VscopeHash, 10212656223455620959ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1421, __VscopeHash, 12387241577849117833ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1422, __VscopeHash, 10133279141369611447ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1423, __VscopeHash, 17742979404844019445ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1739 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1416351132656547486ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1742, __VscopeHash, 13569861522431631532ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1743, __VscopeHash, 7988337152200847236ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1753 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15969323668478165803ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1756 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15867145786016222249ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1762, __VscopeHash, 3591879074472229948ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1763, __VscopeHash, 15065251046565047242ull);
}

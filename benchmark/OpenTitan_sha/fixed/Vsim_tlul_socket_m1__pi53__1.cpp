// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1275))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1275))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1172[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1172[2U]);
    }
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_507 = ((1U 
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o)));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = 0U;
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
            = vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                  >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1276)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_423
                    : 0U) << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_423
                    : 0U) >> 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U]);
    }
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 = ((1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1277[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1277[1U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1277[2U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1277[3U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
           | (0x00000ffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? 0U : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1414[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1415[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_508 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__2(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_52__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))
                  : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i))));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_389;
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = 0U;
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
            = vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1278))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1278))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1174[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1174[2U]);
    }
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__1\n"); );
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
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__2(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? 0U : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1416[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1417[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_509 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__3(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_389)
            : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? 0U : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1418[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_510 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_510 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1419[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_510 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_510 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))
                  : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i))));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                  >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1279)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) >> 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_socket.__PVT__tl_t_p[2U]);
    }
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_54__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_510 = ((1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1280[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1280[1U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1280[2U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1280[3U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
           | (0x00000ffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__outstanding_q)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__outstanding_q;
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = 0U;
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
            = vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1420[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1421[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_511 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
    if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                              << 1U)) | (1U & (~ VL_REDXOR_32(
                                                              (8U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                      << 6U) | (((2U & (VL_REDXOR_32(
                                                     (4U 
                                                      & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      VL_REDXOR_32(
                                                                   (0x22U 
                                                                    & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                << 4U)) | ((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x21U 
                                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (0x1fU 
                                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 2U) 
                                           | ((2U & 
                                               (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x98505586U 
                                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q)))))) 
                   << 8U) | (((((2U & ((~ VL_REDXOR_32(
                                                       (0x2dcc624cU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xc2c1323bU 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q)))) 
                               << 6U) | (((2U & ((~ 
                                                  VL_REDXOR_32(
                                                               (0x31234ed1U 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q))) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x413d89aaU 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q)))) 
                                         << 4U)) | 
                             ((((2U & ((~ VL_REDXOR_32(
                                                       (0xdeba8050U 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x2606bd25U 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q)))) 
                               << 2U) | (2U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_hd3d4c31d_1_1))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | ((IData)((((QData)((IData)((0x0001ffffU 
                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
                                                 << 0x00000010U) 
                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
                                                   >> 0x00000010U))))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                                                ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                                                : 0U))))) 
                  << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = (((IData)((((QData)((IData)((0x0001ffffU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
                                                 >> 0x00000010U))))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                                              ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                                              : 0U))))) 
                >> 0x00000010U) | ((IData)(((((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
                                                                   << 0x00000010U) 
                                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
                                                                     >> 0x00000010U))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                                                 : 0U)))) 
                                            >> 0x00000020U)) 
                                   << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & ((IData)(((((QData)((IData)((0x0001ffffU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[2U] 
                                                     << 0x00000010U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__VdfgRegularize_h6e95ff9d_0_1395[1U] 
                                                       >> 0x00000010U))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rspop_q))
                                                                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_reg_if__DOT__rdata_q
                                                                    : 0U)))) 
                              >> 0x00000020U)) >> 0x00000010U));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ ((vlSelfRef.tl_h_i[1U][0U] & 
                         ((vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[1U] 
                           >> 0x00000011U) & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))) 
                        | (vlSelfRef.tl_h_i[0U][0U] 
                           & (IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i))))
                  : (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][0U] = vlSelfRef.tl_h_i
        [0U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][1U] = vlSelfRef.tl_h_i
        [0U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0xe0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [0U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[0U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [0U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [0U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[0U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [0U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [0U][3U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][0U] = vlSelfRef.tl_h_i
        [1U][0U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][1U] = vlSelfRef.tl_h_i
        [1U][1U];
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0xf0000000U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0x0fffffffU 
                                               & vlSelfRef.tl_h_i
                                               [1U][2U]));
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = (0x10000000U 
                                            | vlSelfRef.__PVT__hreq_fifo_o
                                            [1U][2U]);
    vlSelfRef.__PVT__hreq_fifo_o[1U][2U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][2U]) 
                                            | (0xe0000000U 
                                               & (vlSelfRef.tl_h_i
                                                  [1U][2U] 
                                                  << 1U)));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x00001ff0U 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x0000000fU 
                                               & ((0x1ffffffeU 
                                                   & (vlSelfRef.tl_h_i
                                                      [1U][3U] 
                                                      << 1U)) 
                                                  | (vlSelfRef.tl_h_i
                                                     [1U][2U] 
                                                     >> 0x0000001fU))));
    vlSelfRef.__PVT__hreq_fifo_o[1U][3U] = ((0x0000000fU 
                                             & vlSelfRef.__PVT__hreq_fifo_o
                                             [1U][3U]) 
                                            | (0x00001ff0U 
                                               & vlSelfRef.tl_h_i
                                               [1U][3U]));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = ((2U & (vlSelfRef.tl_h_i[1U][3U] >> 0x0000000bU)) 
           | (1U & (vlSelfRef.tl_h_i[0U][3U] >> 0x0000000cU)));
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[0U][3U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][0U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][1U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][2U];
    vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.__PVT__hreq_fifo_o[1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (3U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    if (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wready_o)));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = 0U;
    } else {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
            = vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    }
    vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    } else {
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[1U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            >> 0x0000001fU) | ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                                       >> 1U))))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1422[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[0U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [0U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1423[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 
                                              >> 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][1U]) | ((IData)(
                                                      (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                       >> 0x0000002eU)) 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][2U] = ((2U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (1U & 
                                              ((IData)(
                                                       (vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                                                        >> 0x0000002eU)) 
                                               >> 0x00000010U)));
    vlSelfRef.tl_h_o[1U][2U] = ((1U & vlSelfRef.tl_h_o
                                 [1U][2U]) | (3U & 
                                              ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                               << 1U)));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[2U] 
                  >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (0x0000fffeU & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1281)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((1U == (7U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (((1U == (7U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) >> 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__tl_t_p[2U]);
    }
    if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
               | (0xfffffffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = ((1U & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
               | (0x00000ffeU & vlSelfRef.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_512 = ((1U 
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

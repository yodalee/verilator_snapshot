// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1396[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1397[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_499 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0\n"); );
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
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1268))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1268))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1177[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1177[2U]);
    }
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
             & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
            vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U));
        } else if (((0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
                    & (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q))) {
            vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        }
    } else {
        vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0\n"); );
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
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1741))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1741))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1740[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1740[2U]);
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__1\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1742[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1743[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1739 
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__2(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34__2\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q)));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_reg_if__DOT__outstanding_q)
            : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1398[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1399[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 
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

void Vsim_tlul_socket_m1__pi53___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0\n"); );
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
                  : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__fifo_h__DOT__reqfifo__DOT__wready_o))
                  : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i))));
}

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)(((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[2U] 
                  >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1269)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_420
                    : 0U) << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (((1U == (7U & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_420
                    : 0U) >> 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_socket.__PVT__tl_t_p[2U]);
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_43__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_500 = ((1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1270[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
           | (1U & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1270[1U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1270[2U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
           | (0xfffffffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1270[3U] 
        = ((1U & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
           | (0x00000ffeU & vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1400[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_501 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_501 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1401[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_501 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_501 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0\n"); );
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
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1271))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1271))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1171[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1171[2U]);
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_44__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_388;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1272))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1272))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1173[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1173[2U]);
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 = ((1U 
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__1\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1402[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1403[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_502 
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__2(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__2\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__3(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_388)
            : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1404[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_503 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_503 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1405[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_503 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_503 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0\n"); );
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
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1273))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1273))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1176[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1176[2U]);
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1406[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_504 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_504 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1407[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_504 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_504 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0\n"); );
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
    if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = (IData)((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                          ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                          : 0U))) << 0x00000010U) 
                       | (QData)((IData)((0x0000fffeU 
                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1274))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (IData)(((((QData)((IData)(((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                              ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                              : 0U))) 
                            << 0x00000010U) | (QData)((IData)(
                                                              (0x0000fffeU 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1274))))) 
                          >> 0x00000020U)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1175[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1175[2U]);
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0\n"); );
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
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1408[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_505 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_505 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1409[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_505 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_505 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0\n"); );
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
    if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                              << 1U)) | (1U & (~ VL_REDXOR_32(
                                                              (8U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                      << 6U) | (((2U & (VL_REDXOR_32(
                                                     (4U 
                                                      & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      VL_REDXOR_32(
                                                                   (0x22U 
                                                                    & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                << 4U)) | ((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x21U 
                                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (0x1fU 
                                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 2U) 
                                           | ((2U & 
                                               (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x98505586U 
                                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                   << 8U) | (((((2U & ((~ VL_REDXOR_32(
                                                       (0x2dcc624cU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xc2c1323bU 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                               << 6U) | (((2U & ((~ 
                                                  VL_REDXOR_32(
                                                               (0x31234ed1U 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x413d89aaU 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                         << 4U)) | 
                             ((((2U & ((~ VL_REDXOR_32(
                                                       (0xdeba8050U 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x2606bd25U 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                               << 2U) | (2U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h4a41a239_1_3))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | ((IData)((((QData)((IData)((0x0001ffffU 
                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[2U] 
                                                 << 0x00000010U) 
                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
                                                   >> 0x00000010U))))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                : 0U))))) 
                  << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = (((IData)((((QData)((IData)((0x0001ffffU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[2U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
                                                 >> 0x00000010U))))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                              ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                              : 0U))))) 
                >> 0x00000010U) | ((IData)(((((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[2U] 
                                                                   << 0x00000010U) 
                                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
                                                                     >> 0x00000010U))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                 : 0U)))) 
                                            >> 0x00000020U)) 
                                   << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & ((IData)(((((QData)((IData)((0x0001ffffU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[2U] 
                                                     << 0x00000010U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__VdfgRegularize_h6e95ff9d_0_1390[1U] 
                                                       >> 0x00000010U))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                    : 0U)))) 
                              >> 0x00000020U)) >> 0x00000010U));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0\n"); );
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
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1410[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_506 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_506 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1411[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_506 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_506 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0\n"); );
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
    if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
         & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((((((2U & (VL_REDXOR_32((0x10U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                              << 1U)) | (1U & (~ VL_REDXOR_32(
                                                              (8U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                      << 6U) | (((2U & (VL_REDXOR_32(
                                                     (4U 
                                                      & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      VL_REDXOR_32(
                                                                   (0x22U 
                                                                    & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                << 4U)) | ((((2U & 
                                              (VL_REDXOR_32(
                                                            (0x21U 
                                                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   VL_REDXOR_32(
                                                                (0x1fU 
                                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                            << 2U) 
                                           | ((2U & 
                                               (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x98505586U 
                                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                   << 8U) | (((((2U & ((~ VL_REDXOR_32(
                                                       (0x2dcc624cU 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xc2c1323bU 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                               << 6U) | (((2U & ((~ 
                                                  VL_REDXOR_32(
                                                               (0x31234ed1U 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x413d89aaU 
                                                                & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                         << 4U)) | 
                             ((((2U & ((~ VL_REDXOR_32(
                                                       (0xdeba8050U 
                                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x2606bd25U 
                                                                  & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                               << 2U) | (2U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h4a41a239_1_3))))));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | ((IData)((((QData)((IData)((0x0001ffffU 
                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[2U] 
                                                 << 0x00000010U) 
                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
                                                   >> 0x00000010U))))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                : 0U))))) 
                  << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = (((IData)((((QData)((IData)((0x0001ffffU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[2U] 
                                               << 0x00000010U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
                                                 >> 0x00000010U))))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                              ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                              : 0U))))) 
                >> 0x00000010U) | ((IData)(((((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[2U] 
                                                                   << 0x00000010U) 
                                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
                                                                     >> 0x00000010U))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                 ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                 : 0U)))) 
                                            >> 0x00000020U)) 
                                   << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & ((IData)(((((QData)((IData)((0x0001ffffU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[2U] 
                                                     << 0x00000010U) 
                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__VdfgRegularize_h6e95ff9d_0_1391[1U] 
                                                       >> 0x00000010U))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                                    ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                                    : 0U)))) 
                              >> 0x00000020U)) >> 0x00000010U));
    }
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49__0\n"); );
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

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0\n"); );
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
                  : (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
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
            = (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wready_o)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
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

void Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                  >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))))) {
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (0x0000fffeU & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1761)));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
               | (((1U == (7U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) << 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0xffff0000U & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (((1U == (7U & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                  << 2U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                            >> 0x0000001eU))))
                    ? vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                    : 0U) >> 0x00000010U));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((0x0000ffffU & vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U]) 
               | (0xffff0000U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U]));
        vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U]);
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 = (
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__1(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1753 = (0x007fffffU 
                                                   & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                       ? 
                                                      ((vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                        << 0x0000001fU) 
                                                       | (vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                          >> 1U))
                                                       : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__blanked_auser));
}

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__2(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__2\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1762[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1763[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1756 
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

void Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__3(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50__3\n"); );
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
                  : (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                     >> 1U)));
    vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.__PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__reqfifo__DOT__wready_o))
                  : (0U != (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i))));
}

void Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0(Vsim_tlul_socket_m1__pi53* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_tlul_socket_m1__pi53___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51__0\n"); );
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
                  : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
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
            = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[0U] 
        = (((IData)(((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U)))))) 
            << 1U) | (1U & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[1U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[2U] 
        = ((IData)((((vlSelfRef.__VdfgRegularize_hc7c2fcdb_0_2 
                      << 1U) | (QData)((IData)((1U 
                                                & (vlSelfRef.__PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o[0U] 
                                                   >> 1U))))) 
                    >> 0x00000020U)) >> 0x0000001fU);
    vlSelfRef.__PVT__hrsp_fifo_i[0U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[0U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [0U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[0U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1412[0U]) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.tl_h_o[0U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_507 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[0U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_507 
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
    vlSelfRef.__PVT__hrsp_fifo_i[1U][0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[0U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[1U];
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((2U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[2U]));
    vlSelfRef.__PVT__hrsp_fifo_i[1U][2U] = ((1U & vlSelfRef.__PVT__hrsp_fifo_i
                                             [1U][2U]) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->__PVT__rspfifo__DOT__wvalid_i) 
                                                << 1U)));
    vlSelfRef.tl_h_o[1U][0U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][0U]) | ((0x0000fffeU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1413[0U]) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                                    >> 1U))));
    vlSelfRef.tl_h_o[1U][0U] = ((0x0000ffffU & vlSelfRef.tl_h_o
                                 [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_507 
                                              << 0x00000010U));
    vlSelfRef.tl_h_o[1U][1U] = ((0xffff0000U & vlSelfRef.tl_h_o
                                 [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_507 
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

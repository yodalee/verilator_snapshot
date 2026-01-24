// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__308(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__308\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__322__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__322__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__322__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__322__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__322__payload;
    __Vfunc_extract_d2h_rsp_intg__322__payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1152[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1152[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
            [0U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1152[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1689)) 
                         | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][0U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_250))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_data
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][1U]) | (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_250))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_data
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1152[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1152[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
        = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
           [2U][0U]);
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [0U][0U]);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [1U][0U]);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [2U][2U];
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][2U];
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][2U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_incr_wptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o)) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i 
        = ((1U == (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                          << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                                    >> 0x0000001eU))))
            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
                << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
                                   >> 0x00000010U))
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rready_i));
    vlSelfRef.__VdfgRegularize_he50b618e_0_892[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                    << 0x00000010U) | (QData)((IData)(
                                                      ((0x0000fffeU 
                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rready_i))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_892[1U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_he50b618e_0_892[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((0x0000fffeU 
                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rready_i))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_892[1U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_892[1U]) 
           | (0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_892[2U] 
        = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_892[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_892[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U]) 
           | vlSelfRef.__VdfgRegularize_he50b618e_0_892[2U]);
    __Vfunc_extract_d2h_rsp_intg__322__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__322__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__322__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__322__payload = ((0x00000038U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__322__tl[2U] 
                                                       << 5U) 
                                                      | (0x00000018U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__322__tl[1U] 
                                                            >> 0x0000001bU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__322__tl[1U] 
                                                         >> 0x00000018U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__322__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__322__Vfuncout = __Vfunc_extract_d2h_rsp_intg__322__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__322__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__309(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__309\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_usb)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
}

void Vsim___024root___nba_comb__TOP__310(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__310\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_io 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

void Vsim___024root___nba_comb__TOP__311(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__311\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d 
        = (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_set)
                           ? ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__cmdinfo_addr_mode))
                               ? 0x1fU : 0x17U) : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q))
                                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q)
                                                    : 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q) 
                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 0U;
    if ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 1U;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 1U;
            }
        }
    }
}

void Vsim___024root___nba_comb__TOP__312(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__312\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[4U] = 0U;
    if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)) 
         || (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)))) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                    || (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        }
        if ((1U & (~ VL_ONEHOT_I(((((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                    << 5U) | (((8U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                               << 4U) 
                                              | ((2U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                                 << 3U))) 
                                  | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                      << 2U) | (((1U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))))))))) {
            if ((0U != ((((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                          << 5U) | (((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                     << 4U) | ((2U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                               << 3U))) 
                        | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                            << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                       << 1U) | (0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:932: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device: unique case, but multiple matches found for '10'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 10,(IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_device.sv", 932, "");
                }
            }
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)) 
                               << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))))))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____VdfgExtracted_h0826671a__0) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:930: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_device.sv", 930, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q;
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (0x000000fcU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i) 
                                         << 2U)));
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (0x000000feU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i) 
                                         << 1U)));
    } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i));
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((IData)(1U) + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__next_byte = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q;
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent
                [3U]) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__next_byte = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q)))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent
                [3U]) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__cc_count) 
             == (0x000000ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec 
                                        >> 0x00000020U))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d = 2U;
        }
    } else if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d 
            = ((0U != (0x000000ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec 
                                              >> 0x00000020U))))
                ? 1U : 2U);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d 
        = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd = 0U;
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid) 
                              << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd)) 
               | (2U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                          ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                              ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                              : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                          : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                              ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                 >> 7U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                           >> 7U))) 
                        << 1U)));
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = ((0x0cU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd)) 
               | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                         ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                             ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                             : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                         : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                             ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                >> 6U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                          >> 6U)))));
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                               ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                               : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                                   ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                      >> 4U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                                >> 4U))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & 0U);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__flip 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            >> 0x0000000aU) == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__next_buffer_addr);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_cross 
        = (((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d) 
            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_read_threshold__q)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_read_threshold__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__mailbox_hit_i 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d) 
           == (0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_mailbox_addr__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__addr_sel)
            ? (((IData)(1U) + (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
                               >> 2U)) << 2U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_read_pipeline_sel_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_stg2;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_stg2_q;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 0U;
        if (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_start) 
               & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))) 
              & (4U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) 
             & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_mailbox_en__q) 
                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__mailbox_hit_i))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_l2m[1U] 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_req)) 
            << 0x0000002fU) | ((QData)((IData)(((4U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))
                                                 ? 
                                                (0x00000300U 
                                                 | (0x0000003fU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                       >> 2U)))
                                                 : 
                                                (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_mailbox_en__q) 
                                                  & ((0xfffffc00U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address) 
                                                     == 
                                                     (0xfffffc00U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_mailbox_addr__q)))
                                                  ? 
                                                 (0x00000200U 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                        >> 2U)))
                                                  : 
                                                 (0x000001ffU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                     >> 2U)))))) 
                               << 0x00000024U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 0U;
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_cross))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_crossed) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__flip) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 1U;
        }
    }
}

void Vsim___024root___nba_comb__TOP__313(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__313\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q;
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 0U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT____VdfgExtracted_h15473a35__0) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT____VdfgExtracted_h484f66f7__0) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 8U;
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT____VdfgExtracted_h484f66f7__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 8U;
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_sent) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type) 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 5U;
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 4U;
                } else if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_sent) 
                    & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type) 
                        & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_rdfifo_ready.q_o)) 
                       | (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type)) 
                           & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_wrfifo_busy))) 
                          & (~ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdepth_o))))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if (((0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt)) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d 
                = ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_tpm_reg_q)) 
                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_cfg) 
                             >> 3U))) ? 2U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg)
                                               ? 3U
                                               : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_cfg))
                                                   ? 7U
                                                   : 2U)));
        }
        if (((0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt)) 
             & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d 
                = ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_wrfifo_busy)) 
                          & (~ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdepth_o)))))
                    ? 3U : 2U);
        }
    } else if ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_tpm_cfg_en__q)
                ? 1U : 8U);
    }
}

void Vsim___024root___nba_comb__TOP__314(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__314\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i)))));
}

void Vsim___024root___nba_comb__TOP__315(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__315\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT____Vcellinp__u_cg__test_en_i));
    }
}

void Vsim___024root___nba_comb__TOP__316(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__316\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT____Vcellinp__u_core__test_en_i));
    }
}

void Vsim___024root___nba_comb__TOP__317(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__317\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_reqs 
        = ((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__pwrb_det_pulse) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__ac_present_det_pulse) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__lid_open_det_pulse))) 
                << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_interrupt_3__q) 
                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__combo_det_pulse)) 
                           << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_interrupt_2__q) 
                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__combo_det_pulse)) 
                                     << 2U))) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_interrupt_1__q) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__combo_det_pulse)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_interrupt_0__q) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__combo_det_pulse)))) 
             << 0x0000000eU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                   << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                                << 2U))) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o))) 
                                << 9U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                    << 2U))) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o)))));
}

void Vsim___024root___nba_comb__TOP__318(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__318\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__cnt_en 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni)) 
           & (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__rst_filter_n)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__rst_filter_n)) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__cnt_en) 
               & (0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__cnt))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__rst_nq)));
}

void Vsim___024root___nba_comb__TOP__319(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__319\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__reset_valid 
        = (1U & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__reset_cause_q))
                  ? ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__u_rst_sync.rst_ni) 
                         | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__u_rst_sync.rst_ni))) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_control_main_pd_n__q))
                  : ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__reset_cause_q)) 
                     & ((3U == (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT__rst_no)) 
                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__rst_lc_req_q)) 
                                | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__rst_lc_req_q)) 
                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT__rst_no)))) 
                        & (3U == (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_sys_src__DOT__rst_no)) 
                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__rst_sys_req_q)) 
                                  | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__rst_sys_req_q)) 
                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_sys_src__DOT__rst_no))))))));
}

void Vsim___024root___nba_comb__TOP__320(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__320\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div4_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div4_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_clk_io_div4_peri_cg__test_en_i));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_clk_io_div4_peri_cg__clk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div4_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int));
}

void Vsim___024root___nba_comb__TOP__321(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__321\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__scanmode)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__scanmode)) 
                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i)))));
}

void Vsim___024root___nba_sequent__TOP__228(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__228\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_io_status_chg__DOT__g_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__viob_pok_int)) 
            << 1U) | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__vioa_pok_int)));
}

void Vsim___024root___nba_comb__TOP__323(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__323\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_14__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_376 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 0x0000000eU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_377 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 0x0000000eU));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_376 
            = (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sck_o));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_377 
            = (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sck_en_o));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_382 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_15__q)
                  ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 0x0000000fU) : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sck_en_o)));
}

void Vsim___024root___nba_comb__TOP__324(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__324\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_381 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_15__q)
                  ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 0x0000000fU) : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_csb_o)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_5__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_332 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 5U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_331 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 5U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_332 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_en_o) 
                     >> 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_331 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_o) 
                     >> 3U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_4__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_327 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 4U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_326 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 4U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_327 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_en_o) 
                     >> 2U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_326 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_o) 
                     >> 2U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_3__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_322 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_321 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 3U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_322 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_en_o) 
                     >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_321 
            = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_o) 
                     >> 1U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_2__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_317 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 2U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_316 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 2U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_317 
            = (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_en_o));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_316 
            = (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.cio_sd_o));
    }
}

void Vsim___024root___nba_comb__TOP__327(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__327\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001aU)));
}

void Vsim___024root___nba_comb__TOP__328(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__328\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_health_state__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_health_state__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_health_state__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_health_state__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_health_state__DOT__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001bU)));
}

void Vsim___024root___nba_comb__TOP__329(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__329\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_940 = ((
                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wdog_timer_bark__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wkup_timer_expired__q) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i) 
                                                       | (3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_test_wdog_timer_bark__DOT__we))))))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i 
                                                         << 2U)) 
                                                     | (((3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_test_wdog_timer_bark__DOT__we))))) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_cause__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__hw2reg_intr_state_d_o 
        = (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__g_intr_event__DOT__new_event) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_940) 
                    >> 5U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q 
            << 7U) | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_940));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q 
            >> 0x00000019U) | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q)))) 
                               << 7U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q)))) 
            >> 0x00000019U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q))) 
                                        >> 0x00000020U)) 
                               << 7U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U] 
        = ((0xffffff80U & vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q))) 
                       >> 0x00000020U)) >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U] 
        = ((0x0000007fU & vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q)))) 
               << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_pause_in_sleep__q) 
                          << 8U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_enable__q) 
                                    << 7U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[4U] 
        = (((0x0000007fU & ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q)))) 
                            >> 0x00000017U)) | ((0x0000007fU 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_pause_in_sleep__q) 
                                                    >> 0x00000018U)) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_ctrl_enable__q) 
                                                   >> 0x00000019U))) 
           | ((0x00000180U & ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q)))) 
                              >> 0x00000017U)) | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q))) 
                                                           >> 0x00000020U)) 
                                                  << 9U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_941[5U] 
        = (0x000001ffU & ((0x0000007fU & ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000017U)) 
                          | (0x00000180U & ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000017U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wkup_timer_expired__DOT__wr_data 
        = (1U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wdog_timer_bark__DOT__we))) 
                 & ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__g_intr_event__DOT__new_event))
                     ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__hw2reg_intr_state_d_o)
                     : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wkup_timer_expired__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wdog_timer_bark__DOT__wr_data 
        = (1U & ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i 
                      >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_intr_state_wdog_timer_bark__DOT__we))) 
                 & ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__g_intr_event__DOT__new_event))
                     ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_intr_hw__DOT__hw2reg_intr_state_d_o) 
                        >> 1U) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_intr_state_wdog_timer_bark__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_we_o)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__src_q
            : (IData)(((1ULL + (((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_941[5U])) 
                                 << 0x00000037U) | 
                                (((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_941[4U])) 
                                  << 0x00000017U) | 
                                 ((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U])) 
                                  >> 9U)))) >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_we_o)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__src_q
            : ((IData)(1U) + ((vlSelfRef.__VdfgRegularize_he50b618e_0_941[4U] 
                               << 0x00000017U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U] 
                                                  >> 9U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_941[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_941[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_941[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_941[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[5U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_hi__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_lo__q)))) 
            << 9U) | vlSelfRef.__VdfgRegularize_he50b618e_0_941[5U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[6U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_hi__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_lo__q)))) 
            >> 0x00000017U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_hi__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_lo__q))) 
                                        >> 0x00000020U)) 
                               << 9U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_942[7U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_hi__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_thold_lo__q))) 
                    >> 0x00000020U)) >> 0x00000017U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_942[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0x01fffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U]) 
           | (0x01ffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_942[7U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U]) 
           | (0x01fffe00U & ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i 
                                      << 1U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                              << 0x00000017U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_ctrl_prescaler__q) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__wkup_ctrl_qe) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_ctrl_enable__q) 
                                                       << 9U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__prescale_en 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U] 
            >> 9U) & ([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_false_strict__455__val 
                    = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_lc_sync_escalate_en.__PVT__lc_en;
                vlSelfRef.__Vfunc_lc_tx_test_false_strict__455__Vfuncout 
                    = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__455__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__455__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_incr 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[3U] 
             >> 7U) & ([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__457__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_lc_sync_escalate_en.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__457__Vfuncout 
                        = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__457__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__457__Vfuncout))) 
           & (~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_sync_sleep_mode.q_o) 
                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[3U] 
                    >> 8U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_incr 
        = ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__456__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_lc_sync_escalate_en.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__456__Vfuncout 
                        = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__456__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__456__Vfuncout)) 
            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U] 
               >> 9U)) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__prescale_count_q) 
                          == (0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg2hw[7U] 
                                             >> 0x0000000bU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__aon_rst_req_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__aon_rst_req_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_incr) 
              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q 
                 >= vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bite_thold__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_update_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_incr) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_intr_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_incr) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q 
              >= vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_bark_thold__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__prescale_count_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_incr)
            ? 0U : (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__prescale_count_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_update_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_incr) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_update_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_incr) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_intr_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_incr) 
           & ((((QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_941[5U])) 
                << 0x00000037U) | (((QData)((IData)(
                                                    vlSelfRef.__VdfgRegularize_he50b618e_0_941[4U])) 
                                    << 0x00000017U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.__VdfgRegularize_he50b618e_0_941[3U])) 
                                      >> 9U))) >= (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_he50b618e_0_942[7U])) 
                                                    << 0x00000037U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_942[6U])) 
                                                       << 0x00000017U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_he50b618e_0_942[5U])) 
                                                         >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_ds_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_update_i)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count__DOT__wr_data
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_ds_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_update_i)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi__DOT__wr_data
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_ds_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_update_i)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo__DOT__wr_data
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wdog_intr_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_core__DOT__wkup_intr_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__dst_update 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_update_i) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_qs 
              != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_ds_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__dst_update 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_update_i) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_qs 
              != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_ds_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__dst_update 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_update_i) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_qs 
              != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_ds_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_cause__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_we_o)) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__src_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_update_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_we_o));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_qs 
                    != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__dst_update)))) {
                if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__dst_qs 
                     != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wdog_count__q)) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_qs 
                    != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__dst_update)))) {
                if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__dst_qs 
                     != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_hi__q)) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_qs 
                    != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__dst_update)))) {
                if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__dst_qs 
                     != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_count_lo__q)) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_ds_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_update_i)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause__DOT__wr_data)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_cause__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__dst_update 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_update_i) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_qs) 
              != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_ds_i)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_qs) 
                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_cause__q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__dst_update)))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_qs) 
                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT____Vcellout__u_wkup_cause__q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
}

void Vsim___024root___nba_comb__TOP__330(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__330\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_y_0__q)) 
                    << 0x00000012U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_0_qe) 
                                                        << 0x00000011U) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_x_0__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_0_qe)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[1U] 
        = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_y_0__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_0_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_0_x_0__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_0_qe)))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[1U] 
        = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_y_1__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_x_1__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe))))))) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[2U] 
        = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[2U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_y_1__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_x_1__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe))))))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_y_1__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_1_x_1__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_1_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[2U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_y_2__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_x_2__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe))))))) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[3U] 
        = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[3U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_y_2__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_x_2__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_y_2__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_2_x_2__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_2_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[3U] 
        = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[3U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_y_3__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_x_3__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe))))))) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[4U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[4U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_y_3__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_x_3__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe))))))) 
               >> 0x0000001aU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_y_3__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_3_x_3__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_3_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[4U] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[4U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_y_4__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_x_4__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe))))))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[5U] 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[5U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_y_4__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_x_4__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe))))))) 
               >> 0x00000018U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_y_4__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_4_x_4__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_4_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[5U] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[5U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_y_5__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_x_5__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe))))))) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[6U] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[6U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_y_5__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_x_5__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe))))))) 
               >> 0x00000016U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_y_5__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_blink_param_5_x_5__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__blink_param_5_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[6U] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[6U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_b_0__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_a_0__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe))))))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[7U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_b_0__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_a_0__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe))))))) 
               >> 0x00000014U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_b_0__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_0_a_0__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_0_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[7U] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[7U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_b_1__q)) 
                        << 0x00000012U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe) 
                                                            << 0x00000011U) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_a_1__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe))))))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[8U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[8U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_b_1__q)) 
                         << 0x00000012U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe) 
                                                             << 0x00000011U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_a_1__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe))))))) 
               >> 0x00000012U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_b_1__q)) 
                                             << 0x00000012U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe) 
                                                                << 0x00000011U) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_1_a_1__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_1_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[8U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[8U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe)) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_b_2__q) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_a_2__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe))))))) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[9U] 
        = ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[9U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe)) 
                         << 0x00000022U) | (((QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_b_2__q) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe)))) 
                                             << 0x00000011U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_a_2__q) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe))))))) 
               >> 0x00000010U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe)) 
                                             << 0x00000022U) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_b_2__q) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe)))) 
                                                << 0x00000011U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_2_a_2__q) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_2_qe)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[9U] 
        = ((0x0007ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[9U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_b_3__q)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe) 
                                                               << 0x00000010U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_a_3__q))))))) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0xffe00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe)) 
                         << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_b_3__q)) 
                                             << 0x00000011U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe) 
                                                                << 0x00000010U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_a_3__q))))))) 
               >> 0x0000000dU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_b_3__q)) 
                                                << 0x00000011U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_3_qe) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_3_a_3__q)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000013U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = ((0x001fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000aU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_b_4__q)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe) 
                                                               << 0x00000010U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_a_4__q))))))) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
        = ((0xff800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000bU]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe)) 
                         << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_b_4__q)) 
                                             << 0x00000011U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe) 
                                                                << 0x00000010U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_a_4__q))))))) 
               >> 0x0000000bU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_b_4__q)) 
                                                << 0x00000011U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_4_qe) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_4_a_4__q)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000015U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
        = ((0x007fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000bU]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_0_qe)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_b_5__q)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe) 
                                                               << 0x00000010U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_a_5__q))))))) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0xfe000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_0_qe)) 
                         << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_b_5__q)) 
                                             << 0x00000011U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe) 
                                                                << 0x00000010U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_a_5__q))))))) 
               >> 9U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_0_qe)) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_b_5__q)) 
                                       << 0x00000011U) 
                                      | (QData)((IData)(
                                                        (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__duty_cycle_5_qe) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_duty_cycle_5_a_5__q)))))) 
                                  >> 0x00000020U)) 
                         << 0x00000017U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0x01ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_0_phase_delay_0__q) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000dU]) 
           | (0x01ffffffU & ((0x01fff800U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_0_qe) 
                                             << 0x0000000bU)) 
                             | ((0x01fffc00U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_0_htbt_en_0__q) 
                                                << 0x0000000aU)) 
                                | ((0x01fffe00U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_0_qe) 
                                                   << 9U)) 
                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_0_phase_delay_0__q) 
                                      >> 7U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000dU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_1_htbt_en_1__q) 
                 << 0x00000013U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_1_qe) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_1_phase_delay_1__q) 
                   << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_1_qe) 
                              << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_0_blink_en_0__q)))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000eU]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_2_qe) 
               << 0x00000013U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_2_phase_delay_2__q) 
                                   << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_2_qe) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_1_blink_en_1__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_1_qe))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = ((0x000fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000eU]) 
           | (0xfff00000U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_3_phase_delay_3__q) 
                              << 0x00000018U) | (((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_3_qe) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_2_blink_en_2__q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_2_qe) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_2_htbt_en_2__q))) 
                                                 << 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000fU]) 
           | (0x000fffffU & ((0x000fffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_3_phase_delay_3__q) 
                                             >> 8U)) 
                             | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_3_qe) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_2_blink_en_2__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_2_qe) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_2_htbt_en_2__q))) 
                                >> 0x0000000cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x0000000fU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_4_qe) 
                 << 0x00000017U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_4_htbt_en_4__q) 
                                     << 0x00000016U) 
                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_4_qe) 
                                       << 0x00000015U))) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_4_phase_delay_4__q) 
                   << 5U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_4_qe) 
                               << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_3_blink_en_3__q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_3_qe) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_3_htbt_en_3__q) 
                                 << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_3_qe))))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_4__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_3__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe))) 
               << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_2__q) 
                                   << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe) 
                                              << 8U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_1__q) 
                                                << 7U)))) 
             | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe) 
                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_0__q) 
                              << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe) 
                                          << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_5_blink_en_5__q))) 
                 << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_5_qe) 
                            << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_5_htbt_en_5__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_5_qe))))) 
            << 0x00000012U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_5_phase_delay_5__q) 
                                << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_param_5_qe) 
                                           << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_param_4_blink_en_4__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000011U] 
        = ((0xffff8000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000011U]) 
           | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__cfg_qe) 
                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_5__q) 
                             << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                         << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_4__q))) 
                << 0x0000000bU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                      << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_3__q) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_2__q))) 
                                   << 7U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_1__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_pwm_en_en_0__q))) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__pwm_en_qe) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_invert_invert_5__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__invert_qe))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000011U] 
        = ((0x00007fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000011U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_cfg_clk_div__q 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0x0007fc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | (0x0007ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_cfg_clk_div__q 
                             >> 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg2hw[0x00000012U]) 
           | (0x0007ffffU & ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i 
                                        << 1U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                << 7U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_cfg_cntr_en__q) 
                                           << 6U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__cfg_qe) 
                                           << 5U))) 
                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT____Vcellout__u_cfg_dc_resn__q) 
                                  << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__cfg_qe))) 
                             << 0x0000000aU)));
}

void Vsim___024root___nba_comb__TOP__331(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__331\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_por__DOT__wr_data 
        = ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_por__DOT__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg2hw 
        = (((QData)((IData)(((4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                    << 1U)) | (((3U 
                                                 == 
                                                 (3U 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_cnsty_fault__DOT__we))))) 
                                                << 1U) 
                                               | (1U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_cnsty_fault__DOT__we))))) 
                                                   << 0x0000000fU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_req__q) 
                                                     << 0x0000000bU)) 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_hw_req__q) 
                                                      << 6U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_sw_reset__q) 
                                                        << 5U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_alert_info_ctrl_index__q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_alert_info_ctrl_en__q)))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_cpu_info_ctrl_index__q) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_cpu_info_ctrl_en__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_7__q) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_6__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_5__q))) 
                                                      << 8U)) 
                                                  | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_4__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_3__q) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_2__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_1__q))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_0__q) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_fsm_err__q) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reset_consistency_err__q) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reg_intg_err__q)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_0__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_1__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_2__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_3__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_4__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_5__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_6__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_7__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_8__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_9__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_10__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_11__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_12__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_13__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_14__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_15__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_16__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_17__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_18__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_19__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000013U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_20__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000014U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_21__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000015U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_22__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000016U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_23__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000017U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_24__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_25__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x00000019U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_26__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_27__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_28__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_29__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_30__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_31__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000001fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_32__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_33__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_34__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_35__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_36__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_37__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_38__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_39__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_40__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_41__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_42__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_43__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_44__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_45__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_46__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_1__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_1__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_2__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_2__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_3__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_3__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_4__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_4__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_5__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_5__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_6__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_6__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_7__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_7__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_0__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_1__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_1__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_1__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_2__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_2__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_2__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_3__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_3__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_3__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_4__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_4__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_4__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_5__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_5__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_5__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_6__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_6__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_6__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_7__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_7__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_7__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_8__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_9__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_10__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_11__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_12__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_13__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_14__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_15__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__we)) 
              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                 >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_893 = ((
                                                   (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_en_en_1__q) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_en_en_0__q) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wake_info_capture_dis__q) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 7U)))) 
                                                    << 0x0000000dU) 
                                                   | (((7U 
                                                        == 
                                                        (7U 
                                                         & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_wake_info_abort__DOT__we))))) 
                                                       << 0x0000000cU) 
                                                      | (((2U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                              >> 5U)) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_wake_info_abort__DOT__we)))))) 
                                                         << 0x0000000aU))) 
                                                  | ((0x000003f0U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                         << 4U)) 
                                                     | ((((7U 
                                                           == 
                                                           (7U 
                                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_wake_info_abort__DOT__we))))) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_main_pd_glitch__q) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_esc_timeout__q) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_reg_intg_err__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_fault_status_reg_intg_err__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__err_q) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_chk.err_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
        = ((0xfe03ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U]) 
           | (0xfffc0000U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__rst_hw_req) 
                              << 0x00000018U) | (((0x0000003eU 
                                                   & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_ext_req_sync__q_o) 
                                                       | (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg2hw 
                                                                  >> 0x00000016U))) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__rst_hw_req)) 
                                                 << 0x00000012U))));
    VL_ASSIGNBIT_WI(0x00000059U, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__374__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_req__q;
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__374__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__374__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__374__Vfuncout)) 
                           | (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg2hw 
                                      >> 0x00000015U)))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_894 = ((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_5__q) 
                                                    << 0x00000016U) 
                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_4__q) 
                                                       << 0x00000015U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_3__q) 
                                                         << 0x00000014U))) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_2__q) 
                                                      << 0x00000013U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_1__q) 
                                                         << 0x00000012U) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_wakeup_en_en_0__q) 
                                                            << 0x00000011U) 
                                                           | vlSelfRef.__VdfgRegularize_he50b618e_0_893))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_req__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                  >> 0x0000001cU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_req__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_low_power_exit__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                  >> 0x0000001aU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_sw_reset__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                  >> 0x00000018U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                  >> 0x00000012U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_info_ctrl_en__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                  >> 0x00000010U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_info_ctrl_en__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_cpu_info_ctrl_en__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[1U] 
                  >> 0x0000000aU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_cpu_info_ctrl_en__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_req__DOT__wr_data 
        = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_req__DOT__we)
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata
                           : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[3U] 
                               << 3U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                                         >> 0x0000001dU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_info_ctrl_en__DOT__wr_data 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_info_ctrl_en__DOT__we)
                  ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata
                  : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                     >> 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_cpu_info_ctrl_en__DOT__wr_data 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_cpu_info_ctrl_en__DOT__we)
                  ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata
                  : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[1U] 
                     >> 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_low_power_exit__DOT__wr_data 
        = (1U & ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                      >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we))) 
                 & ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                        >> 0x0000001bU) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_low_power_exit__DOT__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_sw_reset__DOT__wr_data 
        = (1U & ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                      >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we))) 
                 & ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                        >> 0x00000019U) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_sw_reset__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__wr_data 
        = (0x0000001fU & (((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U])
                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                                << 0x0000000dU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                                                   >> 0x00000013U))
                            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_hw_req__q)) 
                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_hw_req__DOT__we)
                              ? (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                                    >> 3U)) : 0x1fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_req__q));
        } else if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_hw_req__q) 
                       << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_reset_info_sw_reset__q) 
                                  << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_low_power_exit__DOT__q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_reset_info_por__DOT__q)))));
        } else if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_regwen__DOT__q));
        } else if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_alert_info_ctrl_en__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_alert_info_ctrl_index__q) 
                      << 4U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                    ? ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                                         >> 0x0000000cU)))
                    : ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                        ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[2U] 
                            << 0x00000014U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[1U] 
                                               >> 0x0000000cU))
                        : ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_cpu_regwen__DOT__q))));
        }
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)))) {
        if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_cpu_info_ctrl_en__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_cpu_info_ctrl_index__q) 
                      << 4U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                    ? ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[1U] 
                                         >> 6U))) : 
                   ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                     ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[1U] 
                         << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__hw2reg[0U] 
                                            >> 6U))
                     : ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                        | ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_0__DOT__q)
                            : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_1__DOT__q)
                                : ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_2__DOT__q)
                                    : ((0x00004000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                        ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_3__DOT__q)
                                        : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_4__DOT__q))))))));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next 
            = ((IData)((0U != (0x00ff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)))
                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_5__DOT__q)
                       : ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_6__DOT__q)
                           : ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_sw_rst_regwen_7__DOT__q)
                               : ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_0__q)
                                   : ((0x00100000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_1__q)
                                       : ((0x00200000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_2__q)
                                           : ((0x00400000U 
                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_3__q)
                                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_4__q)))))))))
                : ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                    ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_5__q))
                    : ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                        ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_6__q))
                        : ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                            ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_7__q))
                            : ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__addr_hit)
                                ? ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_fsm_err__q) 
                                       << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reset_consistency_err__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reg_intg_err__q))))
                                : 0xffffffffU)))));
    }
}

void Vsim___024root___nba_comb__TOP__332(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__332\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_3__q) 
             << 0x0000001aU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_2__q) 
                                << 0x00000014U)) | 
           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_1__q) 
             << 0x0000000eU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_0__q) 
                                 << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__dst_qs_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[1U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_0__q) 
             << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_7__q) 
                                << 0x00000012U)) | 
           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_6__q) 
             << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_5__q) 
                                 << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_padsel_4__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[2U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_4__q) 
             << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_3__q) 
                                << 0x00000010U)) | 
           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_2__q) 
             << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_1__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[3U] 
        = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_mode_1__q) 
               << 0x0000000dU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_miodio_0__q) 
                                  << 0x0000000cU)) 
             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_filter_0__q) 
                 << 0x0000000bU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_0_mode_0__q) 
                                     << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_7__q)))) 
            << 0x00000010U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_6__q) 
                                << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_cnt_th_5__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[4U] 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_miodio_7__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_filter_7__q) 
                          << 5U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_7_mode_7__q) 
                                      << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_miodio_6__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_filter_6__q)))) 
             << 0x00000019U) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_6_mode_6__q) 
                                   << 6U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_miodio_5__q) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_filter_5__q) 
                                                << 4U))) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_5_mode_5__q) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_miodio_4__q))) 
                                << 0x00000010U)) | 
           ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_filter_4__q) 
              << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_4_mode_4__q) 
                                  << 0x0000000cU) | 
                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_miodio_3__q) 
                                   << 0x0000000bU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_filter_3__q) 
                                     << 0x0000000aU)))) 
            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_3_mode_3__q) 
                 << 7U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_miodio_2__q) 
                            << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_filter_2__q) 
                                      << 5U))) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_2_mode_2__q) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_miodio_1__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_1_filter_1__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[5U] 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q))) 
             << 0x00000018U) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q) 
                                   << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q) 
                                             << 4U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q) 
                                     << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q))) 
                                << 0x00000010U)) | 
           ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q))) 
             << 8U) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_7__q) 
                           << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_6__q) 
                                     << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_5__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_4__q))) 
                        << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_3__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_2__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_1__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_wkup_detector_en_0__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[6U] 
        = (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_7__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_6__q) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_5__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_4__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_3__q) 
                                     << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_2__q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_1__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_0__q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_15__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_14__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_13__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_12__q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_11__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_10__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_9__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_8__q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_7__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_6__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_5__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_4__q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_3__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_2__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_1__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_en_0__q))) 
                                 << 8U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q) 
                                              << 6U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q) 
                                                << 4U)) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q) 
                                                << 2U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[7U] 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_11__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_10__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_9__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_8__q))) 
             << 0x00000018U) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_7__q) 
                                   << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_6__q) 
                                             << 4U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_5__q) 
                                     << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_4__q))) 
                                << 0x00000010U)) | 
           ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_3__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_2__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_1__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_0__q))) 
             << 8U) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_15__q) 
                           << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_14__q) 
                                     << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_13__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_12__q))) 
                        << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_11__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_10__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_9__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_8__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[8U] 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_27__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_26__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_25__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_24__q))) 
             << 0x00000018U) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_23__q) 
                                   << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_22__q) 
                                             << 4U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_21__q) 
                                     << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_20__q))) 
                                << 0x00000010U)) | 
           ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_19__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_18__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_17__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_16__q))) 
             << 8U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_15__q) 
                         << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_14__q) 
                                   << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_13__q) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_12__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[9U] 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_43__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_42__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_41__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_40__q))) 
             << 0x00000018U) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_39__q) 
                                   << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_38__q) 
                                             << 4U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_37__q) 
                                     << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_36__q))) 
                                << 0x00000010U)) | 
           ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_35__q) 
                << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_34__q) 
                          << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_33__q) 
                                      << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_32__q))) 
             << 8U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_31__q) 
                         << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_30__q) 
                                   << 4U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_29__q) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_28__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000aU] 
        = (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_25__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_24__q) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_23__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_22__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_21__q) 
                                     << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_20__q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_19__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_18__q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_17__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_16__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_15__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_14__q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_13__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_12__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_11__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_10__q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_9__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_8__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_7__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_6__q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_5__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_4__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_3__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_2__q))) 
                                 << 8U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_1__q) 
                                              << 7U) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_0__q) 
                                                 << 6U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_46__q) 
                                                   << 4U))) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_45__q) 
                                                << 2U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_44__q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000bU] 
        = (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_10__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_9__q) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_8__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_7__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_6__q) 
                                     << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_5__q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_4__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_3__q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_2__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_1__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_0__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_46__q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_45__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_44__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_43__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_42__q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_41__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_40__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_39__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_38__q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_37__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_36__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_35__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_34__q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_33__q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_32__q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_31__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_30__q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_29__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_28__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_27__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_en_26__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000cU] 
        = (((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_42__q) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_41__q) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_40__q) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_39__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_38__q) 
                                     << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_37__q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_36__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_35__q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_34__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_33__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_32__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_31__q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_30__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_29__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_28__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_27__q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_26__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_25__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_24__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_23__q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_22__q) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_21__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_20__q) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_19__q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_18__q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_17__q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_16__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_15__q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_14__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_13__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_12__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_11__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000dU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))))) 
                                << 8U) | (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                             | (0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                              << 4U)) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_46__q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_45__q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_44__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_43__q))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000eU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_1_drive_strength_1__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000000fU] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_3_drive_strength_3__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_2_drive_strength_2__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000010U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_4_drive_strength_4__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000011U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_5_drive_strength_5__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000012U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_7_drive_strength_7__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_6_drive_strength_6__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000013U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_8_drive_strength_8__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000014U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_9_drive_strength_9__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000015U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_11_drive_strength_11__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_10_drive_strength_10__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000016U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_12_drive_strength_12__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000017U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_13_drive_strength_13__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000018U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_15_drive_strength_15__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_attr_14_drive_strength_14__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000019U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_0_drive_strength_0__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001aU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_1_drive_strength_1__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001bU] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_3_drive_strength_3__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_2_drive_strength_2__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001cU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_4_drive_strength_4__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001dU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_5_drive_strength_5__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001eU] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_7_drive_strength_7__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_6_drive_strength_6__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000001fU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_8_drive_strength_8__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000020U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_9_drive_strength_9__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000021U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_11_drive_strength_11__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_10_drive_strength_10__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000022U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_12_drive_strength_12__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000023U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_13_drive_strength_13__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000024U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_15_drive_strength_15__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_14_drive_strength_14__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000025U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_16_drive_strength_16__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000026U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_17_drive_strength_17__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000027U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_19_drive_strength_19__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_18_drive_strength_18__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000028U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_20_drive_strength_20__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000029U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_21_drive_strength_21__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002aU] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_23_drive_strength_23__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_22_drive_strength_22__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002bU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_24_drive_strength_24__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002cU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_25_drive_strength_25__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002dU] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_27_drive_strength_27__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_26_drive_strength_26__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002eU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_28_drive_strength_28__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000002fU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_29_drive_strength_29__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000030U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_31_drive_strength_31__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_30_drive_strength_30__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000031U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_32_drive_strength_32__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000032U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_33_drive_strength_33__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000033U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_35_drive_strength_35__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_34_drive_strength_34__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000034U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_36_drive_strength_36__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000035U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_37_drive_strength_37__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000036U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_39_drive_strength_39__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_38_drive_strength_38__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000037U] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_40_drive_strength_40__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000038U] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_41_drive_strength_41__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000039U] 
        = (((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we))))) 
                << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 0x0000000fU)) 
                           | (0x000003ffU == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 6U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 5U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))))) 
                                << 0x00000010U)) | 
           (((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
               | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we)))))) 
              << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_43_drive_strength_43__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 8U)) | ((((0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we))))) 
                                              << 7U) 
                                             | (((6U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 0x0000000fU)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                                                << 4U)) 
                                            | ((((2U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                     >> 6U)) 
                                                 | (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we)))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_42_drive_strength_42__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003aU] 
        = (((((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                | (0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
               << 0x0000000eU) | (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 5U)) 
                                   | (((0x000003ffU 
                                        == (0x000003ffU 
                                            & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we))))) 
                                       << 4U) | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))) 
                                  << 8U)) | ((((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we))))) 
                                               << 7U) 
                                              | (((6U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000fU)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 6U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 4U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 3U)) 
                                              | (0x000003ffU 
                                                 == 
                                                 (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 2U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 1U)) 
                                               | (0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))))) 
                                << 8U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                            | (0x000003ffU 
                                               == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we)))))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               << 5U)) 
                                           | (((0x000003ffU 
                                                == 
                                                (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_44_drive_strength_44__DOT__we))))) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x00000014U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003bU] 
        = ((((((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                        >> 4U)) | (0x000003ffU == (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))) 
                << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                  >> 3U)) | (0x000003ffU 
                                             == (0x000003ffU 
                                                 & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))) 
                          << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                              >> 2U)) 
                                       | (0x000003ffU 
                                          == (0x000003ffU 
                                              & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x000003ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))))) 
             << 0x00000018U) | ((((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x000003ffU == 
                                     (0x000003ffU & 
                                      (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))) 
                                 << 0x00000016U) | 
                                (((0x00000020U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 5U)) 
                                  | (((0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we))))) 
                                      << 4U) | (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x00000014U)))) 
                                 << 0x00000010U))) 
           | ((((((0x000003ffU == (0x000003ffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we))))) 
                  << 7U) | (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                    >> 0x0000000fU)) 
                             | (0x000003ffU == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
                            << 4U)) | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 6U)) 
                                         | (0x000003ffU 
                                            == (0x000003ffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
                                        << 2U) | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 5U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))))) 
               << 8U) | (((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                   >> 4U)) | (0x000003ffU 
                                              == (0x000003ffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
                           << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 3U)) 
                                      | (0x000003ffU 
                                         == (0x000003ffU 
                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
                                     << 4U)) | ((((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 2U)) 
                                                  | (0x000003ffU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 1U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_45_drive_strength_45__DOT__we))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003cU] 
        = ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003cU]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_0__q) 
               << 0x0000000cU) | ((((0x0000001eU & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                      >> 0x00000013U)) 
                                    | (0x000003ffU 
                                       == (0x000003ffU 
                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))) 
                                   << 7U) | ((((0x0000000cU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 0x0000000eU)) 
                                               | (((0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                        >> 7U)))) 
                                              << 3U) 
                                             | (((0x000003ffU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 5U)) 
                                                   | (0x000003ffU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_attr_46_drive_strength_46__DOT__we)))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003cU] 
        = ((0x0007ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003cU]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_5__q) 
                                          << 0x0000000eU) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_4__q) 
                                             << 7U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_3__q))))) 
                        << 0x0000000eU) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_2__q) 
                                                            << 7U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_1__q)))))) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003dU] 
        = ((0xffc00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003dU]) 
           | (((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_5__q) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_4__q) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_3__q))))) 
                         << 0x0000000eU) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_2__q) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_1__q)))))) 
               >> 0x0000000dU) | ((IData)(((((QData)((IData)(
                                                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_5__q) 
                                                               << 0x0000000eU) 
                                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_4__q) 
                                                                  << 7U) 
                                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_3__q))))) 
                                             << 0x0000000eU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_2__q) 
                                                                << 7U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_1__q))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000013U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003dU] 
        = ((0x003fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003dU]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_11__q) 
                                          << 0x0000000eU) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_10__q) 
                                             << 7U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_9__q))))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_8__q) 
                                                            << 0x0000000eU) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_7__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_6__q))))))) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003eU] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_11__q) 
                                        << 0x0000000eU) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_10__q) 
                                           << 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_9__q))))) 
                      << 0x00000015U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_8__q) 
                                                          << 0x0000000eU) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_7__q) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_6__q))))))) 
            >> 0x0000000aU) | ((IData)(((((QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_11__q) 
                                                            << 0x0000000eU) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_10__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_9__q))))) 
                                          << 0x00000015U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_8__q) 
                                                             << 0x0000000eU) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_7__q) 
                                                                << 7U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_6__q)))))) 
                                        >> 0x00000020U)) 
                               << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000003fU] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_16__q)) 
                    << 0x0000001cU) | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_15__q) 
                                                         << 0x00000015U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_14__q) 
                                                           << 0x0000000eU)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_13__q) 
                                                           << 7U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_12__q)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U] 
        = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_16__q)) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_15__q) 
                                                             << 0x00000015U) 
                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_14__q) 
                                                               << 0x0000000eU)) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_13__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_12__q)))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U] 
        = ((0x80000007U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U]) 
           | (0xfffffff8U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_20__q) 
                              << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_19__q) 
                                                  << 0x00000011U) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_18__q) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_17__q) 
                                                       << 3U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000040U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_21__q) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000041U] 
        = ((0xf8000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000041U]) 
           | (0x7fffffffU & ((0x7ff00000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_24__q) 
                                             << 0x00000014U)) 
                             | ((0x7fffe000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_23__q) 
                                                << 0x0000000dU)) 
                                | ((0x7fffffc0U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_22__q) 
                                                   << 6U)) 
                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_21__q) 
                                      >> 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000041U] 
        = ((0x07ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000041U]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_29__q) 
                                          << 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_28__q)))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_27__q) 
                                                            << 0x0000000eU) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_26__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_25__q))))))) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000042U] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000042U]) 
           | (((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_29__q) 
                                           << 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_28__q)))) 
                         << 0x00000015U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_27__q) 
                                                             << 0x0000000eU) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_26__q) 
                                                                << 7U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_25__q))))))) 
               >> 5U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_29__q) 
                                                      << 7U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_28__q)))) 
                                    << 0x00000015U) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_27__q) 
                                                       << 0x0000000eU) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_26__q) 
                                                          << 7U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_25__q)))))) 
                                  >> 0x00000020U)) 
                         << 0x0000001bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000042U] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000042U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q)) 
                        << 0x0000001cU) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q) 
                                                             << 0x00000015U) 
                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q) 
                                                               << 0x0000000eU)) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q))))))) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000043U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q)) 
                      << 0x0000001cU) | (QData)((IData)(
                                                        ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q) 
                                                           << 0x00000015U) 
                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q) 
                                                             << 0x0000000eU)) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q))))))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q)) 
                                 << 0x0000001cU) | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q) 
                                                                      << 0x00000015U) 
                                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q) 
                                                                        << 0x0000000eU)) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q) 
                                                                        << 7U) 
                                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q)))))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q)) 
                         << 0x0000001cU) | (QData)((IData)(
                                                           ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q) 
                                                              << 0x00000015U) 
                                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q) 
                                                                << 0x0000000eU)) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q) 
                                                                << 7U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q)))))) 
                       >> 0x00000020U)) >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U] 
        = ((0xe0000001U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U]) 
           | (0xfffffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_38__q) 
                              << 0x00000016U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_37__q) 
                                                  << 0x0000000fU) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_36__q) 
                                                     << 8U) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_35__q) 
                                                       << 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000044U]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_43__q) 
                                          << 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_42__q)))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_41__q) 
                                                            << 0x0000000eU) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_40__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_39__q))))))) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000045U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_43__q) 
                                        << 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_42__q)))) 
                      << 0x00000015U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_41__q) 
                                                          << 0x0000000eU) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_40__q) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_39__q))))))) 
            >> 3U) | ((IData)(((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_43__q) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_42__q)))) 
                                 << 0x00000015U) | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_41__q) 
                                                                     << 0x0000000eU) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_40__q) 
                                                                        << 7U) 
                                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_39__q)))))) 
                               >> 0x00000020U)) << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000046U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_1__q)) 
                    << 0x0000001bU) | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_0__q) 
                                                         << 0x00000015U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_46__q) 
                                                           << 0x0000000eU)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_45__q) 
                                                           << 7U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_44__q)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_1__q)) 
                        << 0x0000001bU) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_0__q) 
                                                             << 0x00000015U) 
                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_46__q) 
                                                               << 0x0000000eU)) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_45__q) 
                                                               << 7U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_44__q)))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U] 
        = ((0x80000001U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_6__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_5__q) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_4__q) 
                   << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_3__q) 
                                       << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_2__q)))) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000047U]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_11__q) 
                 << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_10__q) 
                                     << 0x00000012U) 
                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_9__q) 
                                       << 0x0000000cU))) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_8__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_7__q))) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000048U] 
        = ((0xe0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000048U]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_11__q) 
                 << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_10__q) 
                                     << 0x00000012U) 
                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_9__q) 
                                       << 0x0000000cU))) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_8__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_7__q))) 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000048U] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000048U]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_15__q) 
                 << 0x00000012U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_14__q) 
                                    << 0x0000000cU)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_13__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_12__q))) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000049U] 
        = ((0xf8000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000049U]) 
           | (0x1fffffffU & ((0x1fe00000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_16__q) 
                                             << 0x00000015U)) 
                             | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_15__q) 
                                   << 0x00000012U) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_14__q) 
                                     << 0x0000000cU)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_13__q) 
                                     << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_12__q))) 
                                >> 3U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000049U] 
        = ((0x07ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000049U]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_21__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_20__q) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_19__q) 
                   << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_18__q) 
                                       << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_17__q)))) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004aU] 
        = ((0xfe000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004aU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_21__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_20__q) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_19__q) 
                   << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_18__q) 
                                       << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_17__q)))) 
              >> 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004aU] 
        = ((0x01ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004aU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_26__q) 
                 << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_25__q) 
                                     << 0x00000012U) 
                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_24__q) 
                                       << 0x0000000cU))) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_23__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_22__q))) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004bU] 
        = ((0xff800000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004bU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_26__q) 
                 << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_25__q) 
                                     << 0x00000012U) 
                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_24__q) 
                                       << 0x0000000cU))) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_23__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_22__q))) 
              >> 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004bU] 
        = ((0x007fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004bU]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_32__q) 
                                          << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_31__q)))) 
                        << 0x00000018U) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_30__q) 
                                                             << 0x00000012U) 
                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_29__q) 
                                                               << 0x0000000cU)) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_28__q) 
                                                               << 6U) 
                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_27__q))))))) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004cU] 
        = ((0xf8000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004cU]) 
           | (((IData)((((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_32__q) 
                                           << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_31__q)))) 
                         << 0x00000018U) | (QData)((IData)(
                                                           ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_30__q) 
                                                              << 0x00000012U) 
                                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_29__q) 
                                                                << 0x0000000cU)) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_28__q) 
                                                                << 6U) 
                                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_27__q))))))) 
               >> 9U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_32__q) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_31__q)))) 
                                    << 0x00000018U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_30__q) 
                                                        << 0x00000012U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_29__q) 
                                                          << 0x0000000cU)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_28__q) 
                                                          << 6U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_27__q)))))) 
                                  >> 0x00000020U)) 
                         << 0x00000017U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004cU] 
        = ((0x07ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004cU]) 
           | ((IData)((((QData)((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_38__q) 
                                           << 0x00000012U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_37__q) 
                                             << 0x0000000cU)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_36__q) 
                                             << 6U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_35__q))))) 
                        << 0x0000000cU) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_34__q) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_33__q)))))) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004dU] 
        = ((0x80000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004dU]) 
           | (((IData)((((QData)((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_38__q) 
                                            << 0x00000012U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_37__q) 
                                              << 0x0000000cU)) 
                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_36__q) 
                                              << 6U) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_35__q))))) 
                         << 0x0000000cU) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_34__q) 
                                                             << 6U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_33__q)))))) 
               >> 5U) | ((IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_38__q) 
                                                       << 0x00000012U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_37__q) 
                                                         << 0x0000000cU)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_36__q) 
                                                         << 6U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_35__q))))) 
                                    << 0x0000000cU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_34__q) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_33__q))))) 
                                  >> 0x00000020U)) 
                         << 0x0000001bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004dU] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004dU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_42__q) 
                 << 0x00000012U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_41__q) 
                                    << 0x0000000cU)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_40__q) 
                   << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_39__q))) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004eU] 
        = ((0xe0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004eU]) 
           | (0x7fffffffU & ((0x7f800000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_43__q) 
                                             << 0x00000017U)) 
                             | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_42__q) 
                                   << 0x00000012U) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_41__q) 
                                     << 0x0000000cU)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_40__q) 
                                     << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_39__q))) 
                                >> 1U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004eU] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004eU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_48__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_47__q) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_46__q) 
                   << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_45__q) 
                                       << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_44__q)))) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004fU] 
        = ((0xf8000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004fU]) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_48__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_47__q) 
                                    << 0x00000012U)) 
               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_46__q) 
                   << 0x0000000cU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_45__q) 
                                       << 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_44__q)))) 
              >> 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004fU] 
        = ((0x07ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x0000004fU]) 
           | ((IData)((((QData)((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_54__q) 
                                           << 0x00000012U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_53__q) 
                                             << 0x0000000cU)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_52__q) 
                                             << 6U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_51__q))))) 
                        << 0x0000000cU) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_50__q) 
                                                            << 6U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_49__q)))))) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000050U] 
        = ((0x80000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000050U]) 
           | (((IData)((((QData)((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_54__q) 
                                            << 0x00000012U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_53__q) 
                                              << 0x0000000cU)) 
                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_52__q) 
                                              << 6U) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_51__q))))) 
                         << 0x0000000cU) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_50__q) 
                                                             << 6U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_49__q)))))) 
               >> 5U) | ((IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_54__q) 
                                                       << 0x00000012U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_53__q) 
                                                         << 0x0000000cU)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_52__q) 
                                                         << 6U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_51__q))))) 
                                    << 0x0000000cU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_50__q) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_49__q))))) 
                                  >> 0x00000020U)) 
                         << 0x0000001bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000050U] 
        = ((0x7fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000050U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_55__q) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg2hw[0x00000051U] 
        = (0x00001fffU & ((0x7ffff800U & (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                          << 0x0000000bU)) 
                          | ((0x7fffffe0U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_56__q) 
                                             << 5U)) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_55__q) 
                                >> 1U))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h6295770a_0;

VL_ATTR_COLD void Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = (0x0000000fU 
                                       & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))
                                           : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                               ? (3U 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                   : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 594, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0x0000000fffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                                 ((IData)(9U) 
                                                  * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x00000039U) 
                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                      << 0x00000031U) 
                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                         << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((2U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                               >> 2U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((1U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (3U & ((0x3ffffffeU & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
                                 << 1U)) | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
                                            >> 2U)));
    vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en 
        = ((~ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__csb_status_committed) 
           & (2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0ULL);
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
            ? (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q)
            : (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_passthrough_implementation__DOT__pt_sd_out 
        = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_swap_en) 
            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_payload_swap_en_outclk) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace_outclk)))
            ? (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_swap_en)
                      ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_addr_swap_mask__q 
                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_addr_swap_data__q) 
                         >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addrcnt_outclk))
                      : ((VL_STREAML_III(32, vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_payload_swap_mask__q, 8U) 
                          & VL_STREAML_III(32, vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_payload_swap_data__q, 8U)) 
                         >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payloadcnt_outclk))))
            : 0U);
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                      >> 8U)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__fifo_win_d2h[0U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.cio_sck_o = ((~ (IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en)) 
                           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q));
    vlSelfRef.cio_sck_en_o = ((IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en) 
                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
    if (vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en) {
        vlSelfRef.cio_csb_o = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__csb_deassert_outclk;
        vlSelfRef.cio_sd_en_o = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__passthrough_s_en;
    } else {
        vlSelfRef.cio_csb_o = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q;
        vlSelfRef.cio_sd_en_o = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q)
                                  ? (IData)(vlSelfRef.__PVT__sd_en_core)
                                  : 0U);
    }
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                    = (0x0000000fU & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.cio_sd_o = (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__passthrough_en)
                                          ? (IData)(vlSelfRef.__PVT__gen_passthrough_implementation__DOT__pt_sd_out)
                                          : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                              ? (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                    >> 7U))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                     >> 6U))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                   >> 4U)
                                                   : 0U)))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_4 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                                       << 9U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                                       << 7U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                                          << 6U) 
                                                         | (IData)(vlSelfRef.__PVT__event_mask)))));
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    } else {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
            = ((0xe3U >= (0x000000ffU & ((IData)(0x00000039U) 
                                         * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                ? (0x01ffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(0x00000038U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & ((IData)(0x00000039U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000039U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & ((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                : 0ULL);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
                         ? 3U : 2U));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                   >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 3U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                  >> 0x0000000cU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0x0000000fU & (IData)(
                                                    (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                     >> 4U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0x0000000fU & (IData)(
                                                       (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                        >> 8U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0x0000ffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                          >> 0x00000010U))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    }
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o) 
            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d 
        = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
                            ? 0x00000048U : (0x0000007fU 
                                             & (((1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                 : 
                                                (((IData)(0x48U) 
                                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
              & (0x00008000U == (0x00018000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                  << 0x00000010U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                     << 0x0000000fU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                       << 0x0000000eU))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                    << 0x0000000dU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                                       << 0x0000000cU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i 
        = ((~ (0U != (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4) 
                                     >> 6U)))) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           || ((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
               == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q))
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                     ? (VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                                  ? 0U
                                                  : 
                                                 (0x000000ffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q))
                            ? 0U : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q))
                     : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                 | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                      ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                            & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                          ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i) 
           & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)) 
              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d 
        = ((0U != (((((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d) 
                        << 2U) | (((0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)) 
                                   << 1U) | (0x40U 
                                             <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o))))) 
                   & (IData)(vlSelfRef.__PVT__event_mask))) 
           | (IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__fifo_win_d2h[1U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                  | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                } else if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                      | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                     | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))))) {
                    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((1U & (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                               | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : ((1U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                                  | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))
                                            ? 3U : 
                                           ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                             : 4U)));
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx2 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vsim__ConstPool__TABLE_h6295770a_0[__Vtableidx2];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int));
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][2U];
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 1U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000020U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000010U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 8U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x0000000cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 4U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000021U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000037U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000035U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000036U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
            ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                   : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                                       ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)
                                       : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                           ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                           : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                              - (IData)(1U)))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                                   ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                           : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                       : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                                    : 0U)))
                                   : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                       ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                               - (IData)(1U))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:410: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 410, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                     & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
            ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                                >> 1U)))
            : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                ? ((0x000000fcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                   << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
                : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                    ? ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                       << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                    : 0U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                    = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                    = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
            } else {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                    = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)));
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                    = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)));
            }
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
                = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                          ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                          : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                              ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                                 - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                              : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
                = (7U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                    : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o) 
                               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i))
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data))));
}

VL_ATTR_COLD void Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 2U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0x0000000fffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                                 ((IData)(9U) 
                                                  * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x00000039U) 
                                  | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                      << 0x00000031U) 
                                     | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         << 0x00000010U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][1U]) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                         << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((2U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                               >> 2U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = ((1U & vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
            [2U][2U]) | (3U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q))))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (3U & ((0x3ffffffeU & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q) 
                                 << 1U)) | ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q) 
                                            >> 2U)));
    vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0ULL);
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
            ? (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q)
            : (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = (0x0000000fU 
                                       & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q) 
                                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit))
                                           : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                               ? (3U 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                                                   ? 
                                                  (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                   : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 594, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
            ? 0x00000040U : (0x0000007fU & (((1U & 
                                              ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 6U)))
                                             ? ((0x0000003fU 
                                                 & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                - (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                             : (((IData)(0x40U) 
                                                 - 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                      >> 8U)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__fifo_win_d2h[0U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[0U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val 
                    = (0x0000000fU & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(((0x00008000U != (0x0001c000U 
                                       & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)) 
                      | (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_4 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                     << 0x0000000aU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                                       << 9U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                                       << 7U) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                                          << 6U) 
                                                         | (IData)(vlSelfRef.__PVT__event_mask)))));
    if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    } else {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
            = ((0xe3U >= (0x000000ffU & ((IData)(0x00000039U) 
                                         * (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                ? (0x01ffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                             (((IData)(0x00000038U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & ((IData)(0x00000039U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000039U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x0000001fU) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & ((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x00000039U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000039U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                : 0ULL);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)
                         ? 3U : 2U));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                   >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 3U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                  >> 0x0000000cU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0x0000000fU & (IData)(
                                                    (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                     >> 4U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0x0000000fU & (IData)(
                                                       (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                        >> 8U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0x0000ffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                                          >> 0x00000010U))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    }
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o) 
            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d 
        = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
                            ? 0x00000048U : (0x0000007fU 
                                             & (((1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                 : 
                                                (((IData)(0x48U) 
                                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
           & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
              & (0x00008000U == (0x00018000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o))));
    vlSelfRef.__VdfgRegularize_hf4aef21c_1_5 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                  << 0x00000010U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                     << 0x0000000fU) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                       << 0x0000000eU))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                    << 0x0000000dU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                                       << 0x0000000cU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i 
        = ((~ (0U != (0x0000003fU & ((IData)(vlSelfRef.__VdfgRegularize_hf4aef21c_1_4) 
                                     >> 6U)))) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           || ((1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o)) 
               == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q))
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                     ? (VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                                  ? 0U
                                                  : 
                                                 (0x000000ffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q))
                            ? 0U : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q))
                     : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                 | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                      ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                            & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                          ? (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i) 
           & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)) 
              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d 
        = ((0U != (((((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__d) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__d) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__d) 
                        << 2U) | (((0U == (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__d)) 
                                   << 1U) | (0x40U 
                                             <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o))))) 
                   & (IData)(vlSelfRef.__PVT__event_mask))) 
           | (IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__fifo_win_d2h[1U][0U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][1U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__fifo_win_d2h[1U][2U] = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelfRef.__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                  | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                } else if ((1U & (~ (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                      | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                     | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))))) {
                    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[0U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[0U][2U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][0U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][0U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][1U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][1U];
    vlSelfRef.__PVT__u_reg__DOT__tl_win_i[1U][2U] = 
        vlSelfRef.__PVT__fifo_win_d2h[1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelfRef.__PVT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((1U & (((0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                               | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                              | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)))
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : ((1U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte))) 
                                                  | (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q))))
                                            ? 3U : 
                                           ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                             : 4U)));
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx4 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vsim__ConstPool__TABLE_h6295770a_0[__Vtableidx4];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int));
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[0U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[1U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][0U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][0U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][1U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][1U];
    vlSelf->__PVT__u_reg__DOT__u_socket->tl_d_i[2U][2U] 
        = vlSelfRef.u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][2U];
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 1U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000020U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000010U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 8U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x0000000cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 4U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                                      >> 0x00000021U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000037U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000035U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 0x00000036U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__en_i)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                   : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                                       ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)
                                       : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                           ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                           : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                              - (IData)(1U)))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                               ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                                   ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                           : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                       : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                                    : 0U)))
                                   : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                       ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                               - (IData)(1U))))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:410: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_host_fsm.sv", 410, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1) 
               & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                  | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                     & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
    }
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d);
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                  - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
                = (0x000fffffU & (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                  - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                      ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                      : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                          ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                             - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                          : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
            = (0x000fffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
            = (7U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
            ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)
            : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__d) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__d));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                          + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data))));
}

VL_ATTR_COLD void Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__1(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i 
        = ((1U == (7U & ((vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[2U] 
                          << 2U) | (vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[1U] 
                                    >> 0x0000001eU))))
            ? ((vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[1U] 
                << 0x00000010U) | (vlSelf->__PVT__u_reg__DOT__u_socket->__PVT__tl_t_p[0U] 
                                   >> 0x00000010U))
            : 0U);
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                           ? (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_851 
                                      >> 0x00000026U))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
            ? ((0x000000feU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                                >> 1U)))
            : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                ? ((0x000000fcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                   << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
                : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q))
                    ? ((0x000000f0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                       << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                    : 0U)));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                               & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                               ? (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_851 
                                          >> 0x00000026U))
                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0x000000ffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o) 
                               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i))
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i)
                                   ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
}

VL_ATTR_COLD void Vsim_spi_host__Az2___ctor_var_reset(Vsim_spi_host__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_spi_host__Az2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    vlSelf->alert_rx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3626835617410658616ull);
    vlSelf->alert_tx_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 268840600036833065ull);
    vlSelf->racl_policies_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14577879055449831761ull);
    vlSelf->__PVT__racl_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975622516046977850ull);
    vlSelf->__PVT__racl_error_log_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3784173351313067546ull);
    vlSelf->cio_sck_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7788690869968157676ull);
    vlSelf->cio_sck_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10651043776851053701ull);
    vlSelf->cio_csb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1417467729633770170ull);
    vlSelf->cio_csb_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17681568361554615232ull);
    vlSelf->cio_sd_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 459530356399660097ull);
    vlSelf->cio_sd_en_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9843193065390139786ull);
    vlSelf->cio_sd_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10117112617582077043ull);
    vlSelf->passthrough_i = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17372469885164878574ull);
    vlSelf->passthrough_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3982264059464366298ull);
    vlSelf->__PVT__lsio_trigger_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12654747598178506109ull);
    vlSelf->intr_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14113202171117576157ull);
    vlSelf->intr_spi_event_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9656327295547264852ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__fifo_win_h2d[__Vi0], __VscopeHash, 13114106849861237032ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__fifo_win_d2h[__Vi0], __VscopeHash, 14731402483533840464ull);
    }
    vlSelf->__PVT__sd_en_core = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 450189628926936780ull);
    vlSelf->__PVT__test_dir_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6745598934800593285ull);
    vlSelf->__PVT__test_speed_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12131101643734544470ull);
    vlSelf->__PVT__access_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17150768025521683104ull);
    vlSelf->__PVT__event_mask = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9284421246392430544ull);
    vlSelf->__PVT__gen_passthrough_implementation__DOT__passthrough_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13571712151363536455ull);
    vlSelf->__PVT__gen_passthrough_implementation__DOT__pt_sd_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11717990808325293226ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__u_reg__DOT__tl_win_o[__Vi0], __VscopeHash, 12970128441144264732ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_reg__DOT__tl_win_i[__Vi0], __VscopeHash, 7702281068675196604ull);
    }
    VL_SCOPED_RAND_RESET_W(138, vlSelf->__PVT__u_reg__DOT__reg2hw, __VscopeHash, 4901883775917663627ull);
    vlSelf->__PVT__u_reg__DOT__addrmiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15052309411488334690ull);
    vlSelf->__PVT__u_reg__DOT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226200909601097533ull);
    vlSelf->__PVT__u_reg__DOT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790086751881178366ull);
    vlSelf->__PVT__u_reg__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17619690520985733277ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__u_reg__DOT__tl_socket_h2d[__Vi0], __VscopeHash, 9720948784585497241ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_reg__DOT__tl_socket_d2h[__Vi0], __VscopeHash, 13478162778224109226ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->u_reg__DOT____Vcellinp__u_socket__tl_d_i[__Vi0], __VscopeHash, 3911566070275597853ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->u_reg__DOT____Vcellout__u_socket__tl_d_o[__Vi0], __VscopeHash, 12757048070903254935ull);
    }
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_error__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15493182166268390515ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_spi_event__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 754928845443292780ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_error__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13290601608848840254ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2795451642977054824ull);
    vlSelf->u_reg__DOT____Vcellout__u_control_rx_watermark__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15405147146968334079ull);
    vlSelf->u_reg__DOT____Vcellout__u_control_tx_watermark__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3499135281431497382ull);
    vlSelf->u_reg__DOT____Vcellout__u_control_output_en__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14085026411873716251ull);
    vlSelf->u_reg__DOT____Vcellout__u_control_sw_rst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14810230720337482292ull);
    vlSelf->u_reg__DOT____Vcellout__u_control_spien__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9511926238096927798ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_clkdiv__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15643161833924181633ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_csnidle__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8206783886493066391ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_csntrail__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2343827046215575481ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_csnlead__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14967096522362666458ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_fullcyc__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5169720973147278698ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_cpha__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5843171365768641240ull);
    vlSelf->u_reg__DOT____Vcellout__u_configopts_cpol__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15437910319740421378ull);
    vlSelf->u_reg__DOT____Vcellout__u_csid__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4411107240700207387ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6861745272826208842ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_enable_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12288701756604934824ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_enable_underflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12260803259465520270ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4218967203941571430ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_enable_csidinval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10802735890114255435ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16737416408839299768ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7181216896297464695ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_underflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6154203053885138787ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_cmdinval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6752376514444846582ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_csidinval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13624321265627002522ull);
    vlSelf->u_reg__DOT____Vcellout__u_error_status_accessinval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17668992555059706950ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_rxfull__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1415556036171074090ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_txempty__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11871833251196041282ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_rxwm__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13790795480924390142ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_txwm__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3292647766264850107ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_ready__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8816786369646214386ull);
    vlSelf->u_reg__DOT____Vcellout__u_event_enable_idle__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11056021749261230036ull);
    vlSelf->__PVT__u_reg__DOT__addr_hit = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1707141598254270963ull);
    vlSelf->__PVT__u_reg__DOT__racl_addr_hit_read = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8585413848809972901ull);
    vlSelf->__PVT__u_reg__DOT__racl_addr_hit_write = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12687896850897655739ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11574266446475270332ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423414613907967664ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2256186026647986869ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14679245591956115795ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16541598828330615877ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483838778198507855ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5942539646428459931ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950979359641051072ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17281764125264654366ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18083639633372268256ull);
    vlSelf->__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16665274587453694460ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i, __VscopeHash, 3934990351276401092ull);
    vlSelf->__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4611914375097554809ull);
    vlSelf->__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1221289747855986948ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4679568390029364162ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6329736833134573906ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696429526636382585ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706730600893819760ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6163554174737916675ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18377078999914101879ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982600420356756588ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983886618155008317ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107619224408584717ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11007983825990299790ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16507440504144729486ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12414235150457437157ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4298417715922207639ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567638118188061591ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_error__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6028052671386941591ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_error__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402362920825927548ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_error__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12088741457123826228ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6121213773561634922ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13209139967023587196ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable_error__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2065140079961698232ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_test_error__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15854696316023660576ull);
    vlSelf->__PVT__u_reg__DOT__u_alert_test__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16436641583869444746ull);
    vlSelf->__PVT__u_reg__DOT__u_control_output_en__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16776084192739342043ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txqd__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11638806520068288278ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txqd__DOT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4569272912456695884ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxqd__DOT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12429829789442078734ull);
    vlSelf->__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12232300412162166745ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxwm__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5123594890201366983ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxwm__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828364395516673746ull);
    vlSelf->__PVT__u_reg__DOT__u_status_byteorder__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8478089898703758962ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxstall__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18172406693356023220ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxstall__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7924988542064018475ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxempty__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7401830527574082023ull);
    vlSelf->__PVT__u_reg__DOT__u_status_rxfull__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12838558350385410200ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txwm__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3362248312754715335ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txwm__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1213674683504444696ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txstall__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3080808637270638695ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txstall__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800434713529561222ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txempty__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13966306903061317957ull);
    vlSelf->__PVT__u_reg__DOT__u_status_txfull__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12460690312198058107ull);
    vlSelf->__PVT__u_reg__DOT__u_status_active__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6362108987732232775ull);
    vlSelf->__PVT__u_reg__DOT__u_status_ready__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9626171746432142648ull);
    vlSelf->__PVT__u_reg__DOT__u_status_ready__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14941060122199203651ull);
    vlSelf->__PVT__u_reg__DOT__u_configopts_clkdiv__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7504111414464454756ull);
    vlSelf->__PVT__u_reg__DOT__u_csid__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14956280932724306192ull);
    vlSelf->__PVT__u_reg__DOT__u_command_csaat__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11810640714063484324ull);
    vlSelf->__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5940294172530737153ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7288101626311656469ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3853035464116348026ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3810851174113569490ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_overflow__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4440198033469939408ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9034218999039266208ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9284346975105821338ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_underflow__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9250223673599467443ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15468407078541729942ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2346702131023931155ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 713091462819596686ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13107210740346468736ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8791028926569572991ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_csidinval__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13449919766989035304ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1897294470926574377ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11489864879838486703ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_accessinval__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10213925074133132979ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_accessinval__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4837242989322338752ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8775351919361995028ull);
    vlSelf->__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16706168996971412946ull);
    vlSelf->__PVT__u_reg__DOT__u_event_enable_idle__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2627208348576076667ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 9549208911559383178ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6506106850482548443ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7722278225425451021ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7795135628363848939ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7588028009303454042ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8422792580351855289ull);
    VL_SCOPED_RAND_RESET_W(228, vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 12294467249641209942ull);
    vlSelf->u_cmd_queue__DOT__cmd_fifo__DOT____Vlvbound_h55a17f9b__0 = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 10576794017791681569ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18192249949890002922ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3251978555008152522ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2752251445793893237ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865109648261362692ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6723662086998412727ull);
    vlSelf->__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 342989948678491651ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4986340385188342457ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4017844162895977355ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 522652627636613238ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4700868944108887880ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15960712090365283702ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8919075064142877601ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14521205290688010326ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14858154641666042637ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1625408392791733885ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8181973287661744079ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15183739198496458946ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2394488416134733483ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6774394784416196712ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_window__DOT__u_adapter_rx__DOT__tlul_adapter_reg__DOT__u_rsp_intg_gen__DOT__tl_i, __VscopeHash, 680188890442925569ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12346120043664184871ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10153848587728153666ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__wmask_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 827596189059652994ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8142305363373151903ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__intg_error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 612514732745898379ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771051661604054337ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__d_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11921949194024371973ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__vld_rd_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5607045273983379744ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__error_blanking_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17112029232507198915ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__missed_err_gnt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17494383218703599426ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT____VdfgRegularize_h0072ca25_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10583054695551709480ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i, __VscopeHash, 12594604017005492141ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5084689135962163872ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15191998613767567738ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8004030140649331941ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11525213028969170045ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2770598878243803010ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1668862906563202386ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2265992906662844426ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8023707323932222238ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12525685537599832339ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355377643660349774ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3710360973074629344ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3109120456608749363ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12313816341511918891ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423557052458837655ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12433991808882642139ull);
    vlSelf->__PVT__u_window__DOT__u_adapter_tx__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18401534461458280991ull);
    vlSelf->__PVT__u_data_fifos__DOT__tx_be_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11497369638831585053ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17074561144863199075ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12310630362752176652ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__wdata_i = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 6591964849819898849ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6737783167717304637ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17318275019260513513ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5414029815343911675ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496456720767192665ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9370492890936732494ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17439071686761682072ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11733381728892990870ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798021785555044392ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841174554727587137ull);
    VL_SCOPED_RAND_RESET_W(2592, vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 18175433604189435848ull);
    vlSelf->u_data_fifos__DOT__u_tx_fifo__DOT____Vlvbound_h1acac003__0 = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10502116127579743363ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14677212188446461980ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10719168497223418358ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3031285742162178881ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17133264794843677868ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17592597045126410541ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4326154423210908306ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12284774572175673036ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6831193665758511741ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 637705179046422273ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17516392645433753327ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12179417200764300519ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__depth_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5774372102160957518ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 643052137759863398ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11742370126540306625ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11775897324747569591ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17972399836593139667ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159897347328882412ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 501616353665758229ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5091474274748416067ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7845046600135400933ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7359746124356232149ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7243044275736203238ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2599379406066284367ull);
    vlSelf->__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15770543765029314289ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__last_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17487199765014712151ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__do_fill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6657167199156815523ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 981528118534102093ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17360190055714964041ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10022790188036066975ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9115339958136122578ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14861212997675088945ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15600831626376819303ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9506535280803099296ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15288873376838136868ull);
    vlSelf->__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674994669186702ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1392147780663186904ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10070942082194272872ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13377966466516675181ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340700947078238470ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18000025299423245877ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10153069644577496592ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15991325058527658719ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8037763818363763057ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9933874129048232252ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 865913615231886914ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2266053096813336569ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8367403582289099746ull);
    vlSelf->__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14501299257470454004ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13366933839306885834ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__wr_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14874434149783629444ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__rd_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 333036729200572454ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__shift_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134557247128634871ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__full_cyc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7845252960342682375ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15464214392310255910ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16203963906495289055ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14957141656094194820ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15253427985982498096ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4123849036904918243ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9721386803751131016ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11680836537592047595ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10241389809590738517ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7900769700454333631ull);
    vlSelf->__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2785894689473875618ull);
    vlSelf->u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_hf6781d4b_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14081754776316931499ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3174203506917396611ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11675254440132311709ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2663790964298112791ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4034335174735769606ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7827820363285998535ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17187322787451918721ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5502928327028669975ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4203950235109913916ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3695779130800335986ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9673227860597121387ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5587467187522971836ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10019895394211314381ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10721154272925552148ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12414108605381541285ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cpha = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9741996626512377885ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cpol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14449221510296540059ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617136133223900128ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5098289352835451053ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8287457707355559958ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11919184500652943051ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14177863543144787902ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2609073634391001100ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 99904448526541203ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 284713491666784319ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5934255847776998241ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13482177645864797436ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13882654532870046778ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csaat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14627317513836644991ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2065339500172705917ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1536067781496428320ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2237393791062331961ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10764884959086947547ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1609667702842094597ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16964043241403039241ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4056565241737853381ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18410841104734092002ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4555772752463132639ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__last_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397078517863429706ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9307681589639138840ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10760467071337593503ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12705934571612174569ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5746961850124717654ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5850441513904836842ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15622413828479369085ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4078400220880434686ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11410997312978037880ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8452382475058405051ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__new_command = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16916607512147842894ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3879494557241799615ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4476668965802914210ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6529042224982316468ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18409993771611199491ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2945106625735160183ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492511062981810954ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13130878250906933356ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6728648490553553860ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17549936569941185975ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13437748222469879164ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7378934156634078611ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395296538760682946ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13526229693562622425ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13647986004206456051ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13964189512293244786ull);
    vlSelf->__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_last_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809960446169339954ull);
    vlSelf->u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h21696560_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10053671490991172416ull);
    vlSelf->__PVT__intr_hw_spi_event__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16909597967575842896ull);
    vlSelf->__VdfgRegularize_hf4aef21c_1_4 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17159402845482701813ull);
    vlSelf->__VdfgRegularize_hf4aef21c_1_5 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13863232055559899824ull);
    VL_SCOPED_RAND_RESET_W(106, vlSelf->__VdfgRegularize_hf4aef21c_1_6, __VscopeHash, 11925089133784082991ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443767646638904591ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10412255010806185859ull);
    vlSelf->__Vfunc_mubi4_test_invalid__5__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12677604734833202408ull);
    vlSelf->__Vfunc_mubi4_test_invalid__5__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2062164461568474315ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13490389477559648229ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16949656769346261169ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976253508738990664ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3085217849644718442ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254159213477385893ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15959678897842229011ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__12__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7419720573110369723ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__12__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7622537938708258416ull);
    vlSelf->__Vfunc_mubi4_test_invalid__14__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6404260813218107300ull);
    vlSelf->__Vfunc_mubi4_test_invalid__14__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8732658787019602792ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__15__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258626777180386108ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__15__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11202832581689567738ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__17__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814510512791603228ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__17__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16212409932623486019ull);
    vlSelf->__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2115718413769515715ull);
    vlSelf->__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7223299980537040571ull);
    vlSelf->__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18065929064953748678ull);
}

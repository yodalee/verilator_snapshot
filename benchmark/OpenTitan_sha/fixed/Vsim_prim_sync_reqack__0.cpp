// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__sys_clr_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__sys_clr_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_readcmd.u_readbuffer.u_sys2spi_clr.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__sys_clr_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_readcmd.u_readbuffer.u_sys2spi_clr.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_wrfifo_release_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_wrfifo_release_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_spi_tpm.u_wrfifo_release_reqack.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_wrfifo_release_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_spi_tpm.u_wrfifo_release_reqack.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.u_reg.u_wake_events_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.u_reg.u_wake_events_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwrmgr_aon.u_esc_timeout.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwrmgr_aon.u_esc_timeout.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io_div4.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_io_div4.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_por_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_shadowed.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_shadowed.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_shadowed.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_shadowed.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_aon.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_aon.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_io.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_io_div2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_lc_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_lc_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_sys.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_sys.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_sys_io_div4.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_daon_sys_io_div4.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_device.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_device.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_host0.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_host0.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_host1.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_spi_host1.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_usb.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_usb_aon.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_usb_aon.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c0.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c0.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c1.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c1.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.u_d0_i2c2.gen_rst_chk.u_rst_chk.u_child_handshake.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_div2_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_div2_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_div4_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_io_div4_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_main_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_main_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_usb_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_reg.u_usb_meas_ctrl_en_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_meas.u_err_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__src_err_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__src_err_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_meas.u_err_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__src_err_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div2_meas.u_err_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__src_err_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__src_err_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div2_meas.u_err_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__src_err_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div2_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div2_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div4_meas.u_err_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div4_meas.u_err_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div4_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_io_div4_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_main_meas.u_err_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__src_err_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__src_err_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_main_meas.u_err_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__src_err_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_main_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_main_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_usb_meas.u_err_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__src_err_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__src_err_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_usb_meas.u_err_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__src_err_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_usb_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        vlSelfRef.src_ack_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        vlSelfRef.src_ack_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o));
        if (vlSelfRef.src_ack_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.u_usb_meas.u_meas.gen_clk_timeout_chk.u_timeout_ref_to_clk.u_ref_timeout.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.u_reg.u_wkup_status_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.u_reg.u_wkup_status_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.u_sysrst_ctrl_intr.u_match_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (0U != vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_req_hold_q))
                      : (0U != vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_req_hold_q))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.u_sysrst_ctrl_intr.u_match_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (0U != vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_req_hold_q));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_chn_val_0_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_chn_val_0_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_chn_val_1_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_chn_val_1_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_filter_status_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_filter_status_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_fsm_state_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_reg.u_adc_fsm_state_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_req_o))
                      : (IData)(vlSelfRef.dst_req_o))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_adc_ctrl_core.u_adc_ctrl_intr.u_match_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        vlSelfRef.dst_req_o = (1U & (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelfRef.dst_req_o = (1U & (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o));
        if (vlSelfRef.dst_req_o) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__aon_req_hold_q)))
                      : (0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__aon_req_hold_q)))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.u_adc_ctrl_core.u_adc_ctrl_intr.u_match_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__aon_req_hold_q)));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.u_reg.u_wkup_cause_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.u_reg.u_wkup_cause_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_count_hi_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_count_hi_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_count_lo_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_count_lo_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wdog_count_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wdog_count_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_cause_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__src_req) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.u_reg.u_wkup_cause_cdc.u_arb.gen_wr_req.u_dst_update_sync.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
}

void Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__addr_key_req_d));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dst_ack_i = ((IData)(vlSelfRef.dst_req_o) 
                           & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__sel_tree__BRA__8__KET__) 
                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__req_ready)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelfRef.dst_ack_i) & (IData)(vlSelfRef.dst_req_o));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__addr_key_req_d))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__addr_key_req_d))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_flash_hw_if.u_addr_sync_reqack.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_ack_i))
                      : (IData)(vlSelfRef.dst_ack_i))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_flash_hw_if.u_addr_sync_reqack.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    vlSelfRef.dst_req_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
}

void Vsim_prim_sync_reqack___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__data_key_req_d));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dst_ack_i = ((IData)(vlSelfRef.dst_req_o) 
                           & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__sel_tree__BRA__7__KET__) 
                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__req_ready)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelfRef.dst_ack_i) & (IData)(vlSelfRef.dst_req_o));
    if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                      ? (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__data_key_req_d))
                      : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__data_key_req_d))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:225: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_flash_hw_if.u_data_sync_reqack.gen_nrz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 225, "");
            }
        }
    }
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

void Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__1(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                      ? (~ (IData)(vlSelfRef.dst_ack_i))
                      : (IData)(vlSelfRef.dst_ack_i))));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:269: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_flash_hw_if.u_data_sync_reqack.gen_nrz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 269, "");
            }
        }
    }
    vlSelfRef.dst_req_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__req_sync->q_o)));
}

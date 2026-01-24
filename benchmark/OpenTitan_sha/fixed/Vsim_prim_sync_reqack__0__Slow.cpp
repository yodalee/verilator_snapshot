// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__u_sys2spi_clr__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_wrfifo_release_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_esc_timeout__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
    vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.src_ack_o) & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__src_err_req));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_err_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_meas__DOT__u_meas__DOT__gen_clk_timeout_chk__DOT__u_timeout_ref_to_clk__DOT__u_ref_timeout__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__u_match_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_0_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_chn_val_1_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_filter_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_fsm_state_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_hi_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_count_lo_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wkup_cause_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

VL_ATTR_COLD void Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_sync_reqack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.src_ack_o = (1U & ((IData)(vlSelfRef.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                                  ? (~ (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o))
                                  : (IData)(vlSelf->__PVT__gen_nrz_hs_protocol__DOT__ack_sync->q_o)));
}

VL_ATTR_COLD void Vsim_prim_sync_reqack___ctor_var_reset(Vsim_prim_sync_reqack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_sync_reqack___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_src_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4001498580928466257ull);
    vlSelf->rst_src_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5051664114225530441ull);
    vlSelf->clk_dst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12851786363318594956ull);
    vlSelf->rst_dst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4194750565043001346ull);
    vlSelf->req_chk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9386278569647643568ull);
    vlSelf->src_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3578444759227314345ull);
    vlSelf->src_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14567545635509400643ull);
    vlSelf->dst_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17446671745685856735ull);
    vlSelf->dst_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1580889923121455252ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14474377771515930216ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3575310469899427468ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10701374475031217839ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15821366345750335565ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__src_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11373836029440574367ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__dst_ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14455102715863748394ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__src_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11509653567409266468ull);
    vlSelf->__PVT__gen_nrz_hs_protocol__DOT__dst_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9429502591670591859ull);
}

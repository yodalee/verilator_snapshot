// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__86(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__86\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_lc_to_mubi4__1583__Vfuncout;
    __Vfunc_lc_to_mubi4__1583__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_to_mubi4__1583__val;
    __Vfunc_lc_to_mubi4__1583__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1992__Vfuncout;
    __Vfunc_mubi4_test_true_strict__1992__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1992__val;
    __Vfunc_mubi4_test_true_strict__1992__val = 0;
    // Body
    __Vfunc_lc_to_mubi4__1583__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_rma_req_sync.__PVT__lc_en;
    __Vfunc_lc_to_mubi4__1583__Vfuncout = (3U ^ (IData)(__Vfunc_lc_to_mubi4__1583__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__mubi_rma_req 
        = __Vfunc_lc_to_mubi4__1583__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en = 1U;
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
                    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x13U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x1eU;
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__src_ack_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x13U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__load_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
              & (8U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
              & (8U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))));
    __Vfunc_mubi4_test_true_strict__1992__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__mubi_rma_req;
    __Vfunc_mubi4_test_true_strict__1992__Vfuncout 
        = (6U == (IData)(__Vfunc_mubi4_test_true_strict__1992__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request 
        = __Vfunc_mubi4_test_true_strict__1992__Vfuncout;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__rvalid_o) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))
            ? 0U : (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__load_data))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__rvalid_o) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))
            ? 0U : (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data))));
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vsim__ConstPool__TABLE_hf6e7d0b5_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hd79c3043_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hf49a9414_0;
extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h14a9b7cf_0;
extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h0a1e97b1_0;
extern const VlWide<20>/*639:0*/ Vsim__ConstPool__CONST_h7ca4bd95_0;
extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_hda9269f3_0;
extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;
extern const VlWide<28>/*895:0*/ Vsim__ConstPool__CONST_hab12d6e6_0;
extern const VlWide<12>/*383:0*/ Vsim__ConstPool__CONST_h997e551f_0;

void Vsim___024root___nba_sequent__TOP__87(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__87\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_conv_endian32__1445__Vfuncout;
    __Vfunc_conv_endian32__1445__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1445__v;
    __Vfunc_conv_endian32__1445__v = 0;
    IData/*31:0*/ __Vfunc_conv_endian32__1445__conv_data;
    __Vfunc_conv_endian32__1445__conv_data = 0;
    CData/*5:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    CData/*5:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*3:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel = 0;
    SData/*8:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding = 0;
    // Body
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel;
    vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__intg_error_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_seen_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_seen_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__idle_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__idle_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_on_blk_o)) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_1)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__hash_done_next));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__process_flag_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_empty_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__rvalid_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_stop_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_full_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__full_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st_next));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_hmac_fifo_empty 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_fifo_empty__DOT__hw2reg_intr_state_d_o) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_hmac_hmac_done 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_done__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__intr_hmac_hmac_err 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_err__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__missed_err_gnt_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i) 
               & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)) 
                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_en_q 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 3U));
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_fifo_wdata_sel) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel = 0U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wvalid))) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel)));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel 
            = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp)))) {
                __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)));
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp) {
            __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
                = (0x000001ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_en_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel 
            = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wdata_sel;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
            = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
        = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x00000020U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                              >> 5U)) << 5U));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__w_index_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__w_index_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__done_state_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__done_state_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_d[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000018U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000019U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_d[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_d;
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_err_code__DOT__q 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000032U] 
                                       >> 1U));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count_d[3U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__w_index_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q = 8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__done_state_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__hash_q[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q = 8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__w_q[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_err_code__DOT__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[3U] = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_1a0 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))
            ? (0x01a0U == (0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[0U]))
            : (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_flag_q))) 
               & (0x0340U == (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[0U]))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_buffer_q[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__msg_feed_complete_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_process_flag_q) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_flag_q)) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data = 0U;
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q) 
                      >> 1U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data 
                = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))
                    ? 4U : 3U);
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__sel_data 
            = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))
                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__st_q))
                    ? 2U : 1U) : 0U);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_d)
            : 8U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_4 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
           | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_d;
        if ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_fifo_empty__q 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
                         >> 0x0000001cU));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_d[0x0000000fU];
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_or_continue) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_allowed = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_allowed = 0U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data = 0ULL;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask = 0ULL;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_process_flag = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q = 0U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data_next;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask_next;
            if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hmac_hash_done) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_start_i)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_continue_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_process_flag = 0U;
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__g_pos_nodup__DOT__pos_d;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key_d[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__update_round) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_d;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_i) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0x000000ffU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                                   << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U] 
                                             >> 0x0000001cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U] 
                         >> 4U));
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__d_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if ((7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_fifo_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                         >> 1U));
        }
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_chk.err_o) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__accept_t_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_fifo_empty__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__msg_allowed = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__word_part_count_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__digest_mode_flag_q = 8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_process_flag = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__intr_hw_fifo_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__err_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__idle_q = 9U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sha2.sv:341: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_prim_sha2_512.gen_multimode_logic.u_prim_sha2_multimode: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sha2.sv", 341, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sha2.sv:426: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_prim_sha2_512.gen_multimode_logic.u_prim_sha2_multimode: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sha2.sv", 426, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__calculate_next_w = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__init_hash = 0U;
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
        if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__init_hash = 1U;
        }
    } else if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
        if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
            if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__init_hash = 1U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__run_hash = 0U;
    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
            if ((((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                  & (0x30U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))) 
                 | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                     | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q))) 
                    & (0x40U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__calculate_next_w = 1U;
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__run_hash = 1U;
        }
        if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
            if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__sha_st_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest = 1U;
            }
        }
    }
    __Vfunc_conv_endian32__1445__v = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_data);
    __Vfunc_conv_endian32__1445__conv_data = VL_STREAML_III(32, __Vfunc_conv_endian32__1445__v, 8U);
    __Vfunc_conv_endian32__1445__Vfuncout = __Vfunc_conv_endian32__1445__conv_data;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_fifo_wentry 
        = ((0x000000000000000fULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_fifo_wentry) 
           | ((QData)((IData)(__Vfunc_conv_endian32__1445__Vfuncout)) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_fifo_wentry 
        = ((0x0000000ffffffff0ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__reg_fifo_wentry) 
           | (IData)((IData)(((((2U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                                                             >> 8U)))) 
                               << 2U) | ((2U & ((IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                                                         >> 0x00000010U)) 
                                                << 1U)) 
                                         | (1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__stored_mask 
                                                          >> 0x00000018U))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length 
                                                       >> 0x20U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length)) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length 
                                                        >> 0x20U)))) 
                   >> 0x00000020U));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_packer.sv:248: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_packer: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_packer.sv", 248, "");
            }
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_fifo_empty__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_done__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_hmac_done__DOT__wr_data;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_err__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_enable_hmac_err__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_done__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_err__DOT__qe) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_intr_state_hmac_err__DOT__wr_data;
        }
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)) 
                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U] 
                      >> 0x0000001bU)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                = (0x003fffffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000035U] 
                                   << 5U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__reg2hw[0x00000034U] 
                                             >> 0x0000001bU)));
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hash_start_or_continue) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block = 1U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_done_o) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__hash_stop_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_done__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_done__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_state_hmac_err__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_hmac_err__q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg = 0x00204000U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_valid = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_st) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done 
            = (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_valid 
            = (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_fifo_wdata_sel = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hmac_hash_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata = 2U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wvalid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel = 0U;
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hmac_hash_done = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata = 2U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wsel 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)) 
               || (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q));
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__sel_rdata = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__one_chunk_done 
        = (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
            & (0x3fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_4) 
              & (0x4fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__round_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__update_digest_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__valid_o 
        = ((0x20U <= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__pos_q)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_valid));
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__clr_fifo_wdata_sel = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hmac_fifo_wvalid = 1U;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((4U == (0x0000000fU 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                          >> 0x0000000bU))) 
                               << 2U) | (((2U == (0x0000000fU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                     >> 0x0000000bU))) 
                                          << 1U) | 
                                         (1U == (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                    >> 0x0000000bU))))))))) {
        if ((0U != (((4U == (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                            >> 0x0000000bU))) 
                     << 2U) | (((2U == (0x0000000fU 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                           >> 0x0000000bU))) 
                                << 1U) | (1U == (0x0000000fU 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                    >> 0x0000000bU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: hmac.sv:288: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.cast_digest_size: unique case, but multiple matches found for '4'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),4,
                             (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                             >> 0x0000000bU)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/hmac.sv", 288, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x7e7fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7fffffffU & (((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg) 
                              | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                       >> 3U))) << 0x00000017U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x7f8fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7fffffffU & (((4U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                     >> 3U)) | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                      >> 9U)))) 
                             << 0x00000014U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000010U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000011U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q))) {
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[2U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000aU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[3U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000bU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[4U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000cU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[5U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000dU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[6U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000eU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[7U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000fU] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[8U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000010U] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1439__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1439__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.__Vfunc_conv_endian32__1439__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1439__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1439__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1439__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1439__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[9U] 
            = vlSelfRef.__Vfunc_conv_endian32__1439__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1440__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1440__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.__Vfunc_conv_endian32__1440__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1440__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1440__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1440__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1440__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000011U] 
            = vlSelfRef.__Vfunc_conv_endian32__1440__Vfuncout;
    } else if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__digest_size_started_q)))) {
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[1U];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[2U] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[3U] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[3U];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[4U] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[5U] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[5U];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[6U] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[7U] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[7U];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[8U] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[9U] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[9U];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000aU] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000bU] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000bU];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000cU] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000dU] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000dU];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000eU] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000fU] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1441__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1441__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000fU];
        vlSelfRef.__Vfunc_conv_endian32__1441__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1441__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1441__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1441__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1441__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000010U] 
            = vlSelfRef.__Vfunc_conv_endian32__1441__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1442__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1442__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.__Vfunc_conv_endian32__1442__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1442__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1442__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1442__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1442__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000011U] 
            = vlSelfRef.__Vfunc_conv_endian32__1442__Vfuncout;
    } else {
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[2U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0U];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000aU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[3U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[2U];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000bU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[4U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[4U];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000cU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[5U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[6U];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000dU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[6U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[8U];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000eU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[7U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000aU];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x0000000fU] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[8U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000cU];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000010U] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1443__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1443__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.__Vfunc_conv_endian32__1443__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1443__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1443__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1443__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1443__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[9U] 
            = vlSelfRef.__Vfunc_conv_endian32__1443__Vfuncout;
        vlSelfRef.__Vfunc_conv_endian32__1444__swap 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                     >> 7U));
        vlSelfRef.__Vfunc_conv_endian32__1444__v = 
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__gen_multimode__DOT__digest_q[0x0000000eU];
        vlSelfRef.__Vfunc_conv_endian32__1444__conv_data 
            = VL_STREAML_III(32, vlSelfRef.__Vfunc_conv_endian32__1444__v, 8U);
        vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_conv_endian32__1444__swap)
                ? vlSelfRef.__Vfunc_conv_endian32__1444__conv_data
                : vlSelfRef.__Vfunc_conv_endian32__1444__v);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000011U] 
            = vlSelfRef.__Vfunc_conv_endian32__1444__Vfuncout;
    }
    __Vtableidx78 = (0x0000003fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                    >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length 
        = Vsim__ConstPool__TABLE_hf6e7d0b5_0[__Vtableidx78];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i 
        = ((1U == (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                  >> 0x0000000bU)))
            ? 1U : ((2U == (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                           >> 0x0000000bU)))
                     ? 2U : ((4U == (0x0000000fU & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                      >> 0x0000000bU)))
                              ? 4U : 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
        = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[1U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[1U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[2U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[2U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[3U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[3U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[4U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[4U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[5U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[5U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[6U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[6U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[7U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[7U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[8U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[8U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[9U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[9U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000aU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000aU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000bU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000bU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000cU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000cU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000dU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000dU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000eU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000eU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000fU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000fU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000010U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000011U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000012U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000013U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000014U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000015U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000016U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000017U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000018U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000019U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001aU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001bU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001cU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001dU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001eU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
                                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001fU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[1U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[1U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[2U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[2U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[3U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[3U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[4U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[4U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[5U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[5U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[6U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[6U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[7U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[7U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[8U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[8U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[9U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[9U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000aU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000aU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000bU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000bU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000cU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000cU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000dU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000dU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000eU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000eU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000fU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000000fU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000010U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000011U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000012U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000013U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000014U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000015U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000016U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000017U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000018U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000019U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001aU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001bU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001cU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001dU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001eU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
                                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001fU] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
                                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[1U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[1U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[2U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[2U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[3U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[3U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[4U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[4U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[5U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[5U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[6U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[6U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[7U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[7U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[8U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[8U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[9U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[9U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000aU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000bU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000cU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000dU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000eU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000fU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000010U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000011U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000012U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000013U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000014U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000015U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000016U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000017U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000018U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000019U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001aU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001bU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001cU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001dU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001eU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
                            = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001fU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[1U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[2U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[3U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[4U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[5U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[6U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[7U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[8U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[9U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000aU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000bU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000cU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000dU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000eU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
                            = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000fU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[1U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[1U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[2U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[2U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[3U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[3U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[4U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[4U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[5U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[5U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[6U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[6U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[7U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[7U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[8U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[8U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[9U] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[9U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000aU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000bU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000cU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000dU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000eU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000fU] 
                               ^ Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000010U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000011U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000012U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000013U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000014U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000015U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000016U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000017U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000018U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000019U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001aU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001bU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001cU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001dU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001eU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
                            = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001fU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000010U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[1U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000011U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[2U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000012U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[3U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000013U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[4U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[5U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[6U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[7U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[8U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[9U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000aU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000bU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000cU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000dU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000eU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
                            = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000fU] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[1U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[1U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[2U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[2U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[3U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[3U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[4U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[4U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[5U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[5U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[6U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[6U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[7U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[7U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[8U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[8U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[9U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[9U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000aU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000bU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000cU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000dU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000eU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000fU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000010U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000011U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000012U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000013U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000014U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000015U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000016U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000017U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000018U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000019U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001aU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001bU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001cU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001dU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001eU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
                        = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001fU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
                        = Vsim__ConstPool__CONST_h14a9b7cf_0[0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
                        = Vsim__ConstPool__CONST_h14a9b7cf_0[1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
                        = Vsim__ConstPool__CONST_h14a9b7cf_0[2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
                        = Vsim__ConstPool__CONST_h14a9b7cf_0[3U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[4U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[5U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[6U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[7U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[8U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[9U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000aU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000bU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000cU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000dU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000eU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
                        = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000fU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[1U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[1U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[2U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[2U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[3U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[3U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[4U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[4U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[5U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[5U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[6U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[6U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[7U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[7U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[8U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[8U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[9U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[9U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000aU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000bU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000cU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000dU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000eU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000fU] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000010U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000011U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000012U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000013U] 
                           ^ Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000014U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000015U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000016U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000017U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000018U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000019U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001aU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001bU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001cU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001dU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001eU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
                        = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001fU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
                        = Vsim__ConstPool__CONST_h0a1e97b1_0[0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
                        = Vsim__ConstPool__CONST_h0a1e97b1_0[1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
                        = Vsim__ConstPool__CONST_h0a1e97b1_0[2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
                        = Vsim__ConstPool__CONST_h0a1e97b1_0[3U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[4U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000014U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[5U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000015U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[6U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000016U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[7U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000017U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[8U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[9U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000aU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000bU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000cU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000dU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000eU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
                        = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000fU] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                }
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[1U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[1U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[2U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[2U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[3U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[3U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[4U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[4U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[5U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[5U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[6U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[6U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[7U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[7U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[8U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[8U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[9U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[9U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000aU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000bU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000cU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000dU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000eU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000fU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000010U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000011U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000012U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000013U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000014U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000015U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000016U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000017U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000018U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000019U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001aU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001bU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001cU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001dU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001eU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
                    = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001fU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[0U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[1U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[1U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[2U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[2U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[3U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[3U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[4U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[4U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[5U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[5U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[6U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[6U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[7U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[7U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[8U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[9U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000aU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000bU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000cU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000dU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000eU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
                    = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000fU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[1U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[1U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[2U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[2U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[3U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[3U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[4U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[4U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[5U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[5U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[6U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[6U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[7U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[7U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[8U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[8U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[9U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[9U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000aU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000bU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000cU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000dU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000eU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000fU] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000010U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000011U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000012U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000013U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000014U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000015U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000016U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000017U] 
                       ^ Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000018U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000019U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001aU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001bU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001cU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001dU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001eU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
                    = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001fU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[0U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[1U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[1U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[2U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[2U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[3U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[3U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[4U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[4U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[5U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[5U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[6U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[6U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[7U] 
                       ^ Vsim__ConstPool__CONST_h9e67c271_0[7U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[8U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000018U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[9U] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x00000019U]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000aU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001aU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000bU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001bU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000cU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000dU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000eU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
                    = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000fU] 
                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
            }
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[1U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[1U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[1U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[2U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[2U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[2U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[3U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[3U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[3U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[4U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[4U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[4U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[5U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[5U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[5U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[6U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[6U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[6U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[7U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[7U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[7U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[8U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[8U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[8U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[9U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[9U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[9U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000aU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000aU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000bU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000bU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000cU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000cU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000dU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000dU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000eU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000eU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000000fU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000000fU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000fU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000010U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000010U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000010U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000011U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000011U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000011U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000012U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000012U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000012U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000013U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000013U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000013U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000014U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000014U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000014U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000015U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000015U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000015U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000016U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000016U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000016U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000017U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000017U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000017U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000018U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000018U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000018U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x00000019U] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x00000019U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000019U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001aU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001aU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000001aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001bU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001bU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000001bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001cU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001cU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001dU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001dU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001eU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001eU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_512[0x0000001fU] 
                = (Vsim__ConstPool__CONST_hd79c3043_0[0x0000001fU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[1U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[1U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[1U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[2U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[2U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[2U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[3U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[3U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[3U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[4U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[4U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[4U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[5U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[5U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[5U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[6U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[6U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[6U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[7U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[7U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[7U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[8U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[8U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[8U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[9U] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[9U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[9U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000aU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000aU] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0x0000000aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000bU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000bU] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0x0000000bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000cU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000cU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000dU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000dU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000eU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000eU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__o_pad_256[0x0000000fU] 
                = (Vsim__ConstPool__CONST_h14a9b7cf_0[0x0000000fU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[1U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[1U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[1U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[2U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[2U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[2U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[3U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[3U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[3U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[4U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[4U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[4U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[5U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[5U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[5U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[6U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[6U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[6U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[7U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[7U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[7U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[8U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[8U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[8U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[9U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[9U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[9U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000aU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000aU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000bU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000bU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000cU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000cU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000dU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000dU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000eU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000eU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000000fU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000000fU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000000fU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000010U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000010U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000010U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000011U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000011U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000011U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000012U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000012U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000012U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000013U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000013U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000013U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000014U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000014U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000014U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000015U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000015U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000015U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000016U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000016U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000016U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000017U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000017U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000017U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000018U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000018U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000018U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x00000019U] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x00000019U] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x00000019U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001aU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001aU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000001aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001bU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001bU] 
                   ^ Vsim__ConstPool__CONST_hab12d6e6_0[0x0000001bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001cU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001cU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001dU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001dU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001eU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001eU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_512[0x0000001fU] 
                = (Vsim__ConstPool__CONST_hf49a9414_0[0x0000001fU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[1U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[1U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[1U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[2U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[2U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[2U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[3U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[3U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[3U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[4U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[4U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[4U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[5U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[5U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[5U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[6U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[6U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[6U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[7U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[7U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[7U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[8U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[8U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[8U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[9U] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[9U] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[9U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000aU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000aU] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0x0000000aU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000bU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000bU] 
                   ^ Vsim__ConstPool__CONST_h997e551f_0[0x0000000bU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000cU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000cU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001cU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000dU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000dU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001dU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000eU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000eU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001eU]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__i_pad_256[0x0000000fU] 
                = (Vsim__ConstPool__CONST_h0a1e97b1_0[0x0000000fU] 
                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__secret_key[0x0000001fU]);
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_done_o 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hmac_hash_done)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__sha_hash_done));
    if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                               << 2U) | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))))))) {
        if ((0U != (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                     << 2U) | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                                << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: hmac_core.sv:240: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.u_hmac: unique case, but multiple matches found for '4'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),4,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/hmac_core.sv", 240, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U] 
        = ((0x7ff003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__hw2reg[0x00000033U]) 
           | (0x7ffffc00U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i) 
                              << 0x00000010U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length) 
                                                 << 0x0000000aU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz = 0U;
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz 
            = ((0U == (0x000001ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount))) 
               & (0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount));
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz 
            = ((0U == (0x000003ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount))) 
               & (0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount));
    } else if ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcnt_eq_blksz 
            = ((0U == (0x000003ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount))) 
               & (0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config 
        = ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
           | (((0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)) 
               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                  >> 1U)) | ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__key_length)) 
                             & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                   >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT____VdfgRegularize_hf9cc5a99_0_3 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)) 
           | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__unnamedblk4__DOT__i = 0x00000020U;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_1227 = (1U 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg 
                                                       >> 3U) 
                                                      & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_block)) 
                                                         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__invalid_config)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q)
                ? ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))
                    ? 0x0000000000000300ULL : ((2U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))
                                                ? 0x0000000000000580ULL
                                                : 0x0000000000000600ULL))
                : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__digest_mode_i))
                    ? (0x0000000000000200ULL + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length)
                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT____VdfgRegularize_hf9cc5a99_0_3)
                        ? (0x0000000000000400ULL + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length)
                        : 0ULL))) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__message_length);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_on_blk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_1) 
           & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__fifo_st_q)) 
              & (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__digest_mode_flag_q)) 
                  & (0U == (0x000001ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i)))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT____VdfgRegularize_h36de36a6_0_4) 
                    & (0U == (0x000003ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__txcnt_eq_msg_len 
        = (0U == (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i) 
                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[0U]) 
                    | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i 
                                >> 0x00000020U)) ^ 
                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[1U])) 
                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[2U]) 
                  | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__u_pad__DOT__tx_count[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_process = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__st_q)))) {
                if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__reg_hash_process_flag) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q)) 
                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__txcount 
                        >= vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__message_length_i))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_process 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__round_q;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__hash_process_i 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__cfg_reg)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_hmac__DOT__hash_process) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done))
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_packer__DOT__flush_done));
}

void Vsim___024root___nba_sequent__TOP__88(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__88\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1758[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1758[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h
            [1U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1758[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__tl_socket_d2h
            [1U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][0U]) | ((0x0000fffeU & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1764)) 
                         | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                           : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][1U]) | (0xffff0000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1758[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][2U]) | (1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1758[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                               << 1U)));
}

void Vsim___024root___nba_sequent__TOP__89(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__89\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                                << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_p2s.sv:110: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_p2s: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_p2s.sv", 110, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift 
        = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                ? (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                  >> 1U)) : (0x000000feU 
                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                                << 1U)))
            : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))
                ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                    ? (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                      >> 2U)) : (0x000000fcU 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                                    << 2U)))
                : ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))
                    ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                        ? (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                          >> 4U)) : 
                       (0x000000f0U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d) 
                                       << 4U))) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d))));
}

void Vsim___024root___nba_sequent__TOP__90(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__90\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 = 0;
    CData/*0:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 = 0;
    QData/*38:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    QData/*63:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0 = 0;
    // Body
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 = 0U;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0 = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__req_q_b) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__write_q_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0x00000016U;
            if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q);
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
            if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 1U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 1U;
            }
            if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 2U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 1U;
            }
            if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 3U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 1U;
            }
            if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 4U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4 = 1U;
            }
            if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 5U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5 = 1U;
            }
            if ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 6U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6 = 1U;
            }
            if ((0x00000080U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 7U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7 = 1U;
            }
            if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 8U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8 = 1U;
            }
            if ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 9U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9 = 1U;
            }
            if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0aU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10 = 1U;
            }
            if ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0bU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11 = 1U;
            }
            if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0cU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12 = 1U;
            }
            if ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0dU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13 = 1U;
            }
            if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0eU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14 = 1U;
            }
            if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x0fU));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15 = 1U;
            }
            if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x10U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16 = 1U;
            }
            if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x11U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17 = 1U;
            }
            if ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x12U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18 = 1U;
            }
            if ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x13U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19 = 1U;
            }
            if ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x14U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20 = 1U;
            }
            if ((0x00200000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__wdata_q 
                             >> 0x15U));
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h7dcde7a8__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__write_q_b)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__addr_q];
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_q_b) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_q_b) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            if ((0x0000007fffffffffULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wmask_q)) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h96896b7d__0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__wdata_scr;
                __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h96896b7d__0;
                __VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_mux;
                __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_q_b)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_mux];
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__fifo_incr_wptr) {
        __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0 
            = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__fifo_h__DOT__rspfifo__DOT__wdata_i[2U])) 
                << 0x0000003fU) | (((QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__fifo_h__DOT__rspfifo__DOT__wdata_i[1U])) 
                                    << 0x0000001fU) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__fifo_h__DOT__rspfifo__DOT__wdata_i[0U])) 
                                      >> 1U)));
        __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0 = 1U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__storage 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, 
                                                       (1U 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 1U)))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__storage)) 
               | (0x0fU & ((3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                  >> 4U)) << (3U & 
                                              VL_SHIFTL_III(2,32,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 1U)))));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rsp_data 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_i[1U] 
                << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_i[0U] 
                                   >> 0x00000010U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
            = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
            = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
            = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
            = (0x000000ffU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                              >> 1U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
            = ((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.__PVT__u_reg_if__DOT__rdata_q)) 
               << 2U);
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT____Vlvbound_h483d06d2__0 
            = (0x0000001eU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                              >> 0x00000017U));
        if ((9U >= (0x0000000fU & ((IData)(5U) * (1U 
                                                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x001fU) << (0x0000000fU 
                                             & ((IData)(5U) 
                                                * (1U 
                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | (0x03ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT____Vlvbound_h483d06d2__0) 
                                 << (0x0000000fU & 
                                     ((IData)(5U) * 
                                      (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))));
        }
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT____Vlvbound_h87ed5fe8__0 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i;
        if ((0x4fU >= (0x0000007fU & ((IData)(0x00000028U) 
                                      * (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            VL_ASSIGNSEL_WQ(80, 40, (0x0000007fU & 
                                     ((IData)(0x00000028U) 
                                      * (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT____Vlvbound_h87ed5fe8__0);
        }
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i;
    }
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT____Vlvbound_h9a31ea8f__0 
            = ((((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                               >> 9U))) ? 1U : 0U) 
                << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o) 
                                    << 0x0000000eU) 
                                   | ((0x00003c00U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                          >> 5U)) | 
                                      (0x000003ffU 
                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                           << 4U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                                           >> 0x0000001cU))))));
        if ((0x21U >= (0x0000003fU & ((IData)(0x00000011U) 
                                      * (1U & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ (0x000000000001ffffULL << (0x0000003fU 
                                                  & ((IData)(0x00000011U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) 
                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT____Vlvbound_h9a31ea8f__0)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x00000011U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))));
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__storage 
            = (((~ ((IData)(0x0fU) << (7U & VL_SHIFTL_III(3,32,32, 
                                                          (1U 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 2U)))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__storage)) 
               | (0x00ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__idx_o) 
                             << (7U & VL_SHIFTL_III(3,32,32, 
                                                    (1U 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 2U)))));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x0000001eU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000016U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                               >> 8U))) ? 1U : 0U) 
                << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i) 
                                    << 0x0000000eU) 
                                   | ((0x00003c00U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245 
                                          >> 4U)) | 
                                      (0x000003ffU 
                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                           << 5U) | 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                           >> 0x0000001bU))))));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage[0U] 
            = __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__storage__v0;
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = ((0x003ffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0]) 
               | (IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1] 
            = ((0x003ffffdU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) 
                  << 1U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2] 
            = ((0x003ffffbU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) 
                  << 2U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3] 
            = ((0x003ffff7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) 
                  << 3U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4] 
            = ((0x003fffefU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4) 
                  << 4U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5] 
            = ((0x003fffdfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5) 
                  << 5U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6] 
            = ((0x003fffbfU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6) 
                  << 6U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7] 
            = ((0x003fff7fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7) 
                  << 7U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8] 
            = ((0x003ffeffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v8) 
                  << 8U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9] 
            = ((0x003ffdffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v9) 
                  << 9U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10] 
            = ((0x003ffbffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v10) 
                  << 0x0000000aU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11] 
            = ((0x003ff7ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v11) 
                  << 0x0000000bU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12] 
            = ((0x003fefffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v12) 
                  << 0x0000000cU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13] 
            = ((0x003fdfffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v13) 
                  << 0x0000000dU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14] 
            = ((0x003fbfffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v14) 
                  << 0x0000000eU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15] 
            = ((0x003f7fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v15) 
                  << 0x0000000fU));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16] 
            = ((0x003effffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v16) 
                  << 0x00000010U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17] 
            = ((0x003dffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v17) 
                  << 0x00000011U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18] 
            = ((0x003bffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v18) 
                  << 0x00000012U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19] 
            = ((0x0037ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v19) 
                  << 0x00000013U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20] 
            = ((0x002fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v20) 
                  << 0x00000014U));
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21] 
            = ((0x001fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21]) 
               | ((IData)(__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v21) 
                  << 0x00000015U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i 
        = ((((0x0000ff00U & (((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U])
                               ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                     >> 0x0000000fU))
                               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rsp_data 
                                  >> 0x00000018U)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x02000000U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U])
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                  >> 7U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rsp_data 
                                               >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x01000000U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U])
                                                 ? 
                                                ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                  << 1U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                                    >> 0x0000001fU))
                                                 : 
                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rsp_data 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00800000U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U])
                                                  ? 
                                                 ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                                   << 9U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                                     >> 0x00000017U))
                                                  : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rsp_data))));
}

void Vsim___024root___nba_sequent__TOP__91(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__91\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0 = 0;
    // Body
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0 = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_incr_wptr) {
        __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0 
            = ((0xffffffffffff8000ULL & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                          << 0x0000003fU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                             << 0x0000001fU) 
                                            | (0x7fffffffffff8000ULL 
                                               & ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 1U))))) 
               | (QData)((IData)((((((((2U & (VL_REDXOR_32(
                                                           (0x10U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                              << 1U)) 
                                       | (1U & (~ VL_REDXOR_32(
                                                               (8U 
                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                      << 6U) | (((2U 
                                                  & (VL_REDXOR_32(
                                                                  (4U 
                                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       VL_REDXOR_32(
                                                                    (0x22U 
                                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                << 4U)) 
                                    | ((((2U & (VL_REDXOR_32(
                                                             (0x21U 
                                                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                        << 2U) | ((2U 
                                                   & (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x98505586U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
                                   << 7U) | (((((2U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0x2dcc624cU 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0xc2c1323bU 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                               << 5U) 
                                              | (((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0x31234ed1U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x413d89aaU 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1388[0U] 
                                                         >> 1U)))))))));
        __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0 = 1U;
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage[0U] 
            = __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__storage__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__92(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__92\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0 = 0;
    // Body
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0 = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_incr_wptr) {
        __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0 
            = ((0xffffffffffff8000ULL & (((QData)((IData)(
                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                          << 0x0000003fU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                             << 0x0000001fU) 
                                            | (0x7fffffffffff8000ULL 
                                               & ((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 1U))))) 
               | (QData)((IData)((((((((2U & (VL_REDXOR_32(
                                                           (0x10U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                              << 1U)) 
                                       | (1U & (~ VL_REDXOR_32(
                                                               (8U 
                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                      << 6U) | (((2U 
                                                  & (VL_REDXOR_32(
                                                                  (4U 
                                                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       VL_REDXOR_32(
                                                                    (0x22U 
                                                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                << 4U)) 
                                    | ((((2U & (VL_REDXOR_32(
                                                             (0x21U 
                                                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                        << 2U) | ((2U 
                                                   & (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x98505586U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
                                   << 7U) | (((((2U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0x2dcc624cU 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0xc2c1323bU 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                               << 5U) 
                                              | (((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0x31234ed1U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x413d89aaU 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_socket.__VdfgRegularize_h6e95ff9d_0_1389[0U] 
                                                         >> 1U)))))))));
        __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0 = 1U;
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage[0U] 
            = __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__storage__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__93(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__93\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0;
    __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0;
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0 = 0;
    // Body
    __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0 = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_incr_wptr) {
        __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0 
            = ((0xffffffffffff8000ULL & (((QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                          << 0x0000003fU) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                             << 0x0000001fU) 
                                            | (0x7fffffffffff8000ULL 
                                               & ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 1U))))) 
               | (QData)((IData)((((((((2U & (VL_REDXOR_32(
                                                           (0x10U 
                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                              << 1U)) 
                                       | (1U & (~ VL_REDXOR_32(
                                                               (8U 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                      << 6U) | (((2U 
                                                  & (VL_REDXOR_32(
                                                                  (4U 
                                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       VL_REDXOR_32(
                                                                    (0x22U 
                                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                << 4U)) 
                                    | ((((2U & (VL_REDXOR_32(
                                                             (0x21U 
                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  VL_REDXOR_32(
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                        << 2U) | ((2U 
                                                   & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x98505586U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))) 
                                   << 7U) | (((((2U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0x2dcc624cU 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0xc2c1323bU 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                               << 5U) 
                                              | (((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0x31234ed1U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x413d89aaU 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_data_intg__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_892[0U] 
                                                         >> 1U)))))))));
        __VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0 = 1U;
    }
    if (__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage[0U] 
            = __VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__storage__v0;
    }
}

extern const VlWide<15>/*479:0*/ Vsim__ConstPool__CONST_h9eac98e6_0;

void Vsim___024root___nba_sequent__TOP__94(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__94\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<15>/*461:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0;
    VL_ZERO_W(462, chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0);
    VlWide<44>/*1385:0*/ __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q;
    VL_ZERO_W(1386, __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q);
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000002bU)) {
        __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp1] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__unnamedblk3__DOT__i = 2U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000fU] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000eU] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[1U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[1U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000010U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000fU] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[2U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[2U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000011U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000010U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[3U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[3U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000012U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000011U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[4U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[4U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000013U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000012U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[5U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[5U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000014U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000013U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[6U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[6U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000015U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000014U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[7U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[7U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000016U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000015U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[8U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[8U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000017U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000016U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[9U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[9U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000018U] 
             << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000017U] 
                                >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000aU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000019U] 
               << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000018U] 
                                  >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000bU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001aU] 
               << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000019U] 
                                  >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000cU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001bU] 
               << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001aU] 
                                  >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000dU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000dU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU] 
               << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001bU] 
                                  >> 0x0000000eU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000eU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000eU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001dU] 
               << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU] 
                                  >> 0x0000000eU)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[1U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[1U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[2U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[2U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[3U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[3U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[4U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[4U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[5U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[5U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[6U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[6U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[7U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[7U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[8U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[8U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[9U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[9U];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000aU] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000aU];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000bU] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000bU];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000cU] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000cU];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000dU] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000dU];
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000eU] 
        = ((0xffffc000U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000eU]) 
           | chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000eU]);
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001dU] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[1U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[1U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001eU] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001dU] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[2U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[2U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001fU] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001eU] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[3U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[3U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000020U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001fU] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[4U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[4U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000021U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000020U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[5U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[5U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000021U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[6U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[6U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000023U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[7U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[7U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000024U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000023U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[8U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[8U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000025U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000024U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[9U] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[9U] & 
           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000026U] 
             << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000025U] 
                       >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000aU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000aU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000027U] 
               << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000026U] 
                         >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000bU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000bU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000028U] 
               << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000027U] 
                         >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000cU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000cU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000029U] 
               << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000028U] 
                         >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000dU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000dU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU] 
               << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000029U] 
                         >> 0x0000001cU)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000eU] 
        = (Vsim__ConstPool__CONST_h9eac98e6_0[0x0000000eU] 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002bU] 
               << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU] 
                         >> 0x0000001cU)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000eU] 
        = ((0x00003fffU & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000eU]) 
           | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0U] 
              << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000000fU] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[1U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000010U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[1U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[2U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000011U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[2U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[3U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000012U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[3U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[4U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000013U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[4U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[5U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000014U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[5U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[6U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000015U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[6U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[7U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000016U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[7U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[8U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000017U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[8U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[9U] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000018U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[9U] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000aU] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000019U] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000aU] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000bU] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001aU] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000bU] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000cU] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001bU] 
        = ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000cU] 
            >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000dU] 
                               << 0x0000000eU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU] 
        = ((0xf0000000U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU]) 
           | ((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000dU] 
               >> 0x00000012U) | (chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h9b52d2e8__0[0x0000000eU] 
                                  << 0x0000000eU)));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU] 
        = ((0x0fffffffU & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001cU]) 
           | ((((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
                 << 0x0000001cU) | (0x0ffffff0U & (
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[0U] 
                                                   >> 4U))) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__g_clock_en_secure__DOT__u_prim_core_busy_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
              << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001dU] 
        = (((((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
               << 0x0000001cU) | (0x0ffffff0U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[0U] 
                                                 >> 4U))) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__g_clock_en_secure__DOT__u_prim_core_busy_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
            >> 4U) | (((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
                                       >> 4U)) | ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffffff0U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
                                                        >> 4U)))) 
                      << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001eU] 
        = ((((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
                             >> 4U)) | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                                         << 0x0000001cU) 
                                        | (0x0ffffff0U 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[1U] 
                                              >> 4U)))) 
            >> 4U) | (((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                                       >> 4U)) | ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffffff0U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                                                        >> 4U)))) 
                      << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000001fU] 
        = ((((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                             >> 4U)) | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                                         << 0x0000001cU) 
                                        | (0x0ffffff0U 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[2U] 
                                              >> 4U)))) 
            >> 4U) | (((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                                       >> 4U)) | ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffffff0U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                                                        >> 4U)))) 
                      << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000020U] 
        = ((((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                             >> 4U)) | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                                         << 0x0000001cU) 
                                        | (0x0ffffff0U 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[3U] 
                                              >> 4U)))) 
            >> 4U) | (((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                                       >> 4U)) | ((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffffff0U 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                                                        >> 4U)))) 
                      << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000021U] 
        = ((((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                             >> 4U)) | ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                         << 0x0000001cU) 
                                        | (0x0ffffff0U 
                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[4U] 
                                              >> 4U)))) 
            >> 4U) | (((0xffffffe0U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.ic_scr_key_req_o) 
                                        << 6U) | ((0U 
                                                   != vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i) 
                                                  << 5U))) 
                       | ((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                          >> 4U)) | 
                          (0x00000010U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                          >> 4U)))) 
                      << 0x0000001cU));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U] 
        = ((0xfffffff8U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U]) 
           | (((0xffffffe0U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.ic_scr_key_req_o) 
                                << 6U) | ((0U != vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i) 
                                          << 5U))) 
               | ((0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                  >> 4U)) | (0x00000010U 
                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_314[5U] 
                                                >> 4U)))) 
              >> 4U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U] 
        = ((7U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000022U]) 
           | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[6U] 
              << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000023U] 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[6U] 
            >> 0x0000001dU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[7U] 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000024U] 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[7U] 
            >> 0x0000001dU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[8U] 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000025U] 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[8U] 
            >> 0x0000001dU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[9U] 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000026U] 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1179[9U] 
            >> 0x0000001dU) | ((IData)((0x01ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000eU])) 
                                            << 0x00000032U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000dU])) 
                                               << 0x00000012U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000cU])) 
                                                 >> 0x0000000eU))))) 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000027U] 
        = (((IData)((0x01ffffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000eU])) 
                                               << 0x00000032U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000dU])) 
                                                  << 0x00000012U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000cU])) 
                                                    >> 0x0000000eU))))) 
            >> 0x0000001dU) | (((0xfe000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x0000000fU] 
                                                << 0x0000000aU)) 
                                | (IData)(((0x01ffffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000eU])) 
                                                << 0x00000032U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000dU])) 
                                                   << 0x00000012U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000cU])) 
                                                     >> 0x0000000eU)))) 
                                           >> 0x00000020U))) 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000028U] 
        = ((((0xfe000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x0000000fU] 
                             << 0x0000000aU)) | (IData)(
                                                        ((0x01ffffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000eU])) 
                                                              << 0x00000032U) 
                                                             | (((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000dU])) 
                                                                 << 0x00000012U) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1181[0x0000000cU])) 
                                                                   >> 0x0000000eU)))) 
                                                         >> 0x00000020U))) 
            >> 0x0000001dU) | ((((0x01fffc00U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                                                 << 0x0000000aU)) 
                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x0000000fU] 
                                    >> 0x00000016U)) 
                                | (0xfe000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                                                  << 0x0000000aU))) 
                               << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x00000029U] 
        = (((((0x01fffc00U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                              << 0x0000000aU)) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x0000000fU] 
                                                  >> 0x00000016U)) 
             | (0xfe000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                               << 0x0000000aU))) >> 0x0000001dU) 
           | ((((0x01fffc00U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000011U] 
                                << 0x0000000aU)) | 
                (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                 >> 0x00000016U)) | (0xfe000000U & 
                                     (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000011U] 
                                      << 0x0000000aU))) 
              << 3U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU] 
        = ((0xffffff00U & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU]) 
           | (((((0x01fffc00U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000011U] 
                                 << 0x0000000aU)) | 
                 (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000010U] 
                  >> 0x00000016U)) | (0xfe000000U & 
                                      (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000011U] 
                                       << 0x0000000aU))) 
               >> 0x0000001dU) | (0x000000f8U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_1183[0x00000011U] 
                                                 >> 0x00000013U))));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU] 
        = ((0x000000ffU & __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002aU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o)) 
                        << 0x00000021U) | (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr)) 
                                            << 3U) 
                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o))))) 
              << 8U));
    __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x0000002bU] 
        = (0x000003ffU & (((IData)((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o)) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr)) 
                                        << 3U) | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o))))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o)) 
                                                         << 0x00000021U) 
                                                        | (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr)) 
                                                            << 3U) 
                                                           | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o)))) 
                                                       >> 0x00000020U)) 
                                              << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_d[0x0000000eU];
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000002bU)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp2] 
            = __Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}

void Vsim___024root___nba_sequent__TOP__95(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__95\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_dv_test_status__0__passed;
    __Vtask_dv_test_status__0__passed = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT_____05Frtlmeter_utils_u__DOT__cycles 
        = (1ULL + vlSelfRef.chip_sim_tb__DOT_____05Frtlmeter_utils_u__DOT__cycles);
    if (VL_UNLIKELY((vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.sw_test_done))) {
        VL_WRITEF_NX("Verilator sim termination requested\nYour simulation wrote to 0x%x\n",0,
                     32,vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.sw_test_status_addr);
        Verilated::runFlushCallbacks();
        __Vtask_dv_test_status__0__passed = vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.sw_test_passed;
        if (__Vtask_dv_test_status__0__passed) {
            VL_WRITEF_NX("\nTEST PASSED CHECKS\n _____         _                                  _ _ \n|_   _|__  ___| |_   _ __   __ _ ___ ___  ___  __| | |\n  | |/ _ \\/ __| __| | '_ \\ / _` / __/ __|/ _ \\/ _` | |\n  | |  __/\\__ \\ |_  | |_) | (_| \\__ \\__ \\  __/ (_| |_|\n  |_|\\___||___/\\__| | .__/ \\__,_|___/___/\\___|\\__,_(_)\n                    |_|                               \n\n",0);
            Verilated::runFlushCallbacks();
        } else {
            VL_WRITEF_NX("\nTEST FAILED CHECKS\n _____         _      __       _ _          _ _ \n|_   _|__  ___| |_   / _| __ _(_) | ___  __| | |\n  | |/ _ \\/ __| __| | |_ / _` | | |/ _ \\/ _` | |\n  | |  __/\\__ \\ |_  |  _| (_| | | |  __/ (_| |_|\n  |_|\\___||___/\\__| |_|  \\__,_|_|_|\\___|\\__,_(_)\n\n",0);
            Verilated::runFlushCallbacks();
        }
        VL_FINISH_MT("verilogSourceFiles/chip_sim_tb.sv", 132, "");
    }
}

void Vsim___024root___nba_sequent__TOP__96(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__96\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_adc__DOT__adc_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_adc__DOT__chn_selected_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_adc__DOT__cnv_cyc = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_adc__DOT__adc_busy = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o = 0U;
}

void Vsim___024root___nba_sequent__TOP__97(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__97\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__gen_tap_tlul__DOT__u_dmi_jtag__td_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__gen_tap_tlul__DOT__u_dmi_jtag__tdo_oe_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
}

void Vsim___024root___nba_sequent__TOP__98(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__98\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_ref_pulse_sync__DOT__dst_req_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_ref_pulse_sync__DOT__u_dst_req.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_ref_pulse_sync__DOT__u_dst_req.q_o));
}

void Vsim___024root___nba_sequent__TOP__99(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__99\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__spi_dpram_rst_n) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[3U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[3U] = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_rvalid_sram_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__spi_dpram_rst_n) 
           && (IData)((0x0000800000000000ULL == (0x0000c00000000000ULL 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m))));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h62d9f4c3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h11d8a101_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h4d280ef2_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h3a8e8e8e_0;

void Vsim___024root___nba_sequent__TOP__100(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__100\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__error_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__error_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0x10002cdfU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dr_q = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__jtag_combined_rstn 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q));
    __Vtableidx9 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dmi_select 
        = Vsim__ConstPool__TABLE_h62d9f4c3_0[__Vtableidx9];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__dtmcs_select 
        = Vsim__ConstPool__TABLE_h11d8a101_0[__Vtableidx9];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vsim__ConstPool__TABLE_h4d280ef2_0[__Vtableidx9];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vsim__ConstPool__TABLE_h3a8e8e8e_0[__Vtableidx9];
}

void Vsim___024root___nba_sequent__TOP__101(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__101\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dtmcs_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dtmcs_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0x10001cdfU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_q = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dtmcs_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_combined_rstn 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q));
    __Vtableidx71 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dmi_select 
        = Vsim__ConstPool__TABLE_h62d9f4c3_0[__Vtableidx71];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dtmcs_select 
        = Vsim__ConstPool__TABLE_h11d8a101_0[__Vtableidx71];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vsim__ConstPool__TABLE_h4d280ef2_0[__Vtableidx71];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vsim__ConstPool__TABLE_h3a8e8e8e_0[__Vtableidx71];
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:130: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.gen_jtag_gating.dap.i_dmi_cdc.i_cdc_resp.u_prim_sync_reqack.gen_rz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 130, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:79: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.gen_jtag_gating.dap.i_dmi_cdc.i_cdc_req.u_prim_sync_reqack.gen_rz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 79, "");
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__102(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__102\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))) {
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = 1U;
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
        if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__103(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__103\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT____Vcellout__gen_jtag_gating__DOT__dap__td_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT____Vcellout__gen_jtag_gating__DOT__dap__tdo_oe_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
}

void Vsim___024root___nba_sequent__TOP__104(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__104\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__dst_req_d 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__u_dst_req.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__u_dst_req.q_o));
}

void Vsim___024root___nba_sequent__TOP__105(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__105\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__dst_pulse_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__dst_req_d) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__u_dst_req.q_o));
}

void Vsim___024root___nba_sequent__TOP__106(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__106\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellout__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_mux__clk_o)
            ? 9U : 6U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__async_main_pok_st 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellout__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_mux__clk_o) 
           && (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast)));
}

void Vsim___024root___nba_sequent__TOP__107(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__107\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellinp__u_clkmgr_aon__rst_shadowed_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4_shadowed__DOT__u_prim_mubi4_sender__DOT__mubi_int = 9U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__staged_q;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__shadow_rst_done = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4_shadowed__DOT__u_prim_mubi4_sender__DOT__mubi_int = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_hi__DOT__shadow_q = 0x7dU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_lo__DOT__shadow_q = 0x91U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__shadow_rst_done = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__108(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__108\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__status_fifo_rst_n) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_sync 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_wptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_wptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_q;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_sync = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_wptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_sync_combi 
        = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_sync)) 
           | (1U & VL_REDXOR_2(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_sync)));
}

void Vsim___024root___nba_sequent__TOP__109(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__109\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellout__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_mux__clk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellinp__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_mux__sel_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_sync.q_o));
}

void Vsim___024root___nba_sequent__TOP__110(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__110\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__status_fifo_rst_n) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_sync_q 
            = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_gray_sync)) 
               | (1U & VL_REDXOR_2(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_gray_sync)));
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_incr_wptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_q 
                = ((2U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q))) 
                   | (1U & VL_REDXOR_32((3U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_d;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_gray_sync 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_rptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_rptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_gray_q;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_sync_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_gray_sync = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__sync_rptr__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_d 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__full_wclk 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_wptr_q) 
           == (2U ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_sw_status_update_sync__DOT__fifo_rptr_sync_q)));
}

void Vsim___024root___nba_sequent__TOP__111(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__111\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.rst_ni;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:79: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_tap_tlul.u_dmi_jtag.i_dmi_cdc.i_cdc_resp.u_prim_sync_reqack.gen_rz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 79, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:130: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_tap_tlul.u_dmi_jtag.i_dmi_cdc.i_cdc_req.u_prim_sync_reqack.gen_rz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_sync_reqack.sv", 130, "");
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__112(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__112\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))) {
        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync.q_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__req_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o));
}

void Vsim___024root___nba_sequent__TOP__113(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__113\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellinp__u_clkmgr_aon__rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo__DOT__staged_q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_hi__DOT__shadow_q = 0x0105U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_lo__DOT__shadow_q = 0x0119U;
    }
}

void Vsim___024root___nba_sequent__TOP__114(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__114\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellinp__u_clkmgr_aon__rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo__DOT__staged_q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_hi__DOT__shadow_q = 0x0105U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_lo__DOT__shadow_q = 0x0119U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_hi__DOT__shadow_q = 0x0215U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_lo__DOT__shadow_q = 0x0229U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_hi__DOT__shadow_q = 0x0201U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_lo__DOT__shadow_q = 0x0215U;
    }
}

void Vsim___024root___nba_sequent__TOP__115(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__115\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_usb_osc__DOT__en_osc_fe 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_usb_osc__DOT__en_osc_re));
}

void Vsim___024root___nba_sequent__TOP__116(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__116\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_sys_osc__DOT__en_osc_fe 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_sys_osc__DOT__en_osc_re));
}

void Vsim___024root___nba_sequent__TOP__117(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__117\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_aon_clk__DOT__u_aon_osc__DOT__en_osc_fe 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_aon_clk__DOT__u_aon_osc__DOT__en_osc_re));
}

void Vsim___024root___nba_sequent__TOP__118(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__118\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_io_osc__DOT__en_osc_fe 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_io_osc__DOT__en_osc_re));
}

void Vsim___024root___nba_sequent__TOP__119(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__119\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4_shadowed__DOT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni)
            ? 9U : 6U);
}

void Vsim___024root___nba_sequent__TOP__120(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__120\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_d1ord2__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__q_p 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_rst_src_io_n_sync.q_o) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_d1ord2__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__u_div2__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_d1ord2__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__u_div2__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_d1ord2__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__q_p)));
}

void Vsim___024root___nba_sequent__TOP__121(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__121\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_rst_aon_n_ioda_sync.q_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_ack__DOT__mubi_int 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_all_clk_byp_ack__mubi_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_48m_sync__DOT__mubi_int 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_clk_src_io_48m_sync__mubi_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_ack__DOT__mubi_int 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_io_clk_byp_ack__mubi_i;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_ack__DOT__mubi_int = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_48m_sync__DOT__mubi_int = 9U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_ack__DOT__mubi_int = 9U;
    }
}

void Vsim___024root___nba_sequent__TOP__122(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__122\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__4__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__4__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__4__val;
    __Vfunc_mubi4_bool_to_mubi__4__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__5__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__5__val;
    __Vfunc_mubi4_bool_to_mubi__5__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__6__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__6__val;
    __Vfunc_mubi4_bool_to_mubi__6__val = 0;
    // Body
    __Vfunc_mubi4_bool_to_mubi__6__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_is_48m_sync.q_o;
    __Vfunc_mubi4_bool_to_mubi__6__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__6__val)
                                                ? 6U
                                                : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_clk_src_io_48m_sync__mubi_i 
        = __Vfunc_mubi4_bool_to_mubi__6__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__5__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_only_io_clk_byp_en_sync.q_o;
    __Vfunc_mubi4_bool_to_mubi__5__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__5__val)
                                                ? 6U
                                                : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_io_clk_byp_ack__mubi_i 
        = __Vfunc_mubi4_bool_to_mubi__5__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__4__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clks_byp_en_sync.q_o;
    __Vfunc_mubi4_bool_to_mubi__4__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__4__val)
                                                ? 6U
                                                : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT____Vcellinp__u_all_clk_byp_ack__mubi_i 
        = __Vfunc_mubi4_bool_to_mubi__4__Vfuncout;
}

void Vsim___024root___nba_sequent__TOP__123(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__123\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellinp__u_clkmgr_aon__rst_shadowed_ni 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4_shadowed__DOT____Vcellinp__u_rst_mux__sel_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4_shadowed__DOT__u_rst_sync.q_o));
}

void Vsim___024root___nba_sequent__TOP__124(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__124\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_regal__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__usb_osc_cal = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__usb_osc_cal = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__125(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__125\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_usb_clk_byp));
}

void Vsim___024root___nba_sequent__TOP__126(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__126\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__448__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__448__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__448__val;
    __Vfunc_lc_tx_test_true_strict__448__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__449__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__449__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__449__val;
    __Vfunc_lc_tx_test_true_strict__449__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_valid_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__strap_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__pwrmgr_aon_strap));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_or_hardened__DOT__u_prim_lc_sync_a__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__lc_hw_debug_en_masked;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_d;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_or_hardened__DOT__u_prim_lc_sync_b__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sender_pinmux_hw_debug_en__DOT__lc_en_out;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_pinmux_hw_debug_en__DOT__gen_no_flops__DOT__unused_logic 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sender_pinmux_hw_debug_en__DOT__lc_en_out;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_or_hardened__DOT__u_prim_lc_sync_a__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_or_hardened__DOT__u_prim_lc_sync_b__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_pinmux_hw_debug_en__DOT__gen_no_flops__DOT__unused_logic = 0x0aU;
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)) 
                               << 2U) | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)))))))) {
        if ((0U != (((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)) 
                     << 2U) | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)) 
                                << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: pinmux_strap_sampling.sv:321: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.u_pinmux_strap_sampling.p_tap_mux: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/pinmux_strap_sampling.sv", 321, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sender_pinmux_hw_debug_en__DOT__lc_en_out 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__pinmux_hw_debug_en_d)
            : 0x0aU);
    __Vfunc_lc_tx_test_true_strict__448__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sender_pinmux_hw_debug_en__DOT__lc_en_out;
    __Vfunc_lc_tx_test_true_strict__448__Vfuncout = 
        (5U == (IData)(__Vfunc_lc_tx_test_true_strict__448__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_he4dcb6b9__0 
        = __Vfunc_lc_tx_test_true_strict__448__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__449__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sender_pinmux_hw_debug_en__DOT__lc_en_out;
    __Vfunc_lc_tx_test_true_strict__449__Vfuncout = 
        (5U == (IData)(__Vfunc_lc_tx_test_true_strict__449__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_he4dcabbe__0 
        = __Vfunc_lc_tx_test_true_strict__449__Vfuncout;
}

void Vsim___024root___nba_sequent__TOP__127(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__127\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_lc_tx_inv__441__Vfuncout;
    __Vfunc_lc_tx_inv__441__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_inv__441__a;
    __Vfunc_lc_tx_inv__441__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_lo__442__Vfuncout;
    __Vfunc_lc_tx_and_lo__442__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_lo__442__a;
    __Vfunc_lc_tx_and_lo__442__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and_lo__442__b;
    __Vfunc_lc_tx_and_lo__442__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__443__Vfuncout;
    __Vfunc_lc_tx_and__443__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__443__a;
    __Vfunc_lc_tx_and__443__a = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__443__b;
    __Vfunc_lc_tx_and__443__b = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__443__a_in;
    __Vfunc_lc_tx_and__443__a_in = 0;
    CData/*3:0*/ __Vfunc_lc_tx_and__443__b_in;
    __Vfunc_lc_tx_and__443__b_in = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__446__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__446__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__446__val;
    __Vfunc_lc_tx_test_true_strict__446__val = 0;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_strict__450__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__450__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_strict__450__val;
    __Vfunc_lc_tx_test_true_strict__450__val = 0;
    // Body
    __Vfunc_lc_tx_test_true_strict__450__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_dft_en.__PVT__lc_en;
    __Vfunc_lc_tx_test_true_strict__450__Vfuncout = 
        (5U == (IData)(__Vfunc_lc_tx_test_true_strict__450__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_h917ca39f__0 
        = __Vfunc_lc_tx_test_true_strict__450__Vfuncout;
    __Vfunc_lc_tx_test_true_strict__446__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_dft_en.__PVT__lc_en;
    __Vfunc_lc_tx_test_true_strict__446__Vfuncout = 
        (5U == (IData)(__Vfunc_lc_tx_test_true_strict__446__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_sampling_en 
        = __Vfunc_lc_tx_test_true_strict__446__Vfuncout;
    __Vfunc_lc_tx_and_lo__442__b = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_escalate_en.__PVT__lc_en;
    __Vfunc_lc_tx_and_lo__442__a = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_prim_lc_sync_lc_check_byp_en.__PVT__lc_en;
    __Vfunc_lc_tx_and__443__b = __Vfunc_lc_tx_and_lo__442__b;
    __Vfunc_lc_tx_and__443__a = __Vfunc_lc_tx_and_lo__442__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_lc_tx_and__443__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4113340896355493632ull);
    __Vfunc_lc_tx_and__443__a_in = __Vfunc_lc_tx_and__443__a;
    __Vfunc_lc_tx_and__443__b_in = __Vfunc_lc_tx_and__443__b;
    vlSelfRef.__Vfunc_lc_tx_and__443__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_lc_tx_and__443__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_lc_tx_and__443__a_in) 
                                                    & (IData)(__Vfunc_lc_tx_and__443__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_lc_tx_and__443__a_in) 
                                                      | (IData)(__Vfunc_lc_tx_and__443__b_in)))));
    vlSelfRef.__Vfunc_lc_tx_and__443__out = ((3U & (IData)(vlSelfRef.__Vfunc_lc_tx_and__443__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_lc_tx_and__443__a_in) 
                                                      & (IData)(__Vfunc_lc_tx_and__443__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_lc_tx_and__443__a_in) 
                                                        | (IData)(__Vfunc_lc_tx_and__443__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_lc_tx_and__443__Vfuncout = vlSelfRef.__Vfunc_lc_tx_and__443__out;
    __Vfunc_lc_tx_and_lo__442__Vfuncout = __Vfunc_lc_tx_and__443__Vfuncout;
    __Vfunc_lc_tx_inv__441__a = __Vfunc_lc_tx_and_lo__442__Vfuncout;
    __Vfunc_lc_tx_inv__441__Vfuncout = (0x0000000fU 
                                        & (~ (IData)(__Vfunc_lc_tx_inv__441__a)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__hw_debug_en_gating 
        = __Vfunc_lc_tx_inv__441__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_en = 0U;
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_en = 1U;
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_he4dcabbe__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_en = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_h917ca39f__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__jtag_en = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_sample_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__strap_en_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_sampling_en));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__rv_strap_sample_en = 0U;
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__strap_en_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_sampling_en))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____VdfgExtracted_he4dcb6b9__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__rv_strap_sample_en = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_sample_en)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_valid_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_sample_en) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_valid_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_d 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__rv_strap_sample_en)) 
             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q) 
                >> 1U)) << 1U) | (1U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__strap_en_q) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_sampling_en))) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__tap_strap_q))));
}

void Vsim___024root___nba_sequent__TOP__128(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__128\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_ext_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_sys_clk_byp));
}

void Vsim___024root___nba_sequent__TOP__129(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__129\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT__u_regal__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__aon_osc_cal = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__aon_osc_cal = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__130(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__130\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__io_clk_byp_is_48m_src 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
               & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_exfr_is_96m))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__only_io_clk_byp_en_src 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_io_clk_byp) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__all_clks_byp_en_src 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_all_clk_byp) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)));
}

void Vsim___024root___nba_sequent__TOP__131(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__131\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_usb_clk_byp))));
}

void Vsim___024root___nba_sequent__TOP__132(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__132\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_aon_clk_byp))));
}

void Vsim___024root___nba_sequent__TOP__133(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__133\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_aon_clk_byp));
}

void Vsim___024root___nba_sequent__TOP__134(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__134\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_sys_clk_byp))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_sel) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_aoff) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__clk_osc_en_q)));
}

void Vsim___024root___nba_sequent__TOP__135(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__135\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_ext_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__io_clk_byp));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_hf2ac1329_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h63572723_0;

void Vsim___024root___nba_sequent__TOP__136(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__136\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*7:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wr_en) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
            = (IData)((((QData)((IData)(((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__state_q))
                                          ? 2U : 1U))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__data_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
            = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]) 
               | (IData)(((((QData)((IData)(((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__state_q))
                                              ? 2U : 1U))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__data_q))) 
                          >> 0x00000020U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
            = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__address_q) 
                  << 2U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[2U] 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__address_q) 
               >> 0x0000001eU);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h5d6edb82_0_0 
        = ((0x20U <= (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                     >> 2U))) & (0x27U 
                                                 >= 
                                                 (0x000000ffU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                     >> 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h5d6edb82_0_1 
        = ((((0x16U == (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                       >> 2U))) << 4U) 
            | (((0x12U == (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                          >> 2U))) 
                << 3U) | ((0x11U == (0x000000ffU & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                      >> 2U))) << 2U))) 
           | (((0x10U == (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                         >> 2U))) << 1U) 
              | ((4U <= (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                        >> 2U))) & 
                 (5U >= (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                        >> 2U))))));
    __Vtableidx69 = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                    >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_hfddc9e26__0 
        = Vsim__ConstPool__TABLE_hf2ac1329_0[__Vtableidx69];
    __Vtableidx70 = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                    >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_hf88a01c8__0 
        = Vsim__ConstPool__TABLE_h63572723_0[__Vtableidx70];
}

void Vsim___024root___nba_sequent__TOP__137(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__137\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.q_o)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_sys_en_sync.q_o));
}

void Vsim___024root___nba_sequent__TOP__138(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__138\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_rst_por_aon_n_mux__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT____Vcellinp__u_rst_por_aon_n_mux__sel_i) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni));
}

void Vsim___024root___nba_sequent__TOP__139(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__139\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_sel) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_sel) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_aoff))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_en_q = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_en_q = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_en_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_aoff 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clks_aoff));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__clk_osc_sel 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__io_clk_byp))));
}

void Vsim___024root___nba_sequent__TOP__140(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__140\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_clk_byp_en 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_rst_sw_ckbpe_dasrt.q_o;
}

void Vsim___024root___nba_sequent__TOP__141(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__141\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_d1ord2__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__step_down_nq 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_rst_src_io_n_sync.q_o) 
           && (1U & (~ ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_ext_freq_is_96m_io_sync.q_o)) 
                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__io_clk_byp)))));
}

void Vsim___024root___nba_sequent__TOP__142(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__142\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT____Vlvbound_h7de292dd__0 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__fifo_wdata;
        if ((0x047fU >= (0x000007ffU & ((IData)(0x00000024U) 
                                        * (0x0000001fU 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WQ(1152, 36, (0x000007ffU 
                                       & ((IData)(0x00000024U) 
                                          * (0x0000001fU 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_msg_fifo__DOT____Vlvbound_h7de292dd__0);
        }
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (1ULL | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__rdata_tlword)) 
                       << 8U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x0000001eU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                              >> 0x00000017U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                               >> 9U))) ? 1U : 0U) 
                << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i) 
                                    << 0x0000000eU) 
                                   | ((0x00003c00U 
                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__VdfgRegularize_h6e95ff9d_0_1753 
                                          >> 4U)) | 
                                      (0x000003ffU 
                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_50.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                           >> 0x0000001cU))))));
    }
}

void Vsim___024root___nba_sequent__TOP__143(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__143\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__staged_q;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__shadow_rst_done = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__shadow_q = 0x03ffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__shadow_q = 7U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__shadow_rst_done = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__144(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__144\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reseed_interval_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reseed_interval_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reseed_interval_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_int_key_ver_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_int_key_ver_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_int_key_ver_shadowed__DOT__staged_q;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__shadow_rst_done = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__shadow_rst_done = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__shadow_q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reseed_interval_shadowed__DOT__shadow_q = 0xfeffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_int_key_ver_shadowed__DOT__shadow_q = 0xfffffffeU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__shadow_rst_done = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__shadow_rst_done = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__145(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__145\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__rdata_tlword)) 
               << 8U);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT____Vlvbound_h5a3a50a7__0[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT____Vlvbound_h5a3a50a7__0[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT____Vlvbound_h5a3a50a7__0[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__wdata_i[2U];
        if ((0x02cfU >= (0x000003ffU & ((IData)(0x00000048U) 
                                        * (0x0000000fU 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
            VL_ASSIGNSEL_WW(720, 72, (0x000003ffU & 
                                      ((IData)(0x00000048U) 
                                       * (0x0000000fU 
                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT____Vlvbound_h5a3a50a7__0);
        }
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x0000001eU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [1U][1U] >> 0x00000017U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x0000001eU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [0U][1U] >> 0x00000017U));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [1U][3U] >> 9U))) ? 1U
                  : 0U) << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_tlul_adapter_msgfifo__DOT__u_sram_byte__DOT__error_i) 
                                            << 0x0000000eU) 
                                           | ((0x00003c00U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][0U] 
                                                  >> 5U)) 
                                              | (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [1U][3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][2U] 
                                                       >> 0x0000001cU))))));
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__wvalid_i) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [0U][3U] >> 9U))) ? 1U
                  : 0U) << 0x0000000fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_staterd__DOT__u_tlul_adapter__DOT__u_sram_byte__DOT__error_i) 
                                            << 0x0000000eU) 
                                           | ((0x00003c00U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][0U] 
                                                  >> 5U)) 
                                              | (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [0U][3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][2U] 
                                                       >> 0x0000001cU))))));
    }
}

void Vsim___024root___nba_sequent__TOP__146(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__146\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__shadow_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__staged_q;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__shadow_rst_done = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__shadow_q = 0xfeffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__shadow_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__shadow_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__shadow_q = 0xffffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__shadow_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__shadow_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__shadow_q = 0xffffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__shadow_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__shadow_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__shadow_q = 0xffffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__shadow_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__shadow_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__shadow_q = 0xffffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__shadow_rst_done = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__147(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__147\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wr_en) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
            = (IData)((((QData)((IData)(((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__state_q))
                                          ? 2U : 1U))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__data_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
            = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]) 
               | (IData)(((((QData)((IData)(((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__state_q))
                                              ? 2U : 1U))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__data_q))) 
                          >> 0x00000020U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
            = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__address_q) 
                  << 2U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[2U] 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__address_q) 
               >> 0x0000001eU);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
        = (((QData)((IData)(((((2U & (VL_REDXOR_32(
                                                   (0x98505586U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    VL_REDXOR_32(
                                                                 (0x2dcc624cU 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))))) 
                              << 2U) | ((2U & (VL_REDXOR_32(
                                                            (0xc2c1323bU 
                                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 VL_REDXOR_32(
                                                              (0x31234ed1U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))))) 
            << 0x00000023U) | (((QData)((IData)((1U 
                                                 & VL_REDXOR_32(
                                                                (0x413d89aaU 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))))) 
                                << 0x00000022U) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U]))))));
}

void Vsim___024root___nba_sequent__TOP__148(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__148\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__staged_q;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__staged_q;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__shadow_rst_done = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q = 0x1fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__shadow_rst_done = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__149(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__149\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_rptr_sync_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__sync_rptr.q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_incr_wptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_d;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_incr_rptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_d;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__wdepth_o 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_rptr_sync_q))) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__fifo_wptr_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_q)));
}

void Vsim___024root___nba_sequent__TOP__150(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__150\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__fifo_rptr_q) 
           == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.q_o));
}

void Vsim___024root___nba_sequent__TOP__151(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__151\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_rptr_sync_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__sync_rptr.q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_incr_wptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_d;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_incr_rptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_d;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__wdepth_o 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_rptr_sync_q))) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__fifo_wptr_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_q)));
}

void Vsim___024root___nba_sequent__TOP__152(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__152\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__fifo_rptr_q) 
           == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.q_o));
}

void Vsim___024root___nba_sequent__TOP__153(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__153\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_rptr_sync_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__sync_rptr.q_o));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_incr_wptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_d;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_incr_rptr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_gray_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_d;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_gray_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_rptr_sync_q))) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__fifo_wptr_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_d 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_q)));
}

void Vsim___024root___nba_sequent__TOP__154(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__154\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__fifo_rptr_q) 
           == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.q_o));
}

void Vsim___024root___nba_sequent__TOP__155(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__155\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__u_rst_src_da.rst_ni) {
        if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt) 
              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__dv_srate_value)) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__src_busy_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_rng_val = 0U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt) 
                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__dv_srate_value))) {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_rng_val = 1U;
        } else {
            vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_rng_val = 0U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_val_pulse_sync__DOT__src_pulse_en_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__rng_b 
                = ((((2U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q 
                                     >> 0x0000000aU)) 
                            << 1U)) | (1U & (IData)(
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q 
                                                     >> 5U)))) 
                    << 2U) | ((2U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q 
                                              >> 0x00000014U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q 
                                                           >> 0x0000000fU)))));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_d;
    } else {
        vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_rng_val = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__rng_b = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q = 0x01d033d20eed3b14ULL;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__srate_cnt;
}

void Vsim___024root___nba_comb__TOP__0(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_posedge_pulse_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_sync_q)) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d)));
}

void Vsim___024root___nba_comb__TOP__1(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__set_wvalid 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__wvalid)) 
           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_wvalid_dev_sync.q_o) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__load_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__wvalid) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__depth_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__clear_status)
            ? 0U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__load_data)
                     ? 0x00000020U : (0x0000003fU & 
                                      ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__depth_q) 
                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__gen_unpack_mode__DOT__pull_data)))));
}

void Vsim___024root___nba_sequent__TOP__156(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__156\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__rst_root_n 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellinp__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__scanmode_i) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_rst_por_aon__BRA__0__KET____DOT__gen_rst_por_aon_normal__DOT__u_rst_por_aon__DOT__u_rst_sync.q_o));
}

void Vsim___024root___nba_sequent__TOP__157(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__157\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_req))) {
        if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U])) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0 
                    = (0x000001ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_wdata_d));
                vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0;
                vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]);
                vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0 
                    = (0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_wdata_d 
                                              >> 9U)));
                vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0;
                vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]);
                vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0 
                    = (0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_wdata_d 
                                              >> 0x12U)));
                vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0;
                vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]);
                vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0 
                    = (0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_wdata_d 
                                              >> 0x1bU)));
                vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h897060f3__0;
                vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]);
                vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 1U;
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__158(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__158\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_0 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_slow_ext_req_sync__q_o) 
            >> 6U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_wakeup_en));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_slow_ext_req_sync__q_o) 
           & (0x0000003cU | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_reset_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_scdc_sync__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_scdc_sync__DOT__src_level;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_d;
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__slow_ast_q2) 
             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_ast_sync__q_o))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__slow_ast_q2;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__slow_ast_q2 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_ast_sync__q_o;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_ast_sync__q_o 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ast_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ast_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
            = (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)
                   ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_aon_clk__DOT__u_no_scan_val_sync.q_o)
                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)) 
                 << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__clk_src_sys_val_o) 
                            << 3U) | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_io_val_sync.q_o) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i)
                                                     ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_no_scan_val_sync.q_o)
                                                     : 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_usb_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i))) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rst_sys_dasrt.rst_ni)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__slow_ast_q2 = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT____Vcellout__u_ast_sync__q_o = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ast_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__core_clk_en_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_q) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__clk_active) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__core_clk_en))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__io_clk_en_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_q) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__clk_active) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__io_clk_en))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT____Vcellout__u_usb_clk_en__q_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__usb_clk_en_q) 
               | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ip_clk_status_sync.q_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__core_clk_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_core_clk_en) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__io_clk_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_io_clk_en) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_q;
    if (((((((((0x0022U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)) 
               | (0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
              | (0x01afU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
             | (0x0191U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
            | (0x02bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
           | (0x00daU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
          | (0x03e0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
         | (0x0075U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x0022U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_d = 0U;
        } else if ((0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_0)) 
                 | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_1)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_d 
                    = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_1))
                        ? 2U : 1U);
            }
        }
        if ((0x0022U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x02c7U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x01afU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0191U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x02bcU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00daU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((0x03e0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_d = 1U;
                                    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_req_pwrdn_sync.q_o)))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__ack_pwrdn_d = 0U;
                                    }
                                }
                            }
                            if ((0x00daU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_d = 1U;
                                if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ack_pwrup_sync.q_o) 
                                     & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_req_pwrdn_sync.q_o)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__req_pwrup_d = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_0)) 
                     | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_1)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_d 
                        = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__cause_toggle_q)));
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vsim__ConstPool__TABLE_h8b6109be_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h92de8fd5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h3deae165_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h3cbc5624_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h5f326055_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h55c681fa_0;

void Vsim___024root___nba_sequent__TOP__159(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__159\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_set_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_set_d));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__filter) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__csb_deassert = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace_set) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace = 1U;
        } else if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payloadcnt))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace = 0U;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_latch) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_d;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__next_byte) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_d;
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__cmd_sync_pulse) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec 
                = (0x000000ffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_he50b618e_0_856[0x0000002eU])) 
                                             << 0x00000016U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_856[0x0000002dU])) 
                                               >> 0x0000000aU)));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__csb_deassert = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payload_replace = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_d));
    __Vtableidx1 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__opcode_readsfdp) 
                      << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__opcode_readjedec) 
                                 << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__opcode_readstatus) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__intercept_d) 
                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n)));
    if ((1U & Vsim__ConstPool__TABLE_h8b6109be_0[__Vtableidx1])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_cmdparse__intercept_status_o 
            = Vsim__ConstPool__TABLE_h92de8fd5_0[__Vtableidx1];
    }
    if ((2U & Vsim__ConstPool__TABLE_h8b6109be_0[__Vtableidx1])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_cmdparse__intercept_jedec_o 
            = Vsim__ConstPool__TABLE_h3deae165_0[__Vtableidx1];
    }
    if ((4U & Vsim__ConstPool__TABLE_h8b6109be_0[__Vtableidx1])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_cmdparse__intercept_sfdp_o 
            = Vsim__ConstPool__TABLE_h3cbc5624_0[__Vtableidx1];
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt) 
                      << 5U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__mailbox_hit_i) 
                                << 4U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_intercept_en_mbx__q) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_mailbox_en__q) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__sram_req) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n))));
    if (Vsim__ConstPool__TABLE_h5f326055_0[__Vtableidx2]) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_readcmd__mailbox_assumed_o 
            = Vsim__ConstPool__TABLE_h55c681fa_0[__Vtableidx2];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (4U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 2U)) << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (4U ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_sram_fifo__DOT__gen_singleton_fifo__DOT__full_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n) 
           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_sram_fifo__DOT__rvalid_o)
                      ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_d_ready))
                      : (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_m2l
                                 [1U] >> 0x00000022U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payloadcnt 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__payloadcnt;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_d 
        = ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__bitcnt))
            ? ((0x04000000U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_7th 
                                        >> 0x0000001aU)) 
                               << 0x0000001aU)) | (
                                                   (0x03fc0000U 
                                                    & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__opcode), 1U) 
                                                       << 0x00000012U)) 
                                                   | (0x0003ffffU 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info_7th))))
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    if ((1U & (~ VL_ONEHOT_I((((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                             >> 2U))) 
                               << 1U) | (2U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                                   >> 2U)))))))) {
        if ((0U != (((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                   >> 2U))) << 1U) 
                    | (2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                    >> 2U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_passthrough.sv:693: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_passthrough: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                    >> 2U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_passthrough.sv", 693, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__read_pipeline_stg1_d 
        = ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                         >> 2U))) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__half_cycle_sampled_sd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__device_s_en_inclk = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk = 0U;
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__device_s_en_inclk = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__device_s_en_inclk 
                = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                  >> 6U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk = 0U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__device_s_en_inclk = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk 
                = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                  >> 6U));
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__device_s_en_inclk = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_d 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_q))
            ? 2U : (3U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__byte_sel_q))));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spid_status.sv:376: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_spid_status: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spid_status.sv", 376, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__data_inc = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_d_ready = 0U;
    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__wready_o) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__data_inc = 1U;
            }
            if (((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__strb)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__wready_o))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_d_ready = 1U;
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__160(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__160\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_ds_i;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs_i;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs_i 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_bus_not_idle__DOT__q) 
            << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_bus_reset__DOT__q) 
                                << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_disconnected__DOT__q) 
                                           << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_module_active__DOT__q))));
}

void Vsim___024root___nba_sequent__TOP__161(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__161\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack 
        = (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync.__PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs)
                  ? (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__ack_sync.q_o))
                  : (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__u_dst_update_sync__gen_nrz_hs_protocol__DOT__ack_sync.q_o)));
}

void Vsim___024root___nba_comb__TOP__2(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT____Vlvbound_h82fbffda__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT____Vlvbound_h82fbffda__0 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__339__Vfuncout;
    __Vfunc_mubi4_test_true_strict__339__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__339__val;
    __Vfunc_mubi4_test_true_strict__339__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__340__Vfuncout;
    __Vfunc_mubi4_and_hi__340__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__340__a;
    __Vfunc_mubi4_and_hi__340__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__340__b;
    __Vfunc_mubi4_and_hi__340__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__341__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__341__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__341__val;
    __Vfunc_mubi4_bool_to_mubi__341__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__342__Vfuncout;
    __Vfunc_mubi4_and__342__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__342__a;
    __Vfunc_mubi4_and__342__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__342__b;
    __Vfunc_mubi4_and__342__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__342__a_in;
    __Vfunc_mubi4_and__342__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__342__b_in;
    __Vfunc_mubi4_and__342__b_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rdata_sram = 0U;
    __Vfunc_mubi4_and_hi__340__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__341__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__341__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__341__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_and_hi__340__a = __Vfunc_mubi4_bool_to_mubi__341__Vfuncout;
    __Vfunc_mubi4_and__342__b = __Vfunc_mubi4_and_hi__340__b;
    __Vfunc_mubi4_and__342__a = __Vfunc_mubi4_and_hi__340__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__342__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15559889778269640501ull);
    __Vfunc_mubi4_and__342__a_in = __Vfunc_mubi4_and__342__a;
    __Vfunc_mubi4_and__342__b_in = __Vfunc_mubi4_and__342__b;
    vlSelfRef.__Vfunc_mubi4_and__342__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__342__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__342__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__342__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__342__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__342__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__342__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__342__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__342__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__342__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__342__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__342__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__342__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__342__out;
    __Vfunc_mubi4_and_hi__340__Vfuncout = __Vfunc_mubi4_and__342__Vfuncout;
    __Vfunc_mubi4_test_true_strict__339__val = __Vfunc_mubi4_and_hi__340__Vfuncout;
    __Vfunc_mubi4_test_true_strict__339__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__339__val));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__339__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rvalid_inst 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rvalid_inst) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rdata_sram 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x87U >= (0x000000ffU & ((IData)(0x00000011U) 
                                              * (7U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                     ? (0x0001ffffU & (((0U == (0x0000001fU 
                                                & ((IData)(0x00000011U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                         ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(0x00000010U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & ((IData)(0x00000011U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000011U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (7U & (((IData)(0x00000011U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                 >> 5U))] 
                                          >> (0x0000001fU 
                                              & ((IData)(0x00000011U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                     : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__av_rdata 
        = (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__current_setup)
                           ? ((0x13U >= (0x0000001fU 
                                         & ((IData)(5U) 
                                            * (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                               ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__storage 
                                  >> (0x0000001fU & 
                                      ((IData)(5U) 
                                       * (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                               : 0U) : ((0x27U >= (0x0000003fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                         ? (IData)(
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__storage 
                                                    >> 
                                                    (0x0000003fU 
                                                     & ((IData)(5U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))
                                         : 0U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__mem_rdata_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__mem_b_read_q)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rdata_sram
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__mem_b_rdata_q);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__rdata_tlword 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_memory_1p__DOT__rdata_sram 
           & ((((0x0000ff00U & ((- (IData)((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                  >> 4U)))) 
                                << 8U)) | (0x000000ffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                            >> 3U)))))) 
               << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 2U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                    >> 1U))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__336__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__336__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__336__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__336__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__rvalid_o)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
                : ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__rdata_tlword)) 
                   << 8U)) : 0ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__d_error 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
}

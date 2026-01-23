// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__0__Vfuncout;
    __Vfunc_mubi4_test_true_strict__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__0__val;
    __Vfunc_mubi4_test_true_strict__0__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1__Vfuncout;
    __Vfunc_mubi4_test_true_strict__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1__val;
    __Vfunc_mubi4_test_true_strict__1__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__0__val = 1U;
    __Vfunc_mubi4_test_true_strict__0__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__0__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__0__Vfuncout;
    __Vfunc_mubi4_test_true_strict__1__val = 1U;
    __Vfunc_mubi4_test_true_strict__1__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__1__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__1__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_0__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__1(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__u_rst_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_device__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_0__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__2__Vfuncout;
    __Vfunc_mubi4_test_true_strict__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__2__val;
    __Vfunc_mubi4_test_true_strict__2__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__3__Vfuncout;
    __Vfunc_mubi4_test_true_strict__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__3__val;
    __Vfunc_mubi4_test_true_strict__3__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__2__val = 1U;
    __Vfunc_mubi4_test_true_strict__2__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__2__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__2__Vfuncout;
    __Vfunc_mubi4_test_true_strict__3__val = 1U;
    __Vfunc_mubi4_test_true_strict__3__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__3__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__3__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_1__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__4(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_1__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__5(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
    __Vfunc_mubi4_test_true_strict__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
    __Vfunc_mubi4_test_true_strict__4__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
    __Vfunc_mubi4_test_true_strict__5__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__4__val = 1U;
    __Vfunc_mubi4_test_true_strict__4__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__4__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__4__Vfuncout;
    __Vfunc_mubi4_test_true_strict__5__val = 1U;
    __Vfunc_mubi4_test_true_strict__5__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__5__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__5__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_2__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__4(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_2__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__5(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_spi_host1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    __Vfunc_mubi4_test_true_strict__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
    __Vfunc_mubi4_test_true_strict__6__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__7__Vfuncout;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__7__val;
    __Vfunc_mubi4_test_true_strict__7__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__6__val = 1U;
    __Vfunc_mubi4_test_true_strict__6__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__6__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    __Vfunc_mubi4_test_true_strict__7__val = 1U;
    __Vfunc_mubi4_test_true_strict__7__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__7__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__7__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_3__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__4(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_3__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__5(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
    __Vfunc_mubi4_test_true_strict__8__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
    __Vfunc_mubi4_test_true_strict__9__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__8__val = 1U;
    __Vfunc_mubi4_test_true_strict__8__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__8__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__8__Vfuncout;
    __Vfunc_mubi4_test_true_strict__9__val = 1U;
    __Vfunc_mubi4_test_true_strict__9__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__9__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__9__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__1(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_4__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__4(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__5(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_usb_aon__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_4__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__10__Vfuncout;
    __Vfunc_mubi4_test_true_strict__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__10__val;
    __Vfunc_mubi4_test_true_strict__10__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__11__Vfuncout;
    __Vfunc_mubi4_test_true_strict__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__11__val;
    __Vfunc_mubi4_test_true_strict__11__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__10__val = 1U;
    __Vfunc_mubi4_test_true_strict__10__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__10__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__10__Vfuncout;
    __Vfunc_mubi4_test_true_strict__11__val = 1U;
    __Vfunc_mubi4_test_true_strict__11__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__11__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__11__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_5__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__1(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSelf->__PVT__u_rst_sync->rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_5__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__12__Vfuncout;
    __Vfunc_mubi4_test_true_strict__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__12__val;
    __Vfunc_mubi4_test_true_strict__12__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__13__Vfuncout;
    __Vfunc_mubi4_test_true_strict__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__13__val;
    __Vfunc_mubi4_test_true_strict__13__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__12__val = 1U;
    __Vfunc_mubi4_test_true_strict__12__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__12__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__12__Vfuncout;
    __Vfunc_mubi4_test_true_strict__13__val = 1U;
    __Vfunc_mubi4_test_true_strict__13__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__13__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__13__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_6__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_6__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__14__Vfuncout;
    __Vfunc_mubi4_test_true_strict__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__14__val;
    __Vfunc_mubi4_test_true_strict__14__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__15__Vfuncout;
    __Vfunc_mubi4_test_true_strict__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__15__val;
    __Vfunc_mubi4_test_true_strict__15__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__14__val = 1U;
    __Vfunc_mubi4_test_true_strict__14__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__14__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__14__Vfuncout;
    __Vfunc_mubi4_test_true_strict__15__val = 1U;
    __Vfunc_mubi4_test_true_strict__15__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__15__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__15__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__0(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__sw_rst_req_q;
    __Vdly__sw_rst_req_q = 0;
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__sw_rst_req_q = vlSelfRef.__PVT__sw_rst_req_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        if (((IData)(vlSelfRef.__PVT__sw_rst_req_q) 
             & (IData)(vlSelfRef.__PVT__clr_sw_rst_req))) {
            __Vdly__sw_rst_req_q = 0U;
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                           & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_7__q))) 
                          & (~ (IData)(vlSelfRef.__PVT__clr_sw_rst_req))))) {
            __Vdly__sw_rst_req_q = 1U;
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        __Vdly__sw_rst_req_q = 0U;
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = 0x11U;
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
        = __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    vlSelfRef.__PVT__sw_rst_req_q = __Vdly__sw_rst_req_q;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.__PVT__clr_sw_rst_req = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.fsm_err_o = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.fsm_err_o = 1U;
    }
    vlSelfRef.err_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.err_o = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__2(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__3(Vsim_rstmgr_leaf_rst__Sz5_SCz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid 
        = (1U & (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_sw_rst_ctrl_n_7__q)) 
                  | (IData)(vlSelfRef.__PVT__sw_rst_req_q)) 
                 | (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3dU;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) 
                                & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x0fU;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                           & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                             & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                        } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                        }
                    } else {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
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
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.fsm_err_o = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                 & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                            } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                            }
                        } else {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
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
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                               & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
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
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__3(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_scanmode_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__5(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                         >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                    }
                }
            }
        }
    }
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_scanmode_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
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
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.fsm_err_o = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                 & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                            } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                            }
                        } else {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
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
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                               & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
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
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni)));
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_scanmode_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSelf->__PVT__u_rst_sync->rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0;
    // Body
    __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) {
        if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
        } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc) 
                    & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout)))) {
            __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)));
        }
        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw 
            = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    } else {
        __Vdly__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.fsm_err_o = 0U;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
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
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.fsm_err_o = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                 & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                            } else if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                            }
                        } else {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                             & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                             & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
        } else {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                         & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
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
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                                          & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.fsm_err_o = 1U;
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    }
                } else {
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.fsm_err_o = 1U;
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                               & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
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
                    vlSelfRef.fsm_err_o = 1U;
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            } else {
                vlSelfRef.fsm_err_o = 1U;
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
            }
        } else {
            vlSelfRef.fsm_err_o = 1U;
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
    }
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_i2c0__u_rst_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__3(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__5(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed\n"); );
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

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSelfRef.leaf_rst_o) ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__u_rst_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSelfRef.leaf_rst_o)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__6(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.leaf_rst_o = ((IData)(vlSelfRef.__Vcellinp__u_rst_mux__sel_i) 
                            | (IData)(vlSelf->__PVT__u_rst_sync->q_o));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__16__Vfuncout;
    __Vfunc_mubi4_test_true_strict__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__16__val;
    __Vfunc_mubi4_test_true_strict__16__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__17__Vfuncout;
    __Vfunc_mubi4_test_true_strict__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__17__val;
    __Vfunc_mubi4_test_true_strict__17__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__16__val = 1U;
    __Vfunc_mubi4_test_true_strict__16__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__16__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__16__Vfuncout;
    __Vfunc_mubi4_test_true_strict__17__val = 1U;
    __Vfunc_mubi4_test_true_strict__17__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__17__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__17__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
    __Vfunc_mubi4_test_true_strict__18__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
    __Vfunc_mubi4_test_true_strict__18__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__19__Vfuncout;
    __Vfunc_mubi4_test_true_strict__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__19__val;
    __Vfunc_mubi4_test_true_strict__19__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__18__val = 1U;
    __Vfunc_mubi4_test_true_strict__18__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__18__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__18__Vfuncout;
    __Vfunc_mubi4_test_true_strict__19__val = 1U;
    __Vfunc_mubi4_test_true_strict__19__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__19__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__19__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_aon__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
    __Vfunc_mubi4_test_true_strict__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
    __Vfunc_mubi4_test_true_strict__20__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__21__Vfuncout;
    __Vfunc_mubi4_test_true_strict__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__21__val;
    __Vfunc_mubi4_test_true_strict__21__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__20__val = 1U;
    __Vfunc_mubi4_test_true_strict__20__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__20__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__20__Vfuncout;
    __Vfunc_mubi4_test_true_strict__21__val = 1U;
    __Vfunc_mubi4_test_true_strict__21__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__21__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__21__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__22__Vfuncout;
    __Vfunc_mubi4_test_true_strict__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__22__val;
    __Vfunc_mubi4_test_true_strict__22__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__23__Vfuncout;
    __Vfunc_mubi4_test_true_strict__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__23__val;
    __Vfunc_mubi4_test_true_strict__23__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__22__val = 1U;
    __Vfunc_mubi4_test_true_strict__22__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__22__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__22__Vfuncout;
    __Vfunc_mubi4_test_true_strict__23__val = 1U;
    __Vfunc_mubi4_test_true_strict__23__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__23__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__23__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__24__Vfuncout;
    __Vfunc_mubi4_test_true_strict__24__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__24__val;
    __Vfunc_mubi4_test_true_strict__24__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__25__Vfuncout;
    __Vfunc_mubi4_test_true_strict__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__25__val;
    __Vfunc_mubi4_test_true_strict__25__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__24__val = 1U;
    __Vfunc_mubi4_test_true_strict__24__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__24__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__24__Vfuncout;
    __Vfunc_mubi4_test_true_strict__25__val = 1U;
    __Vfunc_mubi4_test_true_strict__25__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__25__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__25__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div2__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__26__Vfuncout;
    __Vfunc_mubi4_test_true_strict__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__26__val;
    __Vfunc_mubi4_test_true_strict__26__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__27__Vfuncout;
    __Vfunc_mubi4_test_true_strict__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__27__val;
    __Vfunc_mubi4_test_true_strict__27__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__26__val = 1U;
    __Vfunc_mubi4_test_true_strict__26__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__26__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__26__Vfuncout;
    __Vfunc_mubi4_test_true_strict__27__val = 1U;
    __Vfunc_mubi4_test_true_strict__27__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__27__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__27__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div2__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__28__Vfuncout;
    __Vfunc_mubi4_test_true_strict__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__28__val;
    __Vfunc_mubi4_test_true_strict__28__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__29__Vfuncout;
    __Vfunc_mubi4_test_true_strict__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__29__val;
    __Vfunc_mubi4_test_true_strict__29__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__28__val = 1U;
    __Vfunc_mubi4_test_true_strict__28__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__28__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__28__Vfuncout;
    __Vfunc_mubi4_test_true_strict__29__val = 1U;
    __Vfunc_mubi4_test_true_strict__29__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__29__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__29__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_usb__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__30__Vfuncout;
    __Vfunc_mubi4_test_true_strict__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__30__val;
    __Vfunc_mubi4_test_true_strict__30__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__31__Vfuncout;
    __Vfunc_mubi4_test_true_strict__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__31__val;
    __Vfunc_mubi4_test_true_strict__31__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__30__val = 1U;
    __Vfunc_mubi4_test_true_strict__30__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__30__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__30__Vfuncout;
    __Vfunc_mubi4_test_true_strict__31__val = 1U;
    __Vfunc_mubi4_test_true_strict__31__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__31__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__31__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_usb__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__32__Vfuncout;
    __Vfunc_mubi4_test_true_strict__32__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__32__val;
    __Vfunc_mubi4_test_true_strict__32__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__33__Vfuncout;
    __Vfunc_mubi4_test_true_strict__33__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__33__val;
    __Vfunc_mubi4_test_true_strict__33__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__32__val = 1U;
    __Vfunc_mubi4_test_true_strict__32__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__32__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__32__Vfuncout;
    __Vfunc_mubi4_test_true_strict__33__val = 1U;
    __Vfunc_mubi4_test_true_strict__33__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__33__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__33__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__2(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)));
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__5(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_sys__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
            ? 9U : 6U);
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__34__Vfuncout;
    __Vfunc_mubi4_test_true_strict__34__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__34__val;
    __Vfunc_mubi4_test_true_strict__34__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__35__Vfuncout;
    __Vfunc_mubi4_test_true_strict__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__35__val;
    __Vfunc_mubi4_test_true_strict__35__val = 0;
    // Body
    __Vfunc_mubi4_test_true_strict__34__val = 1U;
    __Vfunc_mubi4_test_true_strict__34__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__34__val));
    vlSelfRef.__Vcellinp__u_rst_mux__sel_i = __Vfunc_mubi4_test_true_strict__34__Vfuncout;
    __Vfunc_mubi4_test_true_strict__35__val = 1U;
    __Vfunc_mubi4_test_true_strict__35__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__35__val));
    vlSelfRef.gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i 
        = __Vfunc_mubi4_test_true_strict__35__Vfuncout;
}

void Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__1(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni)
            ? 9U : 6U);
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted 
        = (1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni)));
}

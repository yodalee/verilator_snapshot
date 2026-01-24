// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_rstmgr_leaf_rst__Sz5_SCz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
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
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    } else {
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
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.fsm_err_o = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
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
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            }
        }
    } else {
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
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                               & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
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
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            vlSelfRef.fsm_err_o = 1U;
        }
    }
}

VL_ATTR_COLD void Vsim_rstmgr_leaf_rst__Sz5_SCz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__0(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clr_sw_rst_req = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout 
        = VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt));
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 0U;
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d 
        = vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.leaf_rst_o = ((IData)(vlSelfRef.__Vcellinp__u_rst_mux__sel_i) 
                            | (IData)(vlSelf->__PVT__u_rst_sync->q_o));
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
    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 0U;
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
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)) 
                                          & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))))) {
                                if (vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst) {
                                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = 1U;
                                }
                            }
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    } else {
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
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.fsm_err_o = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc 
                            = vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake->src_ack_o;
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x24U;
                    } else if (((IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst) 
                                & VL_LTS_III(32, 2U, (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
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
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                } else if (((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                            & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x16U;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst)))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x3aU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
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
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            }
        }
    } else {
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
                            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = 1U;
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                vlSelfRef.fsm_err_o = 1U;
            } else {
                if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst)) 
                               & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst))))) {
                        vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 0x23U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.fsm_err_o = 1U;
                }
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
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelfRef.fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                    vlSelfRef.fsm_err_o = 1U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
                }
                vlSelfRef.fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = 8U;
            vlSelfRef.fsm_err_o = 1U;
        }
    }
}

VL_ATTR_COLD void Vsim_rstmgr_leaf_rst__Sz5_SCz3___ctor_var_reset(Vsim_rstmgr_leaf_rst__Sz5_SCz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_rstmgr_leaf_rst__Sz5_SCz3___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->leaf_clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11889023095698081979ull);
    vlSelf->parent_rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7975443852707929271ull);
    vlSelf->sw_rst_req_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866669855718768400ull);
    vlSelf->scanmode_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10199737842679129227ull);
    vlSelf->scan_rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4034152554491723653ull);
    vlSelf->rst_en_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13290180337278222184ull);
    vlSelf->leaf_rst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16932515207387716086ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->fsm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8768478715515343031ull);
    vlSelf->__Vcellinp__u_rst_mux__sel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17363926030309280183ull);
    vlSelf->__PVT__clr_sw_rst_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9307667061479048575ull);
    vlSelf->__PVT__u_prim_mubi4_sender__DOT__mubi_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4712372916131756482ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14903941154366975919ull);
    vlSelf->gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4799791089992039381ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7931798791887519583ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10130501914383849331ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5257484849289080143ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15120513876115763042ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 954075532373901067ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7766871411633364472ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6196945299313757272ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14826855756785068693ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3525497160413250269ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13779927692973174098ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8966383440795072019ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11806737070510137387ull);
    vlSelf->__PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7772565492762125821ull);
}

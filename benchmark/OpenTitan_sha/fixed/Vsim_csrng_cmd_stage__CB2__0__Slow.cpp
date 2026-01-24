// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (0U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_307 = ((IData)(vlSelfRef.__PVT__cmd_ack_q) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (0U == (0x00000078U 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.genbits_vld_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426 
            = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o = 2U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426 = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
            = (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                             >> 1U)) == (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                      ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                         - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                      : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                         + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & (IData)(vlSelfRef.genbits_vld_i));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__cmd_gen_flag_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                       & ((IData)(vlSelfRef.__PVT__cmd_gen_1st_req)
                                           ? (3U == 
                                              (7U & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))
                                           : (IData)(vlSelfRef.__PVT__cmd_gen_flag_q)));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 == 
                                                 (0x00000fffU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 0x0cU)))) {
                                                vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
        } else {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__cmd_len_d = 0U;
    }
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                    vlSelfRef.cmd_arb_eop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((0U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                 >> 4U)))) {
                                            vlSelfRef.cmd_arb_eop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__0__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genbits_rdy_i = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.cmd_stage_vld_i = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q)) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSelfRef.genbits_vld_o) & (IData)(vlSelfRef.genbits_rdy_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
                                                  & (IData)(vlSelfRef.cmd_stage_vld_i));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSelfRef.cmd_stage_vld_i)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
               ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
               : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427;
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
    }
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429) 
                                                  << 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_424 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_425 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_424) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_425) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426)));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_306 = ((IData)(vlSelfRef.__PVT__cmd_ack_q) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (8U == (0x00000078U 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.genbits_vld_o = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                               & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    if (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 
            = vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o = 2U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
            = (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                             >> 1U)) == (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                      ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                         - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                      : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                         + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & (IData)(vlSelfRef.genbits_vld_i));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__cmd_gen_flag_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                       & ((IData)(vlSelfRef.__PVT__cmd_gen_1st_req)
                                           ? (3U == 
                                              (7U & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))
                                           : (IData)(vlSelfRef.__PVT__cmd_gen_flag_q)));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 == 
                                                 (0x00000fffU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 0x0cU)))) {
                                                vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
        } else {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__cmd_len_d = 0U;
    }
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                                            >> 1U))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                    vlSelfRef.cmd_arb_eop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((0U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                 >> 4U)))) {
                                            vlSelfRef.cmd_arb_eop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genbits_rdy_i = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o));
    vlSelfRef.cmd_stage_vld_i = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q)) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSelfRef.genbits_vld_o) & (IData)(vlSelfRef.genbits_rdy_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
                                                  & (IData)(vlSelfRef.cmd_stage_vld_i));
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                    >> 1U))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((2U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSelfRef.cmd_stage_vld_i)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
               ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
               : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433;
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
    } else {
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i = 0U;
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
    }
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435) 
                                                  << 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432)));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.cmd_ack_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_ack_q) 
                           & (2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_id_q)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
        = (IData)((vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage 
                   >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 5U))));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o = 
        ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
         == (2U ^ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.genbits_vld_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__rready_i) 
                               & (0x00000010U == (0x00000078U 
                                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_ctr_drbg_gen__DOT__u_prim_fifo_sync_genbits__DOT__gen_singleton_fifo__DOT__storage[0U])));
    vlSelfRef.__PVT__cmd_final_ack = 0U;
    vlSelfRef.__PVT__cmd_gen_cnt_dec = 0U;
    vlSelfRef.cmd_arb_sop_o = 0U;
    vlSelfRef.__PVT__cmd_gen_inc_req = 0U;
    vlSelfRef.__PVT__cmd_gen_1st_req = 0U;
    vlSelfRef.cmd_stage_sm_err_o = 0U;
    if ((0x67U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.cmd_stage_sm_err_o = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
        if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                      & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.cmd_stage_sm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.cmd_stage_sm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.cmd_stage_sm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.cmd_stage_sm_err_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                vlSelfRef.cmd_stage_sm_err_o = 1U;
            }
        }
    }
    vlSelfRef.cmd_arb_req_o = 0U;
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_packer_fifo_sw_genbits__DOT__wvalid_i) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_packer_fifo_sw_genbits__DOT__wready_o));
    vlSelfRef.__PVT__cmd_gen_cnt_last = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__cmd_req_qe)));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)
            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                           ? ((1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                              - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                           : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                              + (1U & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & (IData)(vlSelfRef.genbits_vld_i));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                            vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__cmd_final_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec)));
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_sop_o = 1U;
                                                vlSelfRef.__PVT__cmd_gen_inc_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            vlSelfRef.cmd_arb_sop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                vlSelfRef.__PVT__cmd_gen_1st_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__cmd_gen_flag_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
                                       & ((IData)(vlSelfRef.__PVT__cmd_gen_1st_req)
                                           ? (3U == 
                                              (7U & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))
                                           : (IData)(vlSelfRef.__PVT__cmd_gen_flag_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440 = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_436 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__full_o));
    vlSelfRef.__PVT__instantiated_d = vlSelfRef.__PVT__instantiated_q;
    vlSelfRef.__PVT__cmd_len_dec = 0U;
    vlSelfRef.cmd_arb_eop_o = 0U;
    vlSelfRef.cmd_arb_mop_o = 0U;
    vlSelfRef.__PVT__invalid_acmd = 0U;
    vlSelfRef.__PVT__invalid_cmd_seq = 0U;
    vlSelfRef.__PVT__reseed_cnt_exceeded = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                    vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            vlSelfRef.cmd_arb_req_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 == 
                                                 (0x00000fffU 
                                                  & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                     >> 0x0cU)))) {
                                                vlSelfRef.__PVT__cmd_gen_cnt_last = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.__PVT__cmd_len_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                 & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                            | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                      | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                     | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                    | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
                vlSelfRef.__PVT__instantiated_d = 0U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                        vlSelfRef.__PVT__instantiated_d = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            != 
                                                            (7U 
                                                             & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                    if (
                                                        (3U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (4U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                vlSelfRef.__PVT__instantiated_d = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        if (vlSelfRef.__PVT__cmd_gen_1st_req) {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o);
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & ((IData)(0x0fffU) 
                                  - (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                     >> 0x0000000cU)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                  >> 0x0000000cU));
        } else {
            vlSelfRef.__PVT__cmd_gen_cmd_d = (0x00000fffU 
                                              & (IData)(vlSelfRef.__PVT__cmd_gen_cmd_q));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (~ (0x00000fffU 
                                         == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0x0fffU : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
            vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
                = (0x00000fffU & (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                   & (0U != (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                   ? (((IData)(vlSelfRef.__PVT__cmd_gen_cnt_dec) 
                                       & ((IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                          >> 0x0000000cU))
                                       ? 0U : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                   : (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        }
        vlSelfRef.__PVT__cmd_len_d = (0x0000000fU & 
                                      ((IData)(vlSelfRef.cmd_arb_sop_o)
                                        ? (0x0000000fU 
                                           & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.__PVT__cmd_len_q) 
                                           - (IData)(vlSelfRef.__PVT__cmd_len_dec))));
    } else {
        vlSelfRef.__PVT__cmd_gen_cmd_d = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x00000fffU;
        vlSelfRef.__PVT__cmd_len_d = 0U;
    }
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q)))) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                          & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                     | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                    | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                   | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                  | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                 | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                                | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                               | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                vlSelfRef.cmd_arb_eop_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    if (
                                                        (1U 
                                                         != 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (2U 
                                                             != 
                                                             (7U 
                                                              & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                            if (
                                                                (3U 
                                                                 != 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (
                                                                    (4U 
                                                                     != 
                                                                     (7U 
                                                                      & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                    if (
                                                                        (5U 
                                                                         != 
                                                                         (7U 
                                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                        vlSelfRef.__PVT__invalid_acmd = 1U;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                                if (vlSelfRef.__PVT__instantiated_q) {
                                                                    if (
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                                         & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                                            >> 2U))) {
                                                                        vlSelfRef.__PVT__reseed_cnt_exceeded = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (vlSelfRef.__PVT__instantiated_q) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (3U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                                            vlSelfRef.__PVT__invalid_cmd_seq = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                                    vlSelfRef.cmd_arb_eop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((0U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                 >> 4U)))) {
                                            vlSelfRef.cmd_arb_eop_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                                    vlSelfRef.cmd_arb_mop_o = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)
               ? (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__rready_i))
               : (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__wvalid_i) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_genbits_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440) 
                                                  << 1U));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__2__KET____DOT__u_csrng_cmd_stage__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__u_state_regs__DOT__state_raw;
    vlSelfRef.__PVT__cmd_fifo_pop = 0U;
    vlSelfRef.__PVT__cmd_err_ack = 0U;
    if ((0x67U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if (((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__)) 
                    & ((((((((((0xf5U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                               | (0x5bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                              | (0x1cU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                             | (1U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                            | (0x56U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                           | (0x8dU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                          | (0xc0U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                         | (0x93U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                        | (0xeeU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) 
                       | (0xbaU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))))) {
            vlSelfRef.__PVT__state_d = 0xf5U;
        } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                                    if ((1U == (7U 
                                                & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            if (((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o)) 
                                                 & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__reseed_cnt_reached_q) 
                                                    >> 2U))) {
                                                vlSelfRef.__PVT__cmd_err_ack = 1U;
                                                vlSelfRef.__PVT__state_d = 0xf5U;
                                            } else {
                                                vlSelfRef.__PVT__state_d = 0x1cU;
                                            }
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        if (vlSelfRef.__PVT__instantiated_q) {
                                            vlSelfRef.__PVT__state_d = 0x1cU;
                                        }
                                        if ((1U & (~ (IData)(vlSelfRef.__PVT__instantiated_q)))) {
                                            vlSelfRef.__PVT__cmd_err_ack = 1U;
                                            vlSelfRef.__PVT__state_d = 0xf5U;
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o))) {
                                        vlSelfRef.__PVT__state_d = 0x1cU;
                                    } else {
                                        vlSelfRef.__PVT__cmd_err_ack = 1U;
                                        vlSelfRef.__PVT__state_d = 0xf5U;
                                    }
                                    if (vlSelfRef.__PVT__cmd_err_ack) {
                                        vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                                        vlSelfRef.__PVT__state_d = 0x5bU;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__state_d = 0x67U;
                                } else if ((4U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                                    vlSelfRef.__PVT__state_d = 0xbaU;
                                }
                            } else {
                                vlSelfRef.__PVT__state_d = 0x67U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if (vlSelfRef.cmd_ack_i) {
                    vlSelfRef.__PVT__state_d = 0x93U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = ((0x00000010U 
                                             & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                    ? 0x67U
                                                    : 0x8dU)
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__state_d = 0x67U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.__PVT__cmd_gen_flag_q) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q)))) {
                                vlSelfRef.__PVT__state_d 
                                    = ((0U == (IData)(vlSelfRef.__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? 0xf5U : 0xeeU);
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0xf5U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                  ? 0x67U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))
                                                   ? 0xc0U
                                                   : 0x67U))
                                                 : 0x67U)
                                             : 0x67U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__state_d = 0x67U;
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__cmd_fifo_pop 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)));
                            if (((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                 & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__cmd_req_qe)))) {
                                vlSelfRef.__PVT__state_d = 0xf5U;
                            }
                        } else {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.__PVT__state_d = 0x67U;
                        } else if ((0U != (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__depth_o))) {
                            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
                            if ((1U == (IData)(vlSelfRef.__PVT__cmd_len_q))) {
                                vlSelfRef.__PVT__state_d = 0x8dU;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__state_d = 0x67U;
                    } else if ((4U & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o))) {
                        vlSelfRef.__PVT__state_d = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__state_d = 0x67U;
                }
            } else {
                vlSelfRef.__PVT__state_d = 0x67U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__state_d = 0x67U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__cmd_fifo_pop = 1U;
            vlSelfRef.__PVT__state_d = ((0U == (0x0000000fU 
                                                & (vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rdata_o 
                                                   >> 4U)))
                                         ? 0x8dU : 0x56U);
        } else {
            vlSelfRef.__PVT__state_d = 0x67U;
        }
    }
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cs_enable_fo__BRA__27__KET__) {
        vlSelfRef.__PVT__cmd_ack_sts_d = ((IData)(vlSelfRef.__PVT__cmd_err_ack)
                                           ? ((IData)(vlSelfRef.__PVT__reseed_cnt_exceeded)
                                               ? 4U
                                               : ((IData)(vlSelfRef.__PVT__invalid_cmd_seq)
                                                   ? 3U
                                                   : 1U))
                                           : ((IData)(vlSelfRef.__PVT__cmd_final_ack)
                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_state_db__DOT__state_db_sts_sts_q)
                                               : (IData)(vlSelfRef.__PVT__cmd_ack_sts_q)));
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i 
            = vlSelfRef.__PVT__cmd_fifo_pop;
    } else {
        vlSelfRef.__PVT__cmd_ack_sts_d = 0U;
        vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i = 0U;
    }
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_437 = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                  & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__rready_i));
    vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.cmd_stage_sfifo_cmd_err_o = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_436) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_437) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438)));
}

VL_ATTR_COLD void Vsim_csrng_cmd_stage__CB2___ctor_var_reset(Vsim_csrng_cmd_stage__CB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_csrng_cmd_stage__CB2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->cs_enable_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9118576766152810086ull);
    vlSelf->cmd_stage_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12945996595718186062ull);
    vlSelf->cmd_stage_shid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2050842650829078622ull);
    vlSelf->cmd_stage_bus_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12943244574690360214ull);
    vlSelf->cmd_stage_rdy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693608761500057658ull);
    vlSelf->reseed_cnt_reached_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 92766407590315234ull);
    vlSelf->reseed_cnt_alert_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7880559431858710357ull);
    vlSelf->invalid_cmd_seq_alert_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1447538219680019543ull);
    vlSelf->invalid_acmd_alert_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112127182857471813ull);
    vlSelf->cmd_arb_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6918888346644998997ull);
    vlSelf->cmd_arb_sop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7858276724589746138ull);
    vlSelf->cmd_arb_mop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11067684399012500282ull);
    vlSelf->cmd_arb_eop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14770755859619664109ull);
    vlSelf->cmd_arb_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7782492981406293120ull);
    vlSelf->cmd_arb_bus_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18067056919492819060ull);
    vlSelf->cmd_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 475587478891770687ull);
    vlSelf->cmd_ack_sts_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13391758406985101262ull);
    vlSelf->cmd_stage_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13258538768792936926ull);
    vlSelf->cmd_stage_ack_sts_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16857180847246869739ull);
    vlSelf->genbits_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5668554898853101842ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->genbits_bus_i, __VscopeHash, 4974718826044975225ull);
    vlSelf->genbits_fips_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10039851545470985400ull);
    vlSelf->genbits_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11814354448818257014ull);
    vlSelf->genbits_rdy_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16021688226314406800ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->genbits_bus_o, __VscopeHash, 1978639251283817017ull);
    vlSelf->genbits_fips_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18275584043153442453ull);
    vlSelf->cmd_stage_sfifo_cmd_err_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16767971004495443877ull);
    vlSelf->cmd_stage_sfifo_genbits_err_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5504631620514779043ull);
    vlSelf->cmd_gen_cnt_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7332929325021774343ull);
    vlSelf->cmd_stage_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15592215080398618333ull);
    vlSelf->__PVT__cmd_fifo_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14916983553688623799ull);
    vlSelf->__PVT__cmd_len_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9395795883493031540ull);
    vlSelf->__PVT__cmd_gen_cnt_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4125910009224006144ull);
    vlSelf->__PVT__cmd_gen_1st_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4035953243641848781ull);
    vlSelf->__PVT__cmd_gen_inc_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2495423973409300558ull);
    vlSelf->__PVT__cmd_gen_cnt_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946978160006946829ull);
    vlSelf->__PVT__cmd_final_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5781269083322310771ull);
    vlSelf->__PVT__cmd_err_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7733283629633078264ull);
    vlSelf->__PVT__reseed_cnt_exceeded = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182036832281280810ull);
    vlSelf->__PVT__invalid_cmd_seq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8536573153677392839ull);
    vlSelf->__PVT__invalid_acmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16130983577017007974ull);
    vlSelf->__PVT__cmd_ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4138935942024470137ull);
    vlSelf->__PVT__cmd_ack_sts_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9262677449192372390ull);
    vlSelf->__PVT__cmd_ack_sts_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4169889840715748779ull);
    vlSelf->__PVT__cmd_len_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11050167078086654437ull);
    vlSelf->__PVT__cmd_len_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5923326437132373014ull);
    vlSelf->__PVT__cmd_gen_flag_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10453395645661023233ull);
    vlSelf->__PVT__cmd_gen_flag_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1047920639585694685ull);
    vlSelf->__PVT__cmd_gen_cmd_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6968046157341405939ull);
    vlSelf->__PVT__cmd_gen_cmd_d = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12280488543707300194ull);
    vlSelf->__PVT__instantiated_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5553643988662615710ull);
    vlSelf->__PVT__instantiated_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5016546067115444336ull);
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16948100255113424155ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9482557740391428015ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17403545219216812862ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15132773817299220855ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__depth_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16288072955015924628ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13208021028346704287ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8542848975295076399ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1483750072470977906ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11947226467370237048ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16268499652722478332ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 683072536028660804ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3681532171950691558ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5259999990675738690ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16229145816081625843ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9627718772403364093ull);
    vlSelf->__PVT__u_prim_fifo_cmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7703679516546555377ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13157381320764529133ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10418186503153814765ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16859798632142976038ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8021603634537999838ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16304535578740512236ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5044526553646175982ull);
    vlSelf->__PVT__u_prim_count_cmd_gen_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13087767554111347316ull);
    vlSelf->__PVT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7529622373113633306ull);
    vlSelf->__PVT__u_prim_fifo_genbits__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13751198035733422733ull);
    vlSelf->__PVT__u_prim_fifo_genbits__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1763476681205464511ull);
    vlSelf->__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11007318458157057991ull);
    vlSelf->__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__full_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3501978472629115477ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__u_prim_fifo_genbits__DOT__gen_singleton_fifo__DOT__storage, __VscopeHash, 6083263750503548673ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_306 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4629648436331467360ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_307 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14544041155435442190ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_424 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12402193737348819441ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_425 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13040072438246084957ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_426 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18394820978610099411ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_427 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720146758403254020ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_428 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16489693675069857697ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_429 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7978797717684116744ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_430 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15217157987142243026ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_431 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10636593712267868280ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_432 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6828913012190879605ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_433 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726721750567740806ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_434 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17297983011673708006ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_435 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1685601251886759256ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_436 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12365869458258154358ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_437 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9736540216667272314ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_438 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11395768511934470431ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_439 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16757477745652620674ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_440 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3947139117773340635ull);
}

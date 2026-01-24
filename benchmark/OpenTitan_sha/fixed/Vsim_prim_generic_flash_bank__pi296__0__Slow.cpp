// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_generic_flash_bank__pi296___eval_static__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___eval_static__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ReadLatency = 1U;
    vlSelfRef.__PVT__ProgLatency = 0x00000032U;
    vlSelfRef.__PVT__EraseLatency = 0x000000c8U;
}

VL_ATTR_COLD void Vsim_prim_generic_flash_bank__pi296___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_3;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__full_o = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                == 
                                                (2U 
                                                 ^ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.init_busy_o = 0U;
    __Vtemp_3[0U] = vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U];
    __Vtemp_3[1U] = vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U];
    __Vtemp_3[2U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                      << 0x0000000cU) | vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U]);
    __Vtemp_3[3U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                      >> 0x00000014U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                                         << 0x0000000cU));
    __Vtemp_3[4U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                      << 0x00000018U) | ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                                          >> 0x00000014U) 
                                         | (vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] 
                                            << 0x0000000cU)));
    __Vtemp_3[5U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                      >> 8U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                                << 0x00000018U));
    __Vtemp_3[6U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                      >> 8U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                                << 0x00000018U));
    __Vtemp_3[7U] = (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                     >> 8U);
    __VExpandSel_WordIdx_1 = (7U & (((IData)(0x0000004cU) 
                                     * (IData)(vlSelfRef.__PVT__info_sel_q)) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x0000004cU) 
                                             * (IData)(vlSelfRef.__PVT__info_sel_q)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__rd_part_q) {
        if ((0xe3U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                      * (IData)(vlSelfRef.__PVT__info_sel_q))))) {
            vlSelfRef.__PVT__rd_data_d[0U] = (((__Vtemp_3[
                                                ((IData)(1U) 
                                                 + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (__Vtemp_3[__VExpandSel_WordIdx_1] 
                                                 >> __VExpandSel_LoShift_1));
            vlSelfRef.__PVT__rd_data_d[1U] = (((__Vtemp_3[
                                                ((IData)(2U) 
                                                 + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (__Vtemp_3[
                                                 ((IData)(1U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1));
            vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                              & (((((5U 
                                                     <= __VExpandSel_WordIdx_1)
                                                     ? 0U
                                                     : 
                                                    __Vtemp_3[
                                                    ((IData)(3U) 
                                                     + __VExpandSel_WordIdx_1)]) 
                                                   << __VExpandSel_HiShift_1) 
                                                  & __VExpandSel_HiMask_1) 
                                                 | (__Vtemp_3[
                                                    ((IData)(2U) 
                                                     + __VExpandSel_WordIdx_1)] 
                                                    >> __VExpandSel_LoShift_1)));
        } else {
            vlSelfRef.__PVT__rd_data_d[0U] = 0U;
            vlSelfRef.__PVT__rd_data_d[1U] = 0U;
            vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                              & 0U);
        }
    } else {
        vlSelfRef.__PVT__rd_data_d[0U] = vlSelfRef.__PVT__rd_data_main[0U];
        vlSelfRef.__PVT__rd_data_d[1U] = vlSelfRef.__PVT__rd_data_main[1U];
        vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                          & vlSelfRef.__PVT__rd_data_main[2U]);
    }
    vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__full_o)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    __VExpandSel_WordIdx_2 = (7U & (((IData)(0x00000065U) 
                                     * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    >> 5U));
    __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000065U) 
                                             * (1U 
                                                & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
    if (__VExpandSel_Aligned_2) {
        __VExpandSel_HiShift_2 = 0U;
        __VExpandSel_HiMask_2 = 0U;
    } else {
        __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_2);
        __VExpandSel_HiMask_2 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] = 0U;
    } else if ((0xc9U >= (0x000000ffU & ((IData)(0x00000065U) 
                                         * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))) {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_2] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
            = (0x0000001fU & (((((3U <= __VExpandSel_WordIdx_2)
                                  ? 0U : vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(4U) + __VExpandSel_WordIdx_2)]) 
                                << __VExpandSel_HiShift_2) 
                               & __VExpandSel_HiMask_2) 
                              | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                                 >> __VExpandSel_LoShift_2)));
    } else {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] = 0U;
    }
    if ((1U == vlSelfRef.__PVT__ReadLatency)) {
        vlSelfRef.rd_data_o[0U] = vlSelfRef.__PVT__rd_data_d[0U];
        vlSelfRef.rd_data_o[1U] = vlSelfRef.__PVT__rd_data_d[1U];
        vlSelfRef.rd_data_o[2U] = vlSelfRef.__PVT__rd_data_d[2U];
    } else {
        vlSelfRef.rd_data_o[0U] = vlSelfRef.__PVT__rd_data_q[0U];
        vlSelfRef.rd_data_o[1U] = vlSelfRef.__PVT__rd_data_q[1U];
        vlSelfRef.rd_data_o[2U] = vlSelfRef.__PVT__rd_data_q[2U];
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            vlSelfRef.init_busy_o = 1U;
        }
    }
    vlSelfRef.ack_o = ((~ (IData)(vlSelfRef.init_busy_o)) 
                       & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i 
        = (0x0000ffffU & (((vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            << 0x00000011U) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                               >> 0x0000000fU)) 
                          + vlSelfRef.__PVT__index_cnt));
    vlSelfRef.__PVT__bk_erase_req = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                        >> 0x0000001fU));
    vlSelfRef.__PVT__pg_erase_req = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U]));
    vlSelfRef.__PVT__prog_req = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                          >> 3U)));
    vlSelfRef.__PVT__rd_req = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                               & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                  >> 4U));
    vlSelfRef.__PVT__time_cnt_set1 = 0U;
    vlSelfRef.__PVT__index_limit_d = vlSelfRef.__PVT__index_limit_q;
    vlSelfRef.__PVT__prog_pend_d = vlSelfRef.__PVT__prog_pend_q;
    vlSelfRef.__PVT__time_limit_d = vlSelfRef.__PVT__time_limit_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__time_cnt_set1 = 1U;
                        }
                    }
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__prog_pend_d = 0U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                if (vlSelfRef.__PVT__prog_req) {
                    vlSelfRef.__PVT__prog_pend_d = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_req)))) {
                        if (vlSelfRef.__PVT__pg_erase_req) {
                            vlSelfRef.__PVT__index_limit_d = 0x00000100U;
                            vlSelfRef.__PVT__time_limit_d 
                                = vlSelfRef.__PVT__EraseLatency;
                        } else if (vlSelfRef.__PVT__bk_erase_req) {
                            vlSelfRef.__PVT__index_limit_d = 0x00010000U;
                            vlSelfRef.__PVT__time_limit_d = 0x000007d0U;
                        }
                    }
                }
            }
        }
    }
}

VL_ATTR_COLD void Vsim_prim_generic_flash_bank__pi296___ctor_var_reset(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100356933441386244ull);
    vlSelf->prog_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3042469070660473896ull);
    vlSelf->prog_last_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4458111911667319079ull);
    vlSelf->prog_type_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10811734845132208236ull);
    vlSelf->pg_erase_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5036184251961820668ull);
    vlSelf->bk_erase_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15949722377111658953ull);
    vlSelf->erase_suspend_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11359303767774228429ull);
    vlSelf->he_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14486760730380387892ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5910257723895866083ull);
    vlSelf->part_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3491346593565551889ull);
    vlSelf->info_sel_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12172803439872271244ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->prog_data_i, __VscopeHash, 16854267878087337255ull);
    vlSelf->ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7968475957095882202ull);
    vlSelf->done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13948340918712020156ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->rd_data_o, __VscopeHash, 10544723889304546163ull);
    vlSelf->init_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14069612353990716535ull);
    vlSelf->init_busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 620700616171975674ull);
    vlSelf->flash_power_ready_h_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 641047095709798399ull);
    vlSelf->flash_power_down_h_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15226519993346067217ull);
    vlSelf->__PVT__ReadLatency = 0;
    vlSelf->__PVT__ProgLatency = 0;
    vlSelf->__PVT__EraseLatency = 0;
    vlSelf->__PVT__st_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11719748881096355615ull);
    vlSelf->__PVT__st_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2332799710090547508ull);
    vlSelf->__PVT__time_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5532137040440889995ull);
    vlSelf->__PVT__index_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9191600349956034161ull);
    vlSelf->__PVT__time_cnt_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 547680351996050904ull);
    vlSelf->__PVT__time_cnt_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169721674261961691ull);
    vlSelf->__PVT__time_cnt_set1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1660303787381695265ull);
    vlSelf->__PVT__index_cnt_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11090093454670681298ull);
    vlSelf->__PVT__index_cnt_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18033884966835234755ull);
    vlSelf->__PVT__index_limit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4277212588479154700ull);
    vlSelf->__PVT__index_limit_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16152189822470928883ull);
    vlSelf->__PVT__time_limit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9238862117988802598ull);
    vlSelf->__PVT__time_limit_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12735223349696596609ull);
    vlSelf->__PVT__prog_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15642446493052326667ull);
    vlSelf->__PVT__prog_pend_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316399539463564978ull);
    vlSelf->__PVT__mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14303737313341316090ull);
    vlSelf->__PVT__mem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508629647090141305ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__mem_wdata, __VscopeHash, 5431754401481461448ull);
    vlSelf->__PVT__pop_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14758323778648589083ull);
    vlSelf->__PVT__mem_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18161722263732229644ull);
    vlSelf->__PVT__mem_rd_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11912866194036467290ull);
    vlSelf->__PVT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855675061116762241ull);
    vlSelf->__PVT__prog_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6495462381557816629ull);
    vlSelf->__PVT__pg_erase_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6649160870241191385ull);
    vlSelf->__PVT__bk_erase_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9065302542240068464ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__rd_data_q, __VscopeHash, 9307642184557492022ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__rd_data_d, __VscopeHash, 10183008630094617418ull);
    vlSelf->__PVT__rd_part_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9146969776546448610ull);
    vlSelf->__PVT__info_sel_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12598618312239516794ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__rd_data_main, __VscopeHash, 927559135568291538ull);
    vlSelf->__PVT__unnamedblk1__DOT__flash_rand_delay_en = 0;
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o, __VscopeHash, 5559077496951886571ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o, __VscopeHash, 5744130894658368339ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o, __VscopeHash, 16198706876686055588ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8251249696028488912ull);
    VL_SCOPED_RAND_RESET_W(101, vlSelf->__PVT__u_cmd_fifo__DOT__rdata_o, __VscopeHash, 10142192625720860612ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11577880718897369109ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9179941457681280445ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8979263477828887755ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13445950319666787392ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1212658274207947354ull);
    VL_SCOPED_RAND_RESET_W(202, vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 870870561031472126ull);
    VL_SCOPED_RAND_RESET_W(101, vlSelf->u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0, __VscopeHash, 14591113493603790112ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15536652125053061486ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6979250666223428801ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11926410826090818643ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11397915908419132403ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13362444822169240938ull);
    vlSelf->__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15444265735823753532ull);
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 849514526366435641ull);
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14170015150865726828ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(76, vlSelf->u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0], __VscopeHash, 18031590902891168494ull);
    }
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 952124805865779015ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0, __VscopeHash, 9533526782690141709ull);
    vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16101425355046665977ull);
    for (int __Vi0 = 0; __Vi0 < 2560; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0], __VscopeHash, 15990499258093900525ull);
    }
    vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12238272490633171912ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0, __VscopeHash, 13351604172803937744ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0, __VscopeHash, 5059023174721326971ull);
    vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2290880678360347336ull);
    for (int __Vi0 = 0; __Vi0 < 2560; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0], __VscopeHash, 15949528658123233110ull);
    }
    vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2958595534109728777ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0, __VscopeHash, 5097210472423569078ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0, __VscopeHash, 3401202810186866850ull);
    vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8303921997901492028ull);
    for (int __Vi0 = 0; __Vi0 < 2560; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0], __VscopeHash, 17183290678580123073ull);
    }
    vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18073384495583093024ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0, __VscopeHash, 1028677133181546191ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0, __VscopeHash, 2948581168689221328ull);
}

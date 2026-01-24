// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_flash_phy_core___eval_static__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___eval_static__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0 = 0U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0.fill(0U);
}

VL_ATTR_COLD void Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = 0;
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h7fd72a4c_1_0;
    __VdfgRegularize_h7fd72a4c_1_0 = 0;
    CData/*3:0*/ __VdfgRegularize_h7fd72a4c_1_1;
    __VdfgRegularize_h7fd72a4c_1_1 = 0;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                << 4U) | (((0x0342U 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 3U) | 
                                          ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                              | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                  << 1U) | (0x02deU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))) {
        if ((0U != ((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_core.sv:331: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[0].u_core: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_core.sv", 331, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_erase.sv:52: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[0].u_core.u_erase: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_erase.sv", 52, "");
            }
        }
    }
    vlSelfRef.__PVT__u_host_arb__DOT__data_i[0U] = 
        vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__data_i[1U] = 
        vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U] 
        = (0x0000007fU & (((((2U & (VL_REDXOR_64((0xfe00000000000000ULL 
                                                  & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0x01fffffffc000000ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                            << 5U) | (((2U & (VL_REDXOR_64(
                                                           (0x01fffe0003fff800ULL 
                                                            & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0x01fe01fe03fc07f0ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                                      << 3U)) | ((4U 
                                                  & (VL_REDXOR_64(
                                                                  (0xf1e1e1e1e3c3c78eULL 
                                                                   & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0xcd9999999b33366dULL 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xab55555556aaad5bULL 
                                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))))));
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[0U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[0U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[1U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[1U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[2U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[2U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[3U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[3U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf[0U] 
        = vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf[1U] 
        = vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf[0U] 
        = vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf[1U] 
        = vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc;
    vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
            vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 1U;
        }
    }
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o 
        = (((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
            != (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5 
        = ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                         >> 1U))) | (IData)(((5U == 
                                              (7U & 
                                               vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                                             & (~ (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                       >> 4U)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                                    >> 2U)))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_dependency = ((
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 4U))) 
                                                      << 2U)) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 2U))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))));
    vlSelfRef.__PVT__fsm_err = 0U;
    if ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x003bU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__fsm_err = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ctrl_fsm_idle = 0U;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
    } else if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__arb_host_gnt_err = (((IData)(vlSelfRef.__PVT__host_gnt_rd_err) 
                                          & (1U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                         | (IData)(vlSelfRef.__PVT__host_outstanding_rd_err));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[0U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [0U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[1U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [1U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[2U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [2U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[3U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [3U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[0U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[1U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[0U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[1U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x000007f0U & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & ((((((2U & (VL_REDXOR_32(
                                                     ((0xfe000000U 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]) 
                                                      ^ 
                                                      (0x0000000fU 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  ((0xfc000000U 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                   ^ 
                                                                   (0x01ffffffU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))))) 
                                << 5U) | (((2U & (VL_REDXOR_32(
                                                               ((0x03fff800U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                ^ 
                                                                (0x01fffe00U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (((0x03fc07f0U 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                             ^ 
                                                             (0x01fe01feU 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                            ^ 
                                                            (0x0000000fU 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))) 
                                          << 3U)) | 
                              ((4U & (VL_REDXOR_32(
                                                   ((0xe3c3c78eU 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0xf1e1e1e1U 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (((0x9b33366dU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                    ^ 
                                                                    (0xcd999999U 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                   ^ 
                                                                   (0x0000000cU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (((0x56aaad5bU 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                     ^ 
                                                                     (0xab555555U 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                    ^ 
                                                                    (0x0000000aU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))))) 
                             << 4U)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18 
        = (((IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3) 
            << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1));
    __VdfgRegularize_h7fd72a4c_1_1 = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)) 
                                      & ((((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 3U) | 
                                          ((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 2U)) 
                                         | (((2U == 
                                              (3U & 
                                               (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                >> 1U))) 
                                             << 1U) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                   >> 1U))))));
    vlSelfRef.__PVT__host_outstanding_err_event = (
                                                   (~ (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x0bU >= (0x0000000fU & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                     ? (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (0x0000000fU 
                                           & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))
                     : 0U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0ULL : (((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                       (((IData)(0x0000003fU) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                        >> 5U)])) << 
                       ((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                         ? 0x00000020U : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (1U 
                                                              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                      | (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                                     (((IData)(0x0000001fU) 
                                                       + 
                                                       (0x0000007fU 
                                                        & VL_SHIFTL_III(7,7,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                         | ((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                            (3U & (
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U) 
                                                   >> 5U))])) 
                            >> (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))));
    __VExpandSel_WordIdx_1 = (7U & (((IData)(0x0000004cU) 
                                     * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x0000004cU) 
                                             * (1U 
                                                & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    } else if ((0x97U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                         * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_1] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
            = (0x00000fffU & (((((2U <= __VExpandSel_WordIdx_1)
                                  ? 0U : vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_1)]) 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o) 
                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o) 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o) 
                                                       & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o))));
    vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc = 
        (((((~ ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5) 
                | (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18)))) 
            & ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))) | (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U)))))))) 
           << 3U) | (((~ (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18))) 
                      & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5)) 
                     << 2U)) | ((((~ (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)) 
                                  & (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3)) 
                                 << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)));
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match = (((
                                                   ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                    & (IData)(
                                                              (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                >> 5U) 
                                                               & (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 4U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 3U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                       & (IData)(
                                                                 (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                   >> 2U) 
                                                                  & (4U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__hint_forward = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 5U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 6U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_descram = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 7U)));
    __VdfgRegularize_h7fd72a4c_1_0 = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)) 
                                      | (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)));
    vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [0U][0U] >> 6U));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [1U][0U] >> 6U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [2U][0U] >> 6U));
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [0U][0U]));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [1U][0U]));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [2U][0U]));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [3U][0U] >> 6U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [3U][0U]));
    }
    vlSelfRef.__PVT__rd_op_req = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_descram)));
    vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0 
        = ((~ (IData)(__VdfgRegularize_h7fd72a4c_1_0)) 
           & (0U != (IData)(__VdfgRegularize_h7fd72a4c_1_1)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i 
        = ((IData)(__VdfgRegularize_h7fd72a4c_1_0) ? 0U
            : (IData)(__VdfgRegularize_h7fd72a4c_1_1));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 3U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 2U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     >> 2U)) | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i)) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                        >> 1U))) | ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                                        | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                                       | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
}

VL_ATTR_COLD void Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1;
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__ecc_single_err = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__arb_host_gnt_err)) 
                                                     & VL_REDXOR_32(
                                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[0U] 
                                                                      ^ 
                                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[1U]) 
                                                                     ^ 
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[2U]))));
    if (vlSelfRef.__PVT__arb_host_gnt_err) {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] = 0x00000fffU;
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.rd_data_o[2U];
    }
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.ack_o) 
           | (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q));
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 
        = (((((2U & (VL_REDXOR_32(((0xfe000000U & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U]) 
                                   ^ (0x0000040fU & 
                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0xfc000000U 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0x01ffffffU 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   ^ 
                                                   (0x00000200U 
                                                    & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
             << 5U) | (((2U & (VL_REDXOR_32((((0x03fff800U 
                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                              ^ (0x01fffe00U 
                                                 & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                             ^ (0x00000100U 
                                                & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0x03fc07f0U 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                              ^ 
                                                              (0x01fe01feU 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                             ^ 
                                                             (0x0000008fU 
                                                              & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
                       << 3U)) | ((4U & (VL_REDXOR_32(
                                                      (((0xe3c3c78eU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xf1e1e1e1U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x00000040U 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_32(
                                                       (((0x9b33366dU 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                         ^ 
                                                         (0xcd999999U 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                        ^ 
                                                        (0x0000002cU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (((0x56aaad5bU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xab555555U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x0000001aU 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err) 
            << 7U) | (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1));
    vlSelfRef.__PVT__u_rd__DOT__ecc_multi_err = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err)) 
                                                 & (0U 
                                                    != (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1)));
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0] = 0U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0 
        = vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o;
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[0U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xa6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xa5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xa4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xa3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xa2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xa1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x9fU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x9eU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x9dU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x9cU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0x9bU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x9aU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0x99U] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x98U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x97U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x96U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0x95U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0x94U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0x93U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0x92U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x91U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0x8fU] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x8eU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x8dU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0x8cU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0x8bU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x8aU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x89U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x87U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x86U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x85U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0x83U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[1U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xc7U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xc6U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xc5U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xc4U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xc3U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xc2U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xc1U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xbfU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xbeU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xbdU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0xbcU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xbbU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xbaU] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb9U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xb8U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb7U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xb6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xb5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xb4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xb1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb0U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xafU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0xaeU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0xadU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xacU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xabU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xaaU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa9U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa8U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0xa7U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[2U] 
        = (0x0000000fU & ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                    [0xcbU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                               >> 3U)) 
                                   << 1U)) | (1U & 
                                              (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xcaU] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                  >> 2U)))) 
                           << 2U) | ((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xc9U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                >> 1U)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xc8U] 
                                              ^ vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))));
}

VL_ATTR_COLD void Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__0(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = 0;
    CData/*0:0*/ u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3;
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h7fd72a4c_1_0;
    __VdfgRegularize_h7fd72a4c_1_0 = 0;
    CData/*3:0*/ __VdfgRegularize_h7fd72a4c_1_1;
    __VdfgRegularize_h7fd72a4c_1_1 = 0;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                << 4U) | (((0x0342U 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 3U) | 
                                          ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                              | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                  << 1U) | (0x02deU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))))) {
        if ((0U != ((((0x003bU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0342U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x03edU 
                                            == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x00a6U == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_core.sv:331: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[1].u_core: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_core.sv", 331, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_phy_erase.sv:52: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.gen_flash_cores[1].u_core.u_erase: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_phy_erase.sv", 52, "");
            }
        }
    }
    vlSelfRef.__PVT__u_host_arb__DOT__data_i[0U] = 
        vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__data_i[1U] = 
        vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6[2U] 
        = (0x0000007fU & (((((2U & (VL_REDXOR_64((0xfe00000000000000ULL 
                                                  & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0x01fffffffc000000ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                            << 5U) | (((2U & (VL_REDXOR_64(
                                                           (0x01fffe0003fff800ULL 
                                                            & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0x01fe01fe03fc07f0ULL 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))) 
                                      << 3U)) | ((4U 
                                                  & (VL_REDXOR_64(
                                                                  (0xf1e1e1e1e3c3c78eULL 
                                                                   & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (VL_REDXOR_64(
                                                                     (0xcd9999999b33366dULL 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xab55555556aaad5bULL 
                                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data)))))));
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[0U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[0U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[1U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[1U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[2U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[2U];
    vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i[3U] 
        = vlSelfRef.__PVT__u_rd__DOT__dummy_data[3U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf[0U] 
        = vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf[1U] 
        = vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf[0U] 
        = vlSelfRef.__PVT__data_tie_off[0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf[1U] 
        = vlSelfRef.__PVT__data_tie_off[1U];
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U] 
        = (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data);
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U] 
        = (IData)((vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc;
    vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.__PVT__u_erase__DOT__state_q))) {
            vlSelfRef.__PVT__u_erase__DOT__suspend_valid = 1U;
        }
    }
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
            != (2U ^ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o 
        = (((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
            != (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
           & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (2U ^ (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5 
        = ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                         >> 1U))) | (IData)(((5U == 
                                              (7U & 
                                               vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U])) 
                                             & (~ (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                       >> 4U)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))))));
    u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3 = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                                 | (IData)(
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U])) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                                    >> 2U)))))));
    vlSelfRef.__PVT__u_rd__DOT__buf_dependency = ((
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 4U))) 
                                                      << 2U)) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                           >> 2U))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt)))));
    vlSelfRef.__PVT__fsm_err = 0U;
    if ((0x02deU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                    if ((0x003bU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__fsm_err = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ctrl_fsm_idle = 0U;
    if ((0x02deU == (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
    } else if ((0x00a6U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
        if ((0x03edU != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
            if ((0x0342U != (IData)(vlSelfRef.__PVT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__ctrl_fsm_idle = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[0U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[1U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[2U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][0U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][1U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[1U];
    vlSelfRef.__PVT__u_rd__DOT__read_buf[3U][2U] = 
        vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[2U];
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__arb_host_gnt_err = (((IData)(vlSelfRef.__PVT__host_gnt_rd_err) 
                                          & (1U == (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                         | (IData)(vlSelfRef.__PVT__host_outstanding_rd_err));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           == (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[0U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [0U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[1U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [1U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[2U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [2U];
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__data_i[3U] 
        = vlSelfRef.u_rd__DOT____Vcellinp__u_valid_random__data_i
        [3U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[0U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[1U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[0U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U];
    vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[1U] 
        = vlSelfRef.__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[0U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[1U] 
        = vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U];
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x000007f0U & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]));
    vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U] 
        = ((0x0000000fU & vlSelfRef.gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6[2U]) 
           | (0x000007ffU & ((((((2U & (VL_REDXOR_32(
                                                     ((0xfe000000U 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]) 
                                                      ^ 
                                                      (0x0000000fU 
                                                       & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  ((0xfc000000U 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                   ^ 
                                                                   (0x01ffffffU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))))) 
                                << 5U) | (((2U & (VL_REDXOR_32(
                                                               ((0x03fff800U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                ^ 
                                                                (0x01fffe00U 
                                                                 & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (((0x03fc07f0U 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                             ^ 
                                                             (0x01fe01feU 
                                                              & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                            ^ 
                                                            (0x0000000fU 
                                                             & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))) 
                                          << 3U)) | 
                              ((4U & (VL_REDXOR_32(
                                                   ((0xe3c3c78eU 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0xf1e1e1e1U 
                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U]))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (((0x9b33366dU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                    ^ 
                                                                    (0xcd999999U 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                   ^ 
                                                                   (0x0000000cU 
                                                                    & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (((0x56aaad5bU 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[0U]) 
                                                                     ^ 
                                                                     (0xab555555U 
                                                                      & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[1U])) 
                                                                    ^ 
                                                                    (0x0000000aU 
                                                                     & vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i[2U]))))))) 
                             << 4U)));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18 
        = (((IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3) 
            << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1));
    __VdfgRegularize_h7fd72a4c_1_1 = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)) 
                                      & ((((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 3U) | 
                                          ((2U == (3U 
                                                   & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U] 
                                                      >> 1U))) 
                                           << 2U)) 
                                         | (((2U == 
                                              (3U & 
                                               (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U] 
                                                >> 1U))) 
                                             << 1U) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U] 
                                                   >> 1U))))));
    vlSelfRef.__PVT__host_outstanding_err_event = (
                                                   (~ (IData)(vlSelfRef.__PVT__ctrl_fsm_idle)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_en_q));
    vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x0bU >= (0x0000000fU & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                     ? (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (0x0000000fU 
                                           & ((IData)(6U) 
                                              * (1U 
                                                 & (IData)(vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))
                     : 0U));
    vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0ULL : (((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                       (((IData)(0x0000003fU) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                        >> 5U)])) << 
                       ((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                         ? 0x00000020U : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (1U 
                                                              & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                      | (((0U == (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U)))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                                     (((IData)(0x0000001fU) 
                                                       + 
                                                       (0x0000007fU 
                                                        & VL_SHIFTL_III(7,7,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))) 
                         | ((QData)((IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage[
                                            (3U & (
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U) 
                                                   >> 5U))])) 
                            >> (0x0000001fU & VL_SHIFTL_III(7,7,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 6U))))));
    __VExpandSel_WordIdx_1 = (7U & (((IData)(0x0000004cU) 
                                     * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x0000004cU) 
                                             * (1U 
                                                & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    } else if ((0x97U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                         * (1U & (IData)(vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt->__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))) {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_1] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] 
            = (((vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                 << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
               | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                  >> __VExpandSel_LoShift_1));
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
            = (0x00000fffU & (((((2U <= __VExpandSel_WordIdx_1)
                                  ? 0U : vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_1)]) 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] = 0U;
    }
    vlSelfRef.__PVT__u_rd__DOT__rd_stages_rdy = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o) 
                                                 & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o) 
                                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o) 
                                                       & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o))));
    vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc = 
        (((((~ ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5) 
                | (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18)))) 
            & ((0U == (3U & (vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U] 
                             >> 1U))) | (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U])) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt) 
                                                         >> 6U)))))))) 
           << 3U) | (((~ (0U != (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18))) 
                      & (IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5)) 
                     << 2U)) | ((((~ (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)) 
                                  & (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_3)) 
                                 << 1U) | (IData)(u_rd__DOT____VdfgRegularize_hfb58ac9e_0_1)));
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match = (((
                                                   ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                    & (IData)(
                                                              (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                >> 5U) 
                                                               & (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 4U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                      & (IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                  >> 3U) 
                                                                 & (4U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o[0U]))))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15) 
                                                       & (IData)(
                                                                 (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o) 
                                                                   >> 2U) 
                                                                  & (4U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelfRef.u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__hint_forward = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 5U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_dropmsk = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 6U)));
    vlSelfRef.__PVT__u_rd__DOT__hint_descram = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                   & (vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o[2U] 
                                                      >> 7U)));
    __VdfgRegularize_h7fd72a4c_1_0 = ((0U != (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_invalid_alloc)) 
                                      | (0x0000000fU 
                                         == (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_dependency)));
    vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [0U][0U] >> 6U));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [1U][0U] >> 6U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [2U][0U] >> 6U));
    }
    vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [0U][0U]));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [1U][0U]));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [2U][0U]));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_match))) {
        vlSelfRef.__PVT__u_rd__DOT__buf_addr_xor = 
            (0x0000ffffU & (vlSelfRef.__PVT__u_rd__DOT__read_buf
                            [3U][0U] >> 6U));
        vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_rd__DOT__buf_rsp_err) 
                                                      | vlSelfRef.__PVT__u_rd__DOT__read_buf
                                                      [3U][0U]));
    }
    vlSelfRef.__PVT__rd_op_req = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlSelfRef.__PVT__u_rd__DOT__hint_descram)));
    vlSelfRef.u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0 
        = ((~ (IData)(__VdfgRegularize_h7fd72a4c_1_0)) 
           & (0U != (IData)(__VdfgRegularize_h7fd72a4c_1_1)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i 
        = ((IData)(__VdfgRegularize_h7fd72a4c_1_0) ? 0U
            : (IData)(__VdfgRegularize_h7fd72a4c_1_1));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 3U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 2U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                  & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)) 
                 >> 1U));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                 & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q)));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     >> 2U)) | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                                & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i)) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                     | ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__req_i) 
                        >> 1U))) | ((~ ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                                        | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                                    & ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                                       | (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
}

VL_ATTR_COLD void Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1;
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 = 0;
    // Body
    vlSelfRef.__PVT__u_rd__DOT__ecc_single_err = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__arb_host_gnt_err)) 
                                                     & VL_REDXOR_32(
                                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[0U] 
                                                                      ^ 
                                                                      vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[1U]) 
                                                                     ^ 
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[2U]))));
    if (vlSelfRef.__PVT__arb_host_gnt_err) {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] = 0xffffffffU;
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] = 0x00000fffU;
    } else {
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[0U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[1U];
        vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.rd_data_o[2U];
    }
    vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__ack 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.ack_o) 
           | (IData)(vlSelfRef.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q));
    u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1 
        = (((((2U & (VL_REDXOR_32(((0xfe000000U & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U]) 
                                   ^ (0x0000040fU & 
                                      vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                     << 1U)) | (1U & VL_REDXOR_32((
                                                   ((0xfc000000U 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                    ^ 
                                                    (0x01ffffffU 
                                                     & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                   ^ 
                                                   (0x00000200U 
                                                    & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
             << 5U) | (((2U & (VL_REDXOR_32((((0x03fff800U 
                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                              ^ (0x01fffe00U 
                                                 & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                             ^ (0x00000100U 
                                                & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (((0x03fc07f0U 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                              ^ 
                                                              (0x01fe01feU 
                                                               & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                             ^ 
                                                             (0x0000008fU 
                                                              & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))))) 
                       << 3U)) | ((4U & (VL_REDXOR_32(
                                                      (((0xe3c3c78eU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xf1e1e1e1U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x00000040U 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_32(
                                                       (((0x9b33366dU 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                         ^ 
                                                         (0xcd999999U 
                                                          & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                        ^ 
                                                        (0x0000002cU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U]))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (((0x56aaad5bU 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U]) 
                                                        ^ 
                                                        (0xab555555U 
                                                         & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])) 
                                                       ^ 
                                                       (0x0000001aU 
                                                        & vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o 
        = (((IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err) 
            << 7U) | (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1));
    vlSelfRef.__PVT__u_rd__DOT__ecc_multi_err = ((~ (IData)(vlSelfRef.__PVT__u_rd__DOT__ecc_single_err)) 
                                                 & (0U 
                                                    != (IData)(u_rd__DOT__u_dec__DOT____VdfgRegularize_h53e59919_0_1)));
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0] = 0U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0[vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o] = 1U;
    vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Pre_h678d72af_0_0 
        = vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__syndrome_o;
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[0U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xa6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xa5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xa4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xa3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xa2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xa1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x9fU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x9eU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x9dU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x9cU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0x9bU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x9aU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0x99U] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x98U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0x97U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x96U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0x95U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0x94U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0x93U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0x92U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0x91U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0x8fU] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x8eU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x8dU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0x8cU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0x8bU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0x8aU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0x89U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0x87U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x86U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0x85U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0x83U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[0U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[1U] 
        = ((((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xc7U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000001fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xc6U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000001eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xc5U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000001dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xc4U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xc3U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000001bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xc2U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xc1U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000019U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xbfU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xbeU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 0x00000017U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xbdU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                 [0xbcU] 
                                                 ^ 
                                                 (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000015U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xbbU] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xbaU] 
                                              ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                 >> 0x00000013U)) 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb9U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                    [0xb8U] 
                                                    ^ 
                                                    (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                     >> 0x00000011U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb7U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                         [0xb6U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                    >> 0x0000000fU)) 
                        << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                         [0xb5U] ^ 
                                         (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                          >> 0x0000000eU)))) 
                << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                   [0xb4U] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                              >> 0x0000000dU)) 
                                  << 1U)) | (1U & (
                                                   vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                    >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xb2U] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                [0xb1U] 
                                                ^ (
                                                   vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xb0U] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xafU] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 8U)))))) 
             << 8U) | (((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                  [0xaeU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                             >> 7U)) 
                                 << 1U)) | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                  [0xadU] 
                                                  ^ 
                                                  (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                   >> 6U)))) 
                         << 6U) | (((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                            [0xacU] 
                                            ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                               >> 5U)) 
                                           << 1U)) 
                                    | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xabU] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                     [0xaaU] 
                                                     ^ 
                                                     (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa9U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                      [0xa8U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                                       [0xa7U] 
                                                       ^ 
                                                       vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[1U])))))));
    vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_o[2U] 
        = (0x0000000fU & ((((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                    [0xcbU] ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                               >> 3U)) 
                                   << 1U)) | (1U & 
                                              (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                               [0xcaU] 
                                               ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                  >> 2U)))) 
                           << 2U) | ((2U & ((vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                             [0xc9U] 
                                             ^ (vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U] 
                                                >> 1U)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.u_rd__DOT__u_dec__DOT____VdfgBinToOneHot_Tab_h678d72af_0_0
                                              [0xc8U] 
                                              ^ vlSelfRef.__PVT__u_rd__DOT__u_dec__DOT__data_i[2U])))));
}

VL_ATTR_COLD void Vsim_flash_phy_core___ctor_var_reset(Vsim_flash_phy_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_flash_phy_core___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->host_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 360685144530628310ull);
    vlSelf->host_scramble_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6917549400040365311ull);
    vlSelf->host_ecc_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11641423773901998445ull);
    vlSelf->host_addr_i = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11464476022614356582ull);
    vlSelf->req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841108072821397437ull);
    vlSelf->scramble_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18037964557644544571ull);
    vlSelf->ecc_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17240794876064065609ull);
    vlSelf->he_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15299403095545050090ull);
    vlSelf->rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100356933441386244ull);
    vlSelf->prog_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3042469070660473896ull);
    vlSelf->pg_erase_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5036184251961820668ull);
    vlSelf->bk_erase_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15949722377111658953ull);
    vlSelf->erase_suspend_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11359303767774228429ull);
    vlSelf->part_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3491346593565551889ull);
    vlSelf->info_sel_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12172803439872271244ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5910257723895866083ull);
    vlSelf->prog_data_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 16854267878087337255ull);
    vlSelf->prog_last_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4458111911667319079ull);
    vlSelf->prog_type_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10811734845132208236ull);
    vlSelf->rd_buf_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301777684945322743ull);
    vlSelf->flash_disable_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7233553619109507445ull);
    VL_SCOPED_RAND_RESET_W(147, vlSelf->scramble_req_o, __VscopeHash, 2321776324033352119ull);
    VL_SCOPED_RAND_RESET_W(194, vlSelf->scramble_rsp_i, __VscopeHash, 6352579312500758909ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->prim_flash_rsp_i, __VscopeHash, 18045778522330125550ull);
    VL_SCOPED_RAND_RESET_W(103, vlSelf->prim_flash_req_o, __VscopeHash, 1369122679474328207ull);
    vlSelf->host_req_rdy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5961741742229229545ull);
    vlSelf->host_req_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10149724096085964570ull);
    vlSelf->rd_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8509512655296700662ull);
    vlSelf->prog_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9635500422023528330ull);
    vlSelf->erase_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16537317096632752297ull);
    vlSelf->rd_data_host_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 12537961450475657756ull);
    vlSelf->rd_data_ctrl_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 16174190127182335731ull);
    vlSelf->rd_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4356439316428732990ull);
    vlSelf->ecc_single_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17126945331564148987ull);
    vlSelf->ecc_addr_o = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17798072791581959627ull);
    vlSelf->fsm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8768478715515343031ull);
    vlSelf->prog_intg_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3993631948749898887ull);
    vlSelf->relbl_ecc_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 427803602197257952ull);
    vlSelf->intg_ecc_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13344951165509460999ull);
    vlSelf->spurious_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7120907398574096792ull);
    vlSelf->arb_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18260068710278252698ull);
    vlSelf->host_gnt_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2589085156499977791ull);
    vlSelf->fifo_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16715982630083545088ull);
    vlSelf->cnt_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9542371571584354806ull);
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__reqs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2721230712283814606ull);
    vlSelf->__PVT__ctrl_rsp_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12096397917781771712ull);
    vlSelf->__PVT__prog_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13149671092949203236ull);
    vlSelf->__PVT__erase_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14781524055086570972ull);
    vlSelf->__PVT__muxed_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13903588827789710310ull);
    vlSelf->__PVT__muxed_scramble_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14979092056403464647ull);
    vlSelf->__PVT__muxed_ecc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194276952711249032ull);
    vlSelf->__PVT__rd_stage_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6951468076524823925ull);
    vlSelf->__PVT__arb_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18417916794939517612ull);
    vlSelf->__PVT__calc_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5340571188980010387ull);
    vlSelf->__PVT__op_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8528821320948476469ull);
    vlSelf->__PVT__host_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2014883953004690337ull);
    vlSelf->__PVT__ctrl_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16799907208102625707ull);
    vlSelf->__PVT__ctrl_fsm_idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12946874443556060248ull);
    vlSelf->__PVT__host_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2491196844537464692ull);
    vlSelf->__PVT__host_gnt_err_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4111137154362318932ull);
    vlSelf->__PVT__host_outstanding_err_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10402408060454229830ull);
    vlSelf->__PVT__host_gnt_rd_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8085385076950901363ull);
    vlSelf->__PVT__host_outstanding_rd_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13482013961805311280ull);
    vlSelf->__PVT__ctrl_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14849436778095839028ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_tie_off[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3633488566292782235ull);
    }
    vlSelf->__PVT__fsm_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539359204628850797ull);
    vlSelf->__PVT__rd_calc_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17529613644952037574ull);
    vlSelf->__PVT__rd_op_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12914501506935710405ull);
    vlSelf->__PVT__rd_descrambled_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3147710545837763982ull);
    vlSelf->__PVT__arb_host_gnt_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14973248844799998038ull);
    vlSelf->__PVT__prog_scrambled_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15195829113451572118ull);
    vlSelf->__PVT__prog_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17561747146654904533ull);
    vlSelf->__PVT__flash_prog_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3370666406852309786ull);
    vlSelf->__PVT__prog_calc_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11193365011476721390ull);
    vlSelf->__PVT__prog_op_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14851171393708785404ull);
    vlSelf->__PVT__prog_fsm_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 771989293477176590ull);
    vlSelf->__VdfgExtracted_hded1f362__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10600604436250481615ull);
    vlSelf->__PVT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7529622373113633306ull);
    vlSelf->__PVT__u_disable_buf__DOT__gen_no_flops__DOT__unused_logic = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13569639819776438448ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5288845612390294588ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__decr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14204019306714088442ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9801723586746591694ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 296723041106957490ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16492831703660058665ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15590521084145321350ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8937487398697094653ull);
    vlSelf->u_host_outstanding_cnt__DOT____VdfgRegularize_h6c303c02_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10173895602851925429ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9663921417374764309ull);
    vlSelf->__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5587481836978322785ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_host_arb__DOT__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2640613871731568975ull);
    }
    vlSelf->__PVT__u_host_arb__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1269759450689166715ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1075703584865967346ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17496514951566730914ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4910514810328745027ull);
    }
    vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gnt_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18101403105389017639ull);
    vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7842462228652251187ull);
    vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__gnt_tree__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8004004253272887935ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_host_arb__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_fixed_arbiter__DOT__u_arb__DOT__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13358157114760774091ull);
    }
    vlSelf->__PVT__u_rd__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2310655600312689218ull);
    vlSelf->__PVT__u_rd__DOT__buf_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12058170466067723982ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__u_rd__DOT__muxed_data, __VscopeHash, 11530263398871572166ull);
    vlSelf->__PVT__u_rd__DOT__muxed_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304998583015200331ull);
    vlSelf->__PVT__u_rd__DOT__alloc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6279218257714989579ull);
    vlSelf->__PVT__u_rd__DOT__update = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9379489954609852513ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(90, vlSelf->__PVT__u_rd__DOT__read_buf[__Vi0], __VscopeHash, 10103030391583822930ull);
    }
    vlSelf->__PVT__u_rd__DOT__buf_match = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16093821546670851288ull);
    vlSelf->__PVT__u_rd__DOT__buf_dependency = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14659645554474314702ull);
    vlSelf->__PVT__u_rd__DOT__data_hazard__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11063283232143249361ull);
    vlSelf->__PVT__u_rd__DOT__buf_invalid_alloc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8370106347503511415ull);
    vlSelf->__PVT__u_rd__DOT__buf_alloc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 509093772351404474ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_rd__DOT__dummy_data[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2910595679072702088ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->u_rd__DOT____Vcellinp__u_valid_random__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3696141824499824885ull);
    }
    vlSelf->__PVT__u_rd__DOT__alloc_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6302282736125360230ull);
    vlSelf->__PVT__u_rd__DOT__rd_attrs = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1860625181162820005ull);
    vlSelf->__PVT__u_rd__DOT__rd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14887412449517063143ull);
    vlSelf->__PVT__u_rd__DOT__rd_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11855409321449986917ull);
    vlSelf->__PVT__u_rd__DOT__rd_stages_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9624149653630474481ull);
    vlSelf->__PVT__u_rd__DOT__no_buf_en_change = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195871185878084267ull);
    vlSelf->__PVT__u_rd__DOT__valid_ecc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11081778800513559925ull);
    vlSelf->__PVT__u_rd__DOT__ecc_multi_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17956010838323428106ull);
    vlSelf->__PVT__u_rd__DOT__ecc_single_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12537244303910182643ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__u_rd__DOT__data_int, __VscopeHash, 4098308416075945467ull);
    vlSelf->__PVT__u_rd__DOT__data_erased = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16377944191361775013ull);
    vlSelf->__PVT__u_rd__DOT__fifo_data_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3217742555367634413ull);
    vlSelf->__PVT__u_rd__DOT__descram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3945083592580633034ull);
    vlSelf->__PVT__u_rd__DOT__forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983119766536356511ull);
    vlSelf->__PVT__u_rd__DOT__hint_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10822456839778299122ull);
    vlSelf->__PVT__u_rd__DOT__hint_dropmsk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9743794097797642511ull);
    vlSelf->__PVT__u_rd__DOT__hint_descram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5509756180062746099ull);
    vlSelf->__PVT__u_rd__DOT__buf_rsp_match = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18243629906366540557ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__u_rd__DOT__buf_rsp_data, __VscopeHash, 8269700951344341506ull);
    vlSelf->__PVT__u_rd__DOT__buf_addr_xor = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11574708270137378096ull);
    vlSelf->__PVT__u_rd__DOT__buf_rsp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507641239137118729ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__u_rd__DOT__data_out_muxed, __VscopeHash, 1190967553731844186ull);
    vlSelf->__PVT__u_rd__DOT__gen_buf_match__BRA__0__KET____DOT__word_addr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18082032759812970055ull);
    vlSelf->__PVT__u_rd__DOT__gen_buf_match__BRA__1__KET____DOT__word_addr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9716688447503330403ull);
    vlSelf->__PVT__u_rd__DOT__gen_buf_match__BRA__2__KET____DOT__word_addr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 89683384147343953ull);
    vlSelf->__PVT__u_rd__DOT__gen_buf_match__BRA__3__KET____DOT__word_addr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15907990570410601963ull);
    VL_SCOPED_RAND_RESET_W(90, vlSelf->u_rd__DOT____Vcellout__gen_bufs__BRA__0__KET____DOT__u_rd_buf__out_o, __VscopeHash, 2723953703599825216ull);
    VL_SCOPED_RAND_RESET_W(90, vlSelf->u_rd__DOT____Vcellout__gen_bufs__BRA__1__KET____DOT__u_rd_buf__out_o, __VscopeHash, 3491662668240808276ull);
    VL_SCOPED_RAND_RESET_W(90, vlSelf->u_rd__DOT____Vcellout__gen_bufs__BRA__2__KET____DOT__u_rd_buf__out_o, __VscopeHash, 16535548944133112831ull);
    VL_SCOPED_RAND_RESET_W(90, vlSelf->u_rd__DOT____Vcellout__gen_bufs__BRA__3__KET____DOT__u_rd_buf__out_o, __VscopeHash, 15501015739046737845ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446841746830012056ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16382807381636374375ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14486009448238319653ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8423620355992394167ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 475175540238372738ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_18 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8519356767084651482ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6174834153465463609ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2684154145702359476ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 564116190510881374ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12068567586092626395ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661316635442692322ull);
    vlSelf->u_rd__DOT____VdfgRegularize_hfb58ac9e_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7014415342992029657ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__req_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14782620528495508403ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3343148828688871671ull);
    }
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512360983002573789ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2497059054820909956ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6009105225282562656ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6742549393527105035ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5310775966530012058ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10016921424259241629ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10038497099860652765ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16414298546800201944ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363942143830261271ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3029331297451626663ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__prio_mask_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4065374855795151539ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16977054813330115629ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13935176084859764560ull);
    vlSelf->__PVT__u_rd__DOT__u_valid_random__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17677009785550714555ull);
    vlSelf->u_rd__DOT__u_valid_random__DOT____VdfgRegularize_h00f58a4d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1733189342799020013ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__wr_buf_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4500755104713992514ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__buf_dependency_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17688098230064284956ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__incr_buf_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7874331513481879377ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__decr_buf_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2984793853932485417ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_incr_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1364454878529681924ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__curr_decr_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5546946034205792482ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18031119631329571449ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__cnt_decr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13466487866921871168ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_buf_dep__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->u_rd__DOT__u_rd_buf_dep__DOT____VdfgRegularize_hf6444d5c_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15688071157008887285ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15385102221114454967ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7547317424692886640ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4830615911575175740ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12041402773941438523ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2681109709235698037ull);
    vlSelf->__PVT__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4343047681296014643ull);
    vlSelf->u_rd__DOT__u_rsp_order_fifo__DOT____Vlvbound_h3810951a__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7518943513336151938ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__u_rd__DOT__u_dec__DOT__data_i, __VscopeHash, 5515025181163429554ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__u_rd__DOT__u_dec__DOT__data_o, __VscopeHash, 3730603829352290061ull);
    vlSelf->__PVT__u_rd__DOT__u_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15300629395098638564ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6917661846631942013ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16810452718009460622ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__rdata_o, __VscopeHash, 11437025824748684838ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1723014826876600061ull);
    vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6118459622311811917ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 10628641789317246660ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->u_rd__DOT__u_rd_storage__DOT____Vlvbound_h2d4374d5__0, __VscopeHash, 13028492861635982220ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14878781974192031983ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2899229107057540799ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 630618797162635347ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__rdata_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15736497962236978457ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2452074749704036443ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14550129150221624205ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9109441231036317921ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5967967298244711928ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 14135642992922514711ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13932033919632537303ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 227458822239402687ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3015356034673414952ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2442001958096043862ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9785579459647262852ull);
    vlSelf->__PVT__u_rd__DOT__u_mask_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4915697057088943888ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13519786618068280101ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12191983044612140895ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952268279630422320ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8018265419253282306ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16772588188635249074ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6676118003472029943ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837466269501887282ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8248622500504583556ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6284860823184493082ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17892275184986901873ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6775913739934467356ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2430080314482129478ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13232284640676602422ull);
    vlSelf->__PVT__u_rd__DOT__u_addr_xor_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3464028145278779921ull);
    vlSelf->__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7473449109936001691ull);
    vlSelf->__PVT__u_rd__DOT__gen_bufs__BRA__1__KET____DOT__u_rd_buf__DOT__wipe_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5703614459568923116ull);
    vlSelf->__PVT__u_rd__DOT__gen_bufs__BRA__2__KET____DOT__u_rd_buf__DOT__wipe_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5487588415317970855ull);
    vlSelf->__PVT__u_rd__DOT__gen_bufs__BRA__3__KET____DOT__u_rd_buf__DOT__wipe_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471531123155357580ull);
    vlSelf->__PVT__u_erase__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8750643819864132591ull);
    vlSelf->__PVT__u_erase__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2717516867636826553ull);
    vlSelf->__PVT__u_erase__DOT__suspend_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10181947469989372114ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__state_d = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9925520868517100465ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327248243900773417ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__pack_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17092855065396629594ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__data_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6039073297897442586ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__packed_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8099151065521051696ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__plain_ecc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14465279855905806908ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5981327398076175124ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17173333237860073168ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2012106222399872657ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__mask_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3677699266410966203ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__plain_data_ecc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4789905212307519188ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 1961926261825584662ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11194134979255155251ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13256253533119694243ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__err_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16194898394854307941ull);
    vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14647852365251855844ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__gen_prog_data__DOT__u_prog__DOT__u_enc__DOT__data_i, __VscopeHash, 17753959037429442528ull);
    VL_SCOPED_RAND_RESET_W(75, vlSelf->gen_prog_data__DOT__u_prog__DOT__u_enc__DOT____VdfgRegularize_hbc217325_0_6, __VscopeHash, 15345111221322768080ull);
    VL_SCOPED_RAND_RESET_W(71, vlSelf->gen_prog_data__DOT__u_prog__DOT__u_plain_enc__DOT____VdfgRegularize_hf8346ab0_0_6, __VscopeHash, 15994207224012528901ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__0__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13059857419182194405ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__0__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15736537647868442947ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13355829841233402563ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10597698820199216037ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7976604898171138780ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__3__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5448187045960963261ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12889791150284178352ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__4__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14079353391387229190ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__5__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1932659589571178427ull);
    vlSelf->__Vfunc_mubi4_test_false_strict__5__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3659515243538765102ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__7__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1802060546794986740ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__7__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17359062977595177404ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->__VdfgRegularize_h6e95ff9d_0_1469, __VscopeHash, 9325988234620045016ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->__VdfgRegularize_h6e95ff9d_0_1470, __VscopeHash, 15219919742136395492ull);
}

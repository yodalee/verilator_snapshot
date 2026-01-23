// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_h5e996ecf_0;
extern const VlUnpacked<IData/*31:0*/, 8> Vsim__ConstPool__TABLE_hb7245781_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h52851b6b_0;

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__22(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1177__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1177__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1177__in;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1177__in);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1177__transpose;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1177__transpose);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1242__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1242__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1242__in;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1242__in);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1242__transpose;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1242__transpose);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1295__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1295__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1295__in;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1295__in);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1295__transpose;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1295__transpose);
    CData/*2:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    VlWide<9>/*287:0*/ __Vtemp_19;
    VlWide<9>/*287:0*/ __Vtemp_23;
    VlWide<9>/*287:0*/ __Vtemp_24;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__alu_predec_error_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_x_en) 
            != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                              >> 0x00000025U)))) | 
           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_x_res_operand_a_sel) 
             != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                               >> 0x00000024U)))) | 
            (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_y_op_a_en) 
              != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                >> 0x00000023U)))) 
             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_y_op_shifter_en) 
                 != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                   >> 0x00000021U)))) 
                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shifter_a_en) 
                    != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                      >> 0x00000020U)))) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shifter_b_en) 
                       != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                         >> 0x0000001fU)))) 
                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shift_right) 
                          != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                            >> 0x0000001eU)))) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum) 
                             != (0x000000ffU & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000016U)))) 
                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shift_mod_sel) 
                                != (1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                  >> 0x00000022U)))) 
                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_a_en) 
                                   != (1U & (IData)(
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                     >> 0x00000015U)))) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_shifter_en) 
                                      != (1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000014U)))) 
                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_res_sel) 
                                         != (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flag_group_sel) 
                                            != (3U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x0000000eU)))) 
                                           | ((((((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                               >> 0x00000019U)))) 
                                                  << 3U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                 >> 0x00000019U)))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                 >> 0x00000019U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                  >> 0x00000019U)))))) 
                                               != (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x0000000aU)))) 
                                              | (((3U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_adder_update) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_logic_update) 
                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_mac_update) 
                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_flags_wr)))))) 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 8U)))) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_adder_update) 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 6U)))) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_logic_update) 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                    >> 4U)))) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_mac_update) 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                       >> 2U)))) 
                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_flags_wr) 
                                                             != 
                                                             (3U 
                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o)))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000dU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000dU][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1157));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000dU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000dU][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000dU][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000dU][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1157)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1158[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1158[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000dU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000dU][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000017U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000017U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1167));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000017U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000017U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000017U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000017U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1167)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1168[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1168[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000017U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000017U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000001aU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000001aU][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1163));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000001aU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000001aU][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000001aU][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000001aU][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1163)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1164[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1164[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000001aU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000001aU][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000018U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000018U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1161));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000018U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000018U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000018U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000018U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1161)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1162[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1162[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000018U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000018U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000019U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000019U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1159));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000019U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000019U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000019U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000019U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1159)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1160[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1160[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000019U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000019U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000eU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000eU][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1165));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000eU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x0000000eU][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000eU][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x0000000eU][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1165)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1166[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1166[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x0000000eU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x0000000eU][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h2e2f47e8_0_0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_d = 0xdf9b0e9cU;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i) 
                & (0xfffffffeU == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q))
                ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
                        + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)
                ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__entropy_i 
                   ^ ((0x80200003U & (- (IData)((1U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q)))) 
                      ^ VL_SHIFTR_III(32,32,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q, 1U)))
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h2e2f47e8_0_0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_d = 0xdf9b0e9cU;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i) 
                & (0xfffffffeU == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q))
                ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
                        + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)
                ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__entropy_i 
                   ^ ((0x80200003U & (- (IData)((1U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q)))) 
                      ^ VL_SHIFTR_III(32,32,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q, 1U)))
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__mask_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__sel_tree__BRA__9__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__mask_tree__BRA__12__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__sel_tree__BRA__11__KET__)));
    __Vtableidx89 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cmd_arb_idx 
        = Vsim__ConstPool__TABLE_h5e996ecf_0[__Vtableidx89];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb7245781_0[__Vtableidx89];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gnt_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__acmd_accept)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__15__03a8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y__BRA__7__03a0__KET__));
    if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
        if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                      >> 0x00000010U)))) {
            if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
                if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                              >> 0x0000000eU)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used = 0U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used = 0U;
            }
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used 
            = ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                         >> 0x00000010U))) || ((1U 
                                                & (~ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                                                    >> 0x0000000fU))) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                                                        >> 0x0000000eU))) 
                                                   || (1U 
                                                       & (~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                                                           >> 1U))))));
    }
    if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                               << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))))) {
        if ((0U != (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                     << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: aes_sel_buf_chk.sv:65: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.u_aes_core.u_aes_cipher_core.u_aes_key_expand.u_aes_key_expand_out_ack_buf_chk.gen_mux2_sel_chk.mux2_sel_chk: unique case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/aes_sel_buf_chk.sv", 65, "");
            }
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        if (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_d 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wr_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d = 0ULL;
    } else {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dmi_select) {
                if (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_q)) 
                     & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_dmi_busy)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d 
                        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__address_q)) 
                            << 0x00000022U) | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__data_q)) 
                                               << 2U));
                } else if (((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_q)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__error_dmi_busy))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__address_q)) 
                                    << 0x00000022U) 
                                   | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__data_q)) 
                                      << 2U)));
                }
            }
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dmi_select) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_d 
                    = (((QData)((IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__jtag_in_int)))) 
                        << 0x00000028U) | (0x000000ffffffffffULL 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dr_q 
                                              >> 1U)));
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dmi_req_valid) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wr_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__dmi_req_valid) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags[0U] 
        = ((((2U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_update_flag_groups__BRA__0__KET____DOT__u_mac_z_flag_en_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)
                      ? (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_783)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                         [0U] >> 3U)) << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_785)
                                                     ? 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[0U]
                                                     : 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                                     [0U] 
                                                     >> 2U)))) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_786)
                               ? (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_784)
                               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                  [0U] >> 1U)) << 1U)) 
                      | (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                         [0U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags[1U] 
        = ((((2U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_update_flag_groups__BRA__1__KET____DOT__u_mac_z_flag_en_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)
                      ? (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_783)
                      : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                         [1U] >> 3U)) << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_785)
                                                     ? 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[0U]
                                                     : 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                                     [1U] 
                                                     >> 2U)))) 
            << 2U) | ((2U & (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_786)
                               ? (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_784)
                               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                  [1U] >> 1U)) << 1U)) 
                      | (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                         [1U])));
    if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                       >> 0x0000001eU)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[7U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse[7U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i) 
             & ((0x0bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum)) 
                & ((~ (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                               >> 0x00000022U))) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used)))) 
            & ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                 & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
               | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                    & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                   | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                  | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                      | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                     | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                         | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                            | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                               | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                   & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                                  | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 | (((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                                    | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)))))))))) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
               & ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                    & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                   | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                  | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                      | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                     | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                         | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                            | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                               | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                   & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                                  | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 | ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                      & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                                     | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                    | (((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                        & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
                                       | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)))))))))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__intg_err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__predec_error 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__alu_predec_error_o) 
             | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i) 
                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))) 
                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q)) 
                 | (((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                            >> 2U)) != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i))) 
                    | (((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                               >> 1U)) != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn) 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i))) 
                       | (((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                  >> 3U)) != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i))) 
                          | (((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                              != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum) 
                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i))) 
                             | (((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                        >> 4U)) != 
                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i) 
                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                     & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl))))) 
                                | (((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                           >> 5U)) 
                                    != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i) 
                                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_hc6b214eb_0_60) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                              & (0x0000000000100000ULL 
                                                 == 
                                                 (0x0000000001f00000ULL 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)))))) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                       & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                          & ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base)) 
                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                                != 
                                                (0x00001fffU 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_base_operation_result))))) 
                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                          != (0x00001fffU 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_full))) 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req)))))))))) 
                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_en_o) 
                    != (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_predec_bignum_flop__q_o) 
                              >> 1U))) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
                                          != (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_predec_bignum_flop__q_o)))))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i)) 
           | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_a_onehot 
                != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[2U]) 
               | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_b_onehot 
                   != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[1U]) 
                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__u_rf_we_onehot_enc__DOT__out_o 
                     != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_predec_error_o) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_valid_i)) 
                    & (IData)(((0U != (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o)) 
                               | (0U != (((QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[2U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[1U]))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cmd_arb_idx_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__acmd_accept) 
            & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_prim_arbiter_ppc_acmd__DOT__req_i)))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cmd_arb_idx)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__cmd_arb_idx_q));
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__15__03a8__KET__;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z__BRA__7__03a0__KET__;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__ = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__ = 0U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        if (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o)) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_d 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.q_o))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wr_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)));
    if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                       >> 0x00000022U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
               & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                           >> 0x00000021U))))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                   >> 7U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                << 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                   >> 0x0000000eU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                << 0x0000000bU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                   >> 0x00000015U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                << 4U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                          >> 0x0000001cU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                << 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                   >> 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U] 
            = (IData)((((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                          << 0x0000000fU) 
                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                            >> 0x00000011U)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                            << 0x00000016U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                              >> 0x0000000aU))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U] 
            = (IData)(((((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                           << 0x0000000fU) 
                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                             >> 0x00000011U)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                             << 0x00000016U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                               >> 0x0000000aU))))) 
                       >> 0x00000020U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000014U))))));
    __Vfunc_aes_transpose__1242__in[0U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1242__in[1U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1242__in[2U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1242__in[3U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1242__transpose[0U] = 0U;
    __Vfunc_aes_transpose__1242__transpose[1U] = 0U;
    __Vfunc_aes_transpose__1242__transpose[2U] = 0U;
    __Vfunc_aes_transpose__1242__transpose[3U] = 0U;
    __Vfunc_aes_transpose__1242__transpose[0U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1242__transpose[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vfunc_aes_transpose__1242__in[0U]));
    __Vfunc_aes_transpose__1242__transpose[1U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1242__transpose[1U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1242__in[0U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1242__transpose[2U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1242__transpose[2U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1242__in[0U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1242__transpose[3U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1242__transpose[3U]) 
                                                  | (__Vfunc_aes_transpose__1242__in[0U] 
                                                     >> 0x00000018U));
    __Vfunc_aes_transpose__1242__transpose[0U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[0U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1242__in[1U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1242__transpose[1U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[1U]) 
                                                  | (0x0000ff00U 
                                                     & __Vfunc_aes_transpose__1242__in[1U]));
    __Vfunc_aes_transpose__1242__transpose[2U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[2U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1242__in[1U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1242__transpose[3U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[3U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1242__in[1U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1242__transpose[0U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[0U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1242__in[2U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1242__transpose[1U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[1U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1242__in[2U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1242__transpose[2U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[2U]) 
                                                  | (0x00ff0000U 
                                                     & __Vfunc_aes_transpose__1242__in[2U]));
    __Vfunc_aes_transpose__1242__transpose[3U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[3U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1242__in[2U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1242__transpose[0U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[0U]) 
                                                  | (__Vfunc_aes_transpose__1242__in[3U] 
                                                     << 0x00000018U));
    __Vfunc_aes_transpose__1242__transpose[1U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[1U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1242__in[3U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1242__transpose[2U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[2U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1242__in[3U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1242__transpose[3U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1242__transpose[3U]) 
                                                  | (0xff000000U 
                                                     & __Vfunc_aes_transpose__1242__in[3U]));
    __Vfunc_aes_transpose__1242__Vfuncout[0U] = __Vfunc_aes_transpose__1242__transpose[0U];
    __Vfunc_aes_transpose__1242__Vfuncout[1U] = __Vfunc_aes_transpose__1242__transpose[1U];
    __Vfunc_aes_transpose__1242__Vfuncout[2U] = __Vfunc_aes_transpose__1242__transpose[2U];
    __Vfunc_aes_transpose__1242__Vfuncout[3U] = __Vfunc_aes_transpose__1242__transpose[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[0U] 
        = __Vfunc_aes_transpose__1242__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[1U] 
        = __Vfunc_aes_transpose__1242__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[2U] 
        = __Vfunc_aes_transpose__1242__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[3U] 
        = __Vfunc_aes_transpose__1242__Vfuncout[3U];
    __Vfunc_aes_transpose__1295__in[0U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[0U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1295__in[1U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[1U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1295__in[2U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[2U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1295__in[3U] = ((((0x0000ff00U 
                                              & ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                      >> 0x00000010U)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__7__03a0__KET__) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                    ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                       >> 0x00000018U)) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__15__03a8__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__31__03a24__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))) 
                                            << 0x00000010U) 
                                           | ((0x0000ff00U 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                   ^ 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__23__03a16__KET__) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                     ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__7__03a0__KET__)))) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed[3U] 
                                                        >> 8U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2__BRA__31__03a24__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x__BRA__15__03a8__KET__) 
                                                      ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed__BRA__15__03a8__KET__)))))));
    __Vfunc_aes_transpose__1295__transpose[0U] = 0U;
    __Vfunc_aes_transpose__1295__transpose[1U] = 0U;
    __Vfunc_aes_transpose__1295__transpose[2U] = 0U;
    __Vfunc_aes_transpose__1295__transpose[3U] = 0U;
    __Vfunc_aes_transpose__1295__transpose[0U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1295__transpose[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vfunc_aes_transpose__1295__in[0U]));
    __Vfunc_aes_transpose__1295__transpose[1U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1295__transpose[1U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1295__in[0U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1295__transpose[2U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1295__transpose[2U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1295__in[0U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1295__transpose[3U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1295__transpose[3U]) 
                                                  | (__Vfunc_aes_transpose__1295__in[0U] 
                                                     >> 0x00000018U));
    __Vfunc_aes_transpose__1295__transpose[0U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[0U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1295__in[1U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1295__transpose[1U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[1U]) 
                                                  | (0x0000ff00U 
                                                     & __Vfunc_aes_transpose__1295__in[1U]));
    __Vfunc_aes_transpose__1295__transpose[2U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[2U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1295__in[1U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1295__transpose[3U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[3U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1295__in[1U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1295__transpose[0U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[0U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1295__in[2U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1295__transpose[1U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[1U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1295__in[2U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1295__transpose[2U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[2U]) 
                                                  | (0x00ff0000U 
                                                     & __Vfunc_aes_transpose__1295__in[2U]));
    __Vfunc_aes_transpose__1295__transpose[3U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[3U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1295__in[2U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1295__transpose[0U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[0U]) 
                                                  | (__Vfunc_aes_transpose__1295__in[3U] 
                                                     << 0x00000018U));
    __Vfunc_aes_transpose__1295__transpose[1U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[1U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1295__in[3U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1295__transpose[2U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[2U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1295__in[3U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1295__transpose[3U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1295__transpose[3U]) 
                                                  | (0xff000000U 
                                                     & __Vfunc_aes_transpose__1295__in[3U]));
    __Vfunc_aes_transpose__1295__Vfuncout[0U] = __Vfunc_aes_transpose__1295__transpose[0U];
    __Vfunc_aes_transpose__1295__Vfuncout[1U] = __Vfunc_aes_transpose__1295__transpose[1U];
    __Vfunc_aes_transpose__1295__Vfuncout[2U] = __Vfunc_aes_transpose__1295__transpose[2U];
    __Vfunc_aes_transpose__1295__Vfuncout[3U] = __Vfunc_aes_transpose__1295__transpose[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[0U] 
        = __Vfunc_aes_transpose__1295__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[1U] 
        = __Vfunc_aes_transpose__1295__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[2U] 
        = __Vfunc_aes_transpose__1295__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[3U] 
        = __Vfunc_aes_transpose__1295__Vfuncout[3U];
    __Vtemp_19[0U] = (1U | (((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                            >> 0x00000024U)))
                              ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                  << 0x0000001fU) | 
                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                  >> 1U)) : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                      >> 0x00000023U))))))) 
                            << 1U));
    __Vtemp_19[1U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[2U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[3U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[4U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[5U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[6U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[7U] = ((((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                       >> 0x00000024U)))
                         ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                             << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                                >> 1U))
                         : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
                            & (- (IData)((1U & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000023U))))))) 
                       >> 0x0000001fU) | (((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000024U)))
                                            ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                                                << 0x0000001fU) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                                  >> 1U))
                                            : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                        >> 0x00000023U))))))) 
                                          << 1U));
    __Vtemp_19[8U] = (((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                      >> 0x00000024U)))
                        ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                               >> 1U))
                        : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000023U))))))) 
                      >> 0x0000001fU);
    __Vtemp_23[0U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U]) 
                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_carry_in));
    __Vtemp_23[1U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U]) 
                                          << 1U));
    __Vtemp_23[2U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U]) 
                                          << 1U));
    __Vtemp_23[3U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U]) 
                                          << 1U));
    __Vtemp_23[4U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U]) 
                                          << 1U));
    __Vtemp_23[5U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U]) 
                                          << 1U));
    __Vtemp_23[6U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U]) 
                                          << 1U));
    __Vtemp_23[7U] = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U])
                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U]) 
                       >> 0x0000001fU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                            ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U])
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U]) 
                                          << 1U));
    __Vtemp_23[8U] = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                        ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U])
                        : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U]) 
                      >> 0x0000001fU);
    VL_ADD_W(9, __Vtemp_24, __Vtemp_19, __Vtemp_23);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[0U] & 
           __Vtemp_24[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[1U] & 
           __Vtemp_24[1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[2U] & 
           __Vtemp_24[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[3U] & 
           __Vtemp_24[3U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[4U] & 
           __Vtemp_24[4U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[5U] & 
           __Vtemp_24[5U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[6U] & 
           __Vtemp_24[6U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[7U] & 
           __Vtemp_24[7U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
        = (Vsim__ConstPool__CONST_h52851b6b_0[8U] & 
           __Vtemp_24[8U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][0U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][1U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][2U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][3U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][4U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][5U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][6U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3U][7U] 
        = (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_a_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_update_flags 
        = ((((2U & ((~ (0U != (((((((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                       << 0x0000001fU) 
                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                         >> 1U)) | 
                                     ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                       << 0x0000001fU) 
                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                         >> 1U))) | 
                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                      << 0x0000001fU) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                        >> 1U))) | 
                                   ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                       >> 1U))) | (
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                                    << 0x0000001fU) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                                      >> 1U))) 
                                 | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                       >> 1U))) | (
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                                    << 0x0000001fU) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                                      >> 1U))) 
                               | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                                   << 0x0000001fU) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                     >> 1U))))) << 1U)) 
             | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                      >> 1U))) << 2U) | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                                                << 1U)) 
                                         | (1U & ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum)) 
                                                   | (1U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum)))
                                                   ? 
                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                                                   >> 1U)
                                                   : 
                                                  (~ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                                                    >> 1U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0U][7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1U][7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2U][7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o 
        = (((((2U & ((~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U]) 
                     << 1U)) | (1U & vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U])) 
             << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                              << 1U)) | (1U & vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U]))) 
           & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                      >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o 
        = (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                         >> 0x0000001fU)) << 1U)) | 
              (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
               >> 0x0000001fU)) << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                 >> 0x0000001eU)) 
                                          | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                             >> 0x0000001fU))) 
           & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                      >> 0x00000010U)));
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_add_rk_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][3U];
    } else if ((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_add_rk_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out
            [1U][3U];
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_add_rk_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out
            [1U][3U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
            [1U][3U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[0U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [0U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[1U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [1U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[2U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [2U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_i[3U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in
        [3U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[0U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[0U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[0U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[1U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[1U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[1U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[2U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[2U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[2U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[3U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[3U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[3U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[4U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[4U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[4U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[5U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[5U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[5U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U] 
        = (((((((((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                        >> 0x0000001fU)) 
                                    << 1U)) | (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                               >> 0x0000001fU)) 
                            << 2U) | ((2U & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                         >> 0x0000001fU))) 
                          & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                     >> 0x00000010U)))) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[6U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[6U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[6U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U] 
        = (((((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                  << 3U) | ((0U != (((((2U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                  >> 0x0000001eU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                >> 0x0000001eU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                    >> 0x0000001dU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                      >> 0x0000001eU)))) 
                                    & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                               >> 0x00000010U)))) 
                            << 2U)) | (((0U != ((((
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                         >> 0x0000001dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                         >> 0x0000001dU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                        >> 0x0000001cU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                          >> 0x0000001dU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                            >> 0x0000001cU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                            >> 0x0000001cU))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                           >> 0x0000001bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                             >> 0x0000001cU)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))))) 
               << 0x0000000cU) | (((((0U != (((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                      >> 0x0000001bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                      >> 0x0000001bU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                     >> 0x0000001aU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                       >> 0x0000001bU)))) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                        >> 0x00000010U)))) 
                                     << 3U) | ((0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                          >> 0x0000001aU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                          >> 0x0000001aU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                         >> 0x00000019U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                           >> 0x0000001aU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))) 
                                               << 2U)) 
                                   | (((0U != (((((2U 
                                                   & ((~ 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                        >> 0x00000019U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                        >> 0x00000019U))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                       >> 0x00000018U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                         >> 0x00000019U)))) 
                                               & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                          >> 0x00000010U)))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                           >> 0x00000018U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                           >> 0x00000018U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                            >> 0x00000018U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))))) 
                                  << 8U)) | ((((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                            >> 0x00000017U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                           >> 0x00000016U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                             >> 0x00000017U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                              >> 0x00000016U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                              >> 0x00000016U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                             >> 0x00000015U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                               >> 0x00000016U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                              >> 0x00000015U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                             >> 0x00000014U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                               >> 0x00000015U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                               >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                               >> 0x00000014U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                              >> 0x00000013U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                                >> 0x00000014U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                             >> 0x00000013U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                             >> 0x00000013U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                               >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                               >> 0x00000012U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                              >> 0x00000011U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                                >> 0x00000012U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                               >> 0x00000011U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                              >> 0x00000010U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                                >> 0x00000011U)))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (((((2U 
                                                           & ((~ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                                >> 0x00000010U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                                >> 0x00000010U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                               >> 0x0000000fU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                                 >> 0x00000010U)))) 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                  >> 0x00000010U)))))))) 
            << 0x00000010U) | (((((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                     >> 0x0000000fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                     >> 0x0000000fU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                    >> 0x0000000eU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                      >> 0x0000000fU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                         >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                         >> 0x0000000eU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                        >> 0x0000000dU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                          >> 0x0000000eU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                       >> 0x0000000dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                       >> 0x0000000dU))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                          >> 0x0000000cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                          >> 0x0000000cU))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                           >> 0x0000000cU)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 0x0000000cU) | 
                                (((((0U != (((((2U 
                                                & ((~ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                     >> 0x0000000bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                     >> 0x0000000bU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                    >> 0x0000000aU)) 
                                                | (1U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                      >> 0x0000000bU)))) 
                                            & (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                       >> 0x00000010U)))) 
                                    << 3U) | ((0U != 
                                               (((((2U 
                                                    & ((~ 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                         >> 0x0000000aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                         >> 0x0000000aU))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                        >> 9U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                          >> 0x0000000aU)))) 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                           >> 0x00000010U)))) 
                                              << 2U)) 
                                  | (((0U != (((((2U 
                                                  & ((~ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                       >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                       >> 9U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                        >> 9U)))) 
                                              & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                         >> 0x00000010U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (((((2U 
                                                     & ((~ 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                          >> 8U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                          >> 8U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                         >> 7U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                           >> 8U)))) 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                            >> 0x00000010U)))))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (((((2U 
                                                      & ((~ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                           >> 7U))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                            >> 7U)))) 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                             >> 0x00000010U)))) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                             >> 6U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                              >> 6U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (((((2U 
                                                        & ((~ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                             >> 5U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                              >> 5U)))) 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                               >> 0x00000010U)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                              >> 4U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                              >> 4U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                               >> 4U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                            >> 3U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                             >> 3U)))) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                              >> 0x00000010U)))) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                               >> 2U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
                                                              >> 1U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U] 
                                                              >> 1U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U]) 
                                                         | (1U 
                                                            & (vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U] 
                                                               >> 1U)))) 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                >> 0x00000010U)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (((((2U 
                                                          & ((~ 
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_op_shifter_res_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_230[7U])) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelfRef.__VdfgRegularize_he50b618e_0_229[7U] 
                                                              << 1U)) 
                                                          | (1U 
                                                             & vlSelfRef.__VdfgRegularize_he50b618e_0_228[7U]))) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                                 >> 0x00000010U)))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_123[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [0U][0U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [0U][0U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_123[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [0U][1U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [0U][1U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_123[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [0U][2U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [0U][2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_123[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [0U][3U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [0U][3U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_124[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [1U][0U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [1U][0U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_124[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [1U][1U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [1U][1U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_124[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [1U][2U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [1U][2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_124[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in
           [1U][3U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key
           [1U][3U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                               >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
            << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                               >> 1U));
    if ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
        if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                      >> 0x00000010U)))) {
            if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
                if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U] 
                              >> 0x0000000eU)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U];
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U];
            }
        }
    } else if ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
        if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
            if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U];
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_shifter_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U];
            }
        } else if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
            if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                           >> 1U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                           >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                        << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                           >> 1U));
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                       >> 1U));
        }
    } else if ((0x00008000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
        if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__alu_bignum_operation_o[0x00000010U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                       >> 1U));
        } else if ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                          | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U]))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                       >> 1U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                       >> 1U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                    << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                       >> 1U));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[1U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[2U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[3U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[4U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[5U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[6U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[8U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[7U] 
                                   >> 1U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[0U] 
        = ((((2U & ((~ (0U != (((((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U] 
                                     | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U]) 
                                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U]) 
                                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U]) 
                                  | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U]) 
                                 | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U]) 
                                | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U]) 
                               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U]))) 
                    << 1U)) | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
            << 2U) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                       << 1U) | (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                 [0U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[1U] 
        = ((((2U & ((~ (0U != (((((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[0U] 
                                     | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[1U]) 
                                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[2U]) 
                                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[3U]) 
                                  | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[4U]) 
                                 | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[5U]) 
                                | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[6U]) 
                               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__out_o[7U]))) 
                    << 1U)) | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
            << 2U) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                       << 1U) | (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                 [1U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[0U][0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_123[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[0U][1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_123[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[0U][2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_123[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[0U][3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_123[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[1U][0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_124[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[1U][1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_124[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[1U][2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_124[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out[1U][3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_124[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U];
    if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
        if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U] 
                      >> 4U)))) {
            if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[0U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[1U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[2U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[3U];
                if ((0x0000000060000000ULL == (0x0000000060000000ULL 
                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[3U];
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[4U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[5U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[6U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mac_bignum_operation_result_i[7U];
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U] 
                         >> 4U)))) {
        if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U] 
                      >> 3U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[5U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[6U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation_result[7U];
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
        [1U][3U];
    __Vfunc_aes_transpose__1177__in[0U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [0U][0U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [1U][0U]);
    __Vfunc_aes_transpose__1177__in[1U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [0U][1U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [1U][1U]);
    __Vfunc_aes_transpose__1177__in[2U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [0U][2U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [1U][2U]);
    __Vfunc_aes_transpose__1177__in[3U] = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [0U][3U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done
                                           [1U][3U]);
    __Vfunc_aes_transpose__1177__transpose[0U] = 0U;
    __Vfunc_aes_transpose__1177__transpose[1U] = 0U;
    __Vfunc_aes_transpose__1177__transpose[2U] = 0U;
    __Vfunc_aes_transpose__1177__transpose[3U] = 0U;
    __Vfunc_aes_transpose__1177__transpose[0U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1177__transpose[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vfunc_aes_transpose__1177__in[0U]));
    __Vfunc_aes_transpose__1177__transpose[1U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1177__transpose[1U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1177__in[0U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1177__transpose[2U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1177__transpose[2U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1177__in[0U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1177__transpose[3U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1177__transpose[3U]) 
                                                  | (__Vfunc_aes_transpose__1177__in[0U] 
                                                     >> 0x00000018U));
    __Vfunc_aes_transpose__1177__transpose[0U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[0U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1177__in[1U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1177__transpose[1U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[1U]) 
                                                  | (0x0000ff00U 
                                                     & __Vfunc_aes_transpose__1177__in[1U]));
    __Vfunc_aes_transpose__1177__transpose[2U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[2U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1177__in[1U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1177__transpose[3U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[3U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1177__in[1U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1177__transpose[0U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[0U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1177__in[2U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1177__transpose[1U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[1U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1177__in[2U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1177__transpose[2U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[2U]) 
                                                  | (0x00ff0000U 
                                                     & __Vfunc_aes_transpose__1177__in[2U]));
    __Vfunc_aes_transpose__1177__transpose[3U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[3U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1177__in[2U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1177__transpose[0U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[0U]) 
                                                  | (__Vfunc_aes_transpose__1177__in[3U] 
                                                     << 0x00000018U));
    __Vfunc_aes_transpose__1177__transpose[1U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[1U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1177__in[3U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1177__transpose[2U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[2U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1177__in[3U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1177__transpose[3U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1177__transpose[3U]) 
                                                  | (0xff000000U 
                                                     & __Vfunc_aes_transpose__1177__in[3U]));
    __Vfunc_aes_transpose__1177__Vfuncout[0U] = __Vfunc_aes_transpose__1177__transpose[0U];
    __Vfunc_aes_transpose__1177__Vfuncout[1U] = __Vfunc_aes_transpose__1177__transpose[1U];
    __Vfunc_aes_transpose__1177__Vfuncout[2U] = __Vfunc_aes_transpose__1177__transpose[2U];
    __Vfunc_aes_transpose__1177__Vfuncout[3U] = __Vfunc_aes_transpose__1177__transpose[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done_transposed[0U] 
        = __Vfunc_aes_transpose__1177__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done_transposed[1U] 
        = __Vfunc_aes_transpose__1177__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done_transposed[2U] 
        = __Vfunc_aes_transpose__1177__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_done_transposed[3U] 
        = __Vfunc_aes_transpose__1177__Vfuncout[3U];
}

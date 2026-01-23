// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_reg_cdc__D1_Rz3_Bz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ctl_cdc__0(Vsim_prim_reg_cdc__D1_Rz3_Bz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D1_Rz3_Bz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_ulp_ctl_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_ack = ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
                                ^ (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_req_from_src = ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q) 
                                         ^ (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_to_src = ((IData)(vlSelfRef.__PVT__src_ack) 
                                   & (IData)(vlSelfRef.__PVT__src_busy_q));
    vlSelfRef.dst_we_o = (((IData)(vlSelfRef.__PVT__txn_bits_q) 
                           >> 2U) & (IData)(vlSelfRef.__PVT__dst_req_from_src));
}

VL_ATTR_COLD void Vsim_prim_reg_cdc__D1_Rz3_Bz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_en_0_cdc__0(Vsim_prim_reg_cdc__D1_Rz3_Bz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D1_Rz3_Bz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_wkup_detector_en_0_cdc__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_ack = ((IData)(vlSelfRef.__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q) 
                                ^ (IData)(vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_req_from_src = ((IData)(vlSelfRef.__PVT__u_src_to_dst_req__DOT__dst_level_q) 
                                         ^ (IData)(vlSelf->__PVT__u_src_to_dst_req__DOT__prim_flop_2sync->q_o));
    vlSelfRef.__PVT__dst_to_src = ((IData)(vlSelfRef.__PVT__src_ack) 
                                   & (IData)(vlSelfRef.__PVT__src_busy_q));
}

VL_ATTR_COLD void Vsim_prim_reg_cdc__D1_Rz3_Bz2___ctor_var_reset(Vsim_prim_reg_cdc__D1_Rz3_Bz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_reg_cdc__D1_Rz3_Bz2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_src_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4001498580928466257ull);
    vlSelf->rst_src_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5051664114225530441ull);
    vlSelf->clk_dst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12851786363318594956ull);
    vlSelf->rst_dst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4194750565043001346ull);
    vlSelf->src_regwen_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099014108730345698ull);
    vlSelf->src_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17542492657126063174ull);
    vlSelf->src_re_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814825604165719572ull);
    vlSelf->src_wd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796056282611505485ull);
    vlSelf->src_busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10086578303772526111ull);
    vlSelf->src_qs_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7303931147743945635ull);
    vlSelf->dst_ds_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8570661034182711617ull);
    vlSelf->dst_qs_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1188878227332427069ull);
    vlSelf->dst_update_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7537277360995277466ull);
    vlSelf->dst_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11943994256373921413ull);
    vlSelf->__PVT__dst_re_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746061217599766768ull);
    vlSelf->dst_regwen_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4157798524948868598ull);
    vlSelf->dst_wd_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097451175198061258ull);
    vlSelf->__PVT__src_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3082514603621196259ull);
    vlSelf->__PVT__src_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13615111046629245705ull);
    vlSelf->__PVT__src_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13948712467904634369ull);
    vlSelf->__PVT__txn_bits_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8748924098963187239ull);
    vlSelf->__PVT__dst_to_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15545835842689708159ull);
    vlSelf->__PVT__dst_req_from_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15409402659310023767ull);
    vlSelf->__PVT__u_src_to_dst_req__DOT__src_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8174099724842850104ull);
    vlSelf->__PVT__u_src_to_dst_req__DOT__dst_level_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13333246938125105800ull);
    vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13013967301730087142ull);
    vlSelf->__PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17142556258639092691ull);
    vlSelf->__Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10649418811021632748ull);
}

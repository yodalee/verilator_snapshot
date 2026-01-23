// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_mubi4_sync__A0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4__DOT____Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4__DOT__u_rst_sync.q_o));
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int));
}

VL_ATTR_COLD void Vsim_prim_mubi4_sync__A0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__u_rst_sync.q_o));
    vlSelfRef.clk_i = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__step_down_nq)) 
                       | ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__step_down_nq)) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__q_p)));
}

VL_ATTR_COLD void Vsim_prim_mubi4_sync__A0___ctor_var_reset(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->mubi_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9457581145832603685ull);
    vlSelf->mubi_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7877937283296971435ull);
    vlSelf->__PVT__gen_no_flops__DOT__unused_logic = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16799914484158036638ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_subreg_shadow__Sz75_R0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.err_storage = ((~ vlSelfRef.__PVT__shadow_q) 
                             != vlSelfRef.__PVT__committed_q);
    vlSelfRef.__PVT__wr_en_data_arb__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 9U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 0x00000017U))
                                                 : 0xffffffffU);
}

VL_ATTR_COLD void Vsim_prim_subreg_shadow__Sz75_R0___ctor_var_reset(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->rst_shadowed_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099826463160395104ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18210509495843279068ull);
    vlSelf->de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418971983228644420ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1720370409040345145ull);
    vlSelf->__PVT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13811282347017747479ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8861071527689086543ull);
    vlSelf->__PVT__ds = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10343076919720641053ull);
    vlSelf->qs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1373413353089790568ull);
    vlSelf->__PVT__phase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11256959997607747473ull);
    vlSelf->err_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784758065107425415ull);
    vlSelf->err_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8308962247507842699ull);
    vlSelf->__PVT__phase_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6048730929906475738ull);
    vlSelf->__PVT__staged_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5239208138423617019ull);
    vlSelf->__PVT__shadow_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2866240867468553813ull);
    vlSelf->__PVT__committed_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1452413327363196313ull);
    vlSelf->__PVT__wr_en_data_arb__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7639768185117507122ull);
    vlSelf->__PVT__wr_en_data_arb__DOT__wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5823424209626504246ull);
    vlSelf->__PVT__staged_reg__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11974266604262834945ull);
    vlSelf->__PVT__committed_reg__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6193797798265686887ull);
    vlSelf->__PVT__committed_reg__DOT__wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14452529580513763902ull);
}

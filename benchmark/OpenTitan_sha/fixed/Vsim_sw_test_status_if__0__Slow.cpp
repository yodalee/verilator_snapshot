// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_sw_test_status_if___eval_static__TOP__chip_sim_tb__DOT__u_sw_test_status_if(Vsim_sw_test_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_sw_test_status_if___eval_static__TOP__chip_sim_tb__DOT__u_sw_test_status_if\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__num_iterations = 1U;
}

VL_ATTR_COLD void Vsim_sw_test_status_if___ctor_var_reset(Vsim_sw_test_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_sw_test_status_if___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->fetch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16296824509414353330ull);
    vlSelf->wr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6495213400008252903ull);
    vlSelf->addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14934084843038794831ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10363016170300574568ull);
    vlSelf->sw_test_status_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17018272092065177215ull);
    vlSelf->__PVT__sw_test_status = 0;
    vlSelf->__PVT__sw_test_status_prev = 0;
    vlSelf->__PVT__in_terminal_state = 0;
    vlSelf->sw_test_done = 0;
    vlSelf->sw_test_passed = 0;
    vlSelf->__PVT__num_iterations = 0;
}

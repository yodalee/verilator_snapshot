// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___ctor_var_reset(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->D = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9391737413944127320ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16045251163025377914ull);
    vlSelf->scanin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18086663322088233579ull);
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660815779230110548ull);
    vlSelf->shiftDR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 973725432361505801ull);
    vlSelf->Q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17714545831559622561ull);
    vlSelf->scanout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4552453323431310566ull);
    vlSelf->__PVT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7194709672137212313ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488032794441497119ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7150219488376000343ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10660408215280537462ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698375589442749867ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2864288818865253249ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12771385105098096481ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849523675929298463ull);
}

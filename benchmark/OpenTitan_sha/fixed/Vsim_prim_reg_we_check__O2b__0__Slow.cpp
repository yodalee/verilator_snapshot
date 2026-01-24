// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_reg_we_check__O2b___ctor_var_reset(Vsim_prim_reg_we_check__O2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O2b___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->oh_i = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16598430225602142758ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 11848474061166706113ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068447993876640897ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13591045642415749085ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11467723443421260287ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9618256038857819027ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14428268414786394272ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15500615274536250072ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15502542139675930955ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16562746889336221781ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2932164412642566723ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 150607915926445960ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16657441939221146177ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16315797896250017470ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187501943011608827ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4127214815615199290ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3346229564922093412ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12747681460942431538ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1732790227567038936ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12691740924666687173ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495846238682544385ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6356388340049970587ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7964214571639941321ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700532384305446429ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17840698077133823103ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6899383690407755020ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7845158944772694959ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10975695107601830194ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11826442415562352722ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7123294390376398329ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16053048745178211571ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15958837446199910313ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4829516717529307891ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5963298313838676378ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254887440256820575ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7268355811669710628ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13202589559761497419ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3636870284421835288ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6055334860858885820ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15963841339130825842ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12203039814392571152ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 700964636316356323ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10554231803537703163ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929548773987305575ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5691349623387037379ull);
}

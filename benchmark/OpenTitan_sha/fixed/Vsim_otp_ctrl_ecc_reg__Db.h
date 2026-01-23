// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_OTP_CTRL_ECC_REG__DB_H_
#define VERILATED_VSIM_OTP_CTRL_ECC_REG__DB_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_otp_ctrl_ecc_reg__Db final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(wren_i,0,0);
    VL_IN8(addr_i,3,0);
    VL_OUT8(ecc_err_o,0,0);
    VlWide<3>/*87:0*/ __PVT__ecc_d;
    VlWide<3>/*87:0*/ __PVT__ecc_q;
    CData/*7:0*/ __Vlvbound_h941e4118__0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    CData/*7:0*/ __PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o;
    CData/*7:0*/ gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Pre_hd4ed1e0a_0_0;
    VlWide<3>/*71:0*/ __PVT__u_prim_secded_inv_72_64_enc__DOT__data_o;
    VL_IN64(wdata_i,63,0);
    VL_OUT64(rdata_o,63,0);
    VL_OUTW(data_o,703,0,22);
    VlWide<22>/*703:0*/ __PVT__data_d;
    VlWide<22>/*703:0*/ __PVT__data_q;
    QData/*63:0*/ __Vlvbound_h55f44042__0;
    QData/*63:0*/ __PVT__u_prim_secded_inv_72_64_enc__DOT__data_i;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    QData/*63:0*/ __PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__data_o;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;
    VlUnpacked<CData/*0:0*/, 256> gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_otp_ctrl_ecc_reg__Db(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_otp_ctrl_ecc_reg__Db();
    VL_UNCOPYABLE(Vsim_otp_ctrl_ecc_reg__Db);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

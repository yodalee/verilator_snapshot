// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_SOCKET_1N__PI66_H_
#define VERILATED_VSIM_TLUL_SOCKET_1N__PI66_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_tlul_fifo_sync__RCz112_RDz112;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_socket_1n__pi66 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_tlul_fifo_sync__RCz112_RDz112* __PVT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vsim_tlul_fifo_sync__RCz112_RDz112* __PVT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vsim_tlul_fifo_sync__RCz112_RDz112* __PVT__gen_dfifo__BRA__2__KET____DOT__fifo_d;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(dev_select_i,1,0);
        CData/*1:0*/ __PVT__dev_select_outstanding;
        CData/*0:0*/ __PVT__hold_all_requests;
        CData/*0:0*/ __PVT__accept_t_req;
        CData/*0:0*/ __PVT__accept_t_rsp;
        CData/*0:0*/ __PVT__hfifo_reqready;
        CData/*0:0*/ __PVT__gen_u_o__BRA__0__KET____DOT__dev_select;
        CData/*0:0*/ __PVT__gen_u_o__BRA__1__KET____DOT__dev_select;
        CData/*0:0*/ __PVT__gen_u_o__BRA__2__KET____DOT__dev_select;
        CData/*1:0*/ __PVT__fifo_h__DOT__spare_req_i;
        CData/*0:0*/ __PVT__fifo_h__DOT__reqfifo__DOT__wvalid_i;
        CData/*0:0*/ __PVT__fifo_h__DOT__reqfifo__DOT__wready_o;
        CData/*2:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending;
        CData/*3:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
        CData/*5:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__0__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__0__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__1__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__1__cmd_intg;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__5__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__5__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__6__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__6__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__10__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__10__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__11__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__11__cmd_intg;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__15__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__15__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__16__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__16__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__20__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__20__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__21__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__21__cmd_intg;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__25__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__25__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__26__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__26__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__28__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__28__val;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__30__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__30__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__31__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__31__cmd_intg;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__35__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__35__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__36__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__36__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__38__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__38__val;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__40__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__40__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__41__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__41__cmd_intg;
    };
    struct {
        CData/*6:0*/ __Vfunc_get_bad_data_intg__45__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__45__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__46__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__46__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__48__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__48__val;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__50__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_cmd_intg__50__cmd_intg;
        CData/*6:0*/ __Vfunc_get_cmd_intg__51__Vfuncout;
        CData/*6:0*/ __Vfunc_get_cmd_intg__51__cmd_intg;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__55__Vfuncout;
        CData/*6:0*/ __Vfunc_get_bad_data_intg__55__data_intg;
        CData/*6:0*/ __Vfunc_get_data_intg__56__Vfuncout;
        CData/*6:0*/ __Vfunc_get_data_intg__56__data_intg;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__58__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__58__val;
        SData/*8:0*/ __PVT__num_req_outstanding;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1141;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1269;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1276;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1279;
        IData/*22:0*/ __PVT__blanked_auser;
        IData/*31:0*/ __VdfgRegularize_ha6beb6f7_0_1;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_420;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_423;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1217;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1226;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1229;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1230;
        VlWide<4>/*107:0*/ __VdfgRegularize_h6e95ff9d_0_1363;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1388;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1389;
        VL_INW(tl_h_i,108,0,4);
        VL_OUTW(tl_h_o,65,0,3);
        VlWide<3>/*65:0*/ __PVT__tl_t_p;
        VlWide<4>/*108:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_i;
        VlWide<3>/*65:0*/ __PVT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__0__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__1__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__1__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__2__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__2__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__2__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__3__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__3__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__3__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__4__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__4__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__4__data_o;
        QData/*38:0*/ __Vfunc_get_data_intg__6__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__7__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__7__data_o;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__10__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__11__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__11__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__12__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__12__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__12__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__13__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__13__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__13__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__14__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__14__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__14__data_o;
    };
    struct {
        QData/*38:0*/ __Vfunc_get_data_intg__16__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__17__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__17__data_o;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__20__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__21__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__21__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__22__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__22__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__22__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__23__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__23__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__23__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__24__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__24__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__24__data_o;
        QData/*38:0*/ __Vfunc_get_data_intg__26__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__27__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__27__data_o;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__30__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__31__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__31__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__32__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__32__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__32__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__33__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__33__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__33__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__34__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__34__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__34__data_o;
        QData/*38:0*/ __Vfunc_get_data_intg__36__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__37__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__37__data_o;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__40__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__41__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__41__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__42__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__42__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__42__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__43__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__43__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__43__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__data_o;
        QData/*38:0*/ __Vfunc_get_data_intg__46__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__47__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__47__data_o;
        VlWide<4>/*108:0*/ __Vfunc_get_bad_cmd_intg__50__tl;
        VlWide<4>/*108:0*/ __Vfunc_get_cmd_intg__51__tl;
        QData/*42:0*/ __Vfunc_get_cmd_intg__51__cmd;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__52__Vfuncout;
        VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__52__tl;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__52__payload;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__data_o;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout;
        QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__data_i;
        QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__data_o;
        QData/*38:0*/ __Vfunc_get_data_intg__56__enc_data;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__57__Vfuncout;
        QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__57__data_o;
        VL_OUTW(tl_d_o[3],108,0,4);
    };
    struct {
        VL_INW(tl_d_i[3],65,0,3);
        VlUnpacked<VlWide<4>/*108:0*/, 4> __PVT__tl_u_o;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__tl_u_i;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_socket_1n__pi66(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_socket_1n__pi66();
    VL_UNCOPYABLE(Vsim_tlul_socket_1n__pi66);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

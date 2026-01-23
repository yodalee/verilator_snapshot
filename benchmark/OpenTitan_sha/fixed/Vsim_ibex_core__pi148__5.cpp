// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__4(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = (1U & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT____Vcellinp__u_core__test_en_i) 
                              | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__rst_shadow_set_q)));
}

extern const VlUnpacked<CData/*3:0*/, 32> Vsim__ConstPool__TABLE_h53822a93_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h1cc46dda_0;

void Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ id_stage_i__DOT____VdfgRegularize_h5aca553c_0_6;
    id_stage_i__DOT____VdfgRegularize_h5aca553c_0_6 = 0;
    CData/*0:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_1;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_1 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_2;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_2 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_3;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_3 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_11;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_11 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_12;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_12 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_13;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_13 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_14;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_14 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_15;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_15 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_16;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_16 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_17;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_17 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_18;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_18 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_19;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_19 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_20;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_20 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_21;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_21 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_22;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_22 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_23;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_23 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_24;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_24 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_25;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_25 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_26;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_26 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_27;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_27 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_28;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_28 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_29;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_29 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_30;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_30 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_31;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_31 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_32;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_32 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_33;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_33 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_34;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_34 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_35;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_35 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_36;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_36 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_37;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_37 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_38;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_38 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_39;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_39 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_40;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_40 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_41;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_41 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_42;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_42 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_43;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_43 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_44;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_44 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_45;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_45 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_46;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_46 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_47;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_47 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_48;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_48 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_49;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_49 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_50;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_50 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_51;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_51 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_52;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_52 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_53;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_53 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_54;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_54 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_55;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_55 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_56;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_56 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_57;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_57 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_58;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_58 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_59;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_59 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_60;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_60 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_61;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_61 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_62;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_62 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_63;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_63 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_64;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_64 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_65;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_65 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_66;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_66 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_67;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_67 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_68;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_68 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_69;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_69 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_70;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_70 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_71;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_71 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_72;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_72 = 0;
    QData/*33:0*/ __VdfgRegularize_h2dc7b7d1_1_16;
    __VdfgRegularize_h2dc7b7d1_1_16 = 0;
    SData/*9:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*4:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i)) 
                 | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                 & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                     >> 5U) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed = 0U;
    if ((1U & (~ ((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                   >> 1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed 
            = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed) 
                     | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err)));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed = 0U;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data));
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed = 0U;
    }
    if ((1U & ((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                >> 1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed 
            = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed) 
               | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err) 
                  >> 1U));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
               | (IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
                          >> 0x20U)));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
        = ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_4)
            ? vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                << 7U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                          >> 0x00000019U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q;
    vlSelfRef.ic_scr_key_req_o = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
            if (vlSelfRef.__PVT__icache_inval) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
                vlSelfRef.ic_scr_key_req_o = 1U;
            }
        } else if (vlSelfRef.__PVT__icache_inval) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
            vlSelfRef.ic_scr_key_req_o = 1U;
        } else if ((0x000000ffU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q))) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 3U;
        }
    } else {
        if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
            if ((1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 2U;
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q)))) {
            if ((1U & (~ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U]))) {
                vlSelfRef.ic_scr_key_req_o = 1U;
            }
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i 
        = ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_3)
            ? vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]);
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0U != (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
    if ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_rvd))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                << 0x0000000eU) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                   >> 0x00000012U));
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed;
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
        = (IData)((((IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode) 
                    >> 1U) & (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                              >> 0x0000001fU)));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
            >> 0x0000001fU) & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.__PVT__lsu_addr_incr_req))
            ? ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.__PVT__instr_is_compressed_id)
                                 ? 2U : 4U) : 4U)) : 
               ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                 ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                     ? (0xfffff000U & vlSelfRef.__PVT__instr_rdata_id)
                     : 4U) : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel))
                               ? (((- (IData)((vlSelfRef.__PVT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSelfRef.__PVT__instr_rdata_id 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.__PVT__instr_rdata_id 
                                           >> 7U))))
                               : vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o)))
            : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i);
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i 
            >> 0x0000001fU) & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i)))));
    vlSelfRef.__PVT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
        = (0x00000001ffffffffULL & ((QData)((IData)(
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel))
                                                      ? vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i
                                                      : vlSelfRef.__PVT__pc_id))) 
                                    + (QData)((IData)(
                                                      ((4U 
                                                        & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__instr_is_compressed_id)
                                                          ? 2U
                                                          : 4U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__instr_is_compressed_id)
                                                           ? 2U
                                                           : 4U)
                                                          : 
                                                         (((- (IData)(
                                                                      (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x0000001fU))) 
                                                           << 0x00000014U) 
                                                          | ((((0x000001feU 
                                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                                   >> 0x0000000bU)) 
                                                               | (1U 
                                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                                     >> 0x00000014U))) 
                                                              << 0x0000000bU) 
                                                             | (0x000007feU 
                                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                                   >> 0x00000014U))))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__instr_is_compressed_id)
                                                           ? 2U
                                                           : 4U)
                                                          : 
                                                         (((- (IData)(
                                                                      (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x0000001fU))) 
                                                           << 0x0000000dU) 
                                                          | ((((2U 
                                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                                   >> 0x0000001eU)) 
                                                               | (1U 
                                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                                     >> 7U))) 
                                                              << 0x0000000bU) 
                                                             | ((0x000007e0U 
                                                                 & (vlSelfRef.__PVT__instr_rdata_id 
                                                                    >> 0x00000014U)) 
                                                                | (0x0000001eU 
                                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                                      >> 7U))))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__instr_is_compressed_id)
                                                           ? 2U
                                                           : 4U)
                                                          : vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o)))))));
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i))) 
                   << 1U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.__PVT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.__PVT__pc_id) : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
                                              ? vlSelfRef.__PVT__load_store_unit_i__DOT__addr_last_q
                                              : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_err_q) 
            & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)) 
           | ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr)) 
              & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi = 0U;
    if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
                              | (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
                                 >> 0x10U)));
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr) 
           | ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_arb)) 
              & ((~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q) 
                    | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err) 
                       | (0x00030000U != (0x00030000U 
                                          & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data)))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo = 0U;
    if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo) 
                              | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data));
    }
    if ((1U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q)) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
                              | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo) 
                              | (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
                                 >> 0x10U)));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b 
        = (0x0000000fU & (~ ((((0U != (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x0000001aU)) 
                               << 3U) | ((0U != (0x0000003fU 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x00000012U))) 
                                         << 2U)) | 
                             (((0U != (0x0000003fU 
                                       & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                          >> 0x0000000aU))) 
                               << 1U) | (0U != (0x0000003fU 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 2U)))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h 
        = (3U & (~ (((0U != (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                             >> 0x00000011U)) << 1U) 
                    | (0U != (0x00007fffU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 1U))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b 
        = ((((0x0000000cU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                             >> 0x00000016U)) | (3U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x00000010U))) 
            << 4U) | ((0x0000000cU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                      >> 6U)) | (3U 
                                                 & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h 
        = ((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                  >> 0x0000000fU)) | (1U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n 
        = (((((0x00000038U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                              >> 0x00000019U)) | (7U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 0x00000018U))) 
             << 0x00000012U) | (((0x00000038U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                 >> 0x00000011U)) 
                                 | (7U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                          >> 0x00000010U))) 
                                << 0x0000000cU)) | 
           ((((0x00000038U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                              >> 9U)) | (7U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 8U))) 
             << 6U) | ((0x00000038U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 1U)) | (7U 
                                                  & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate)
            ? (~ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len 
        = ((0x00000010U & ((~ (0U != (0x0000000fU & 
                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000018U)))) 
                           << 4U)) | (0x0000000fU & 
                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000018U)));
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0 
        = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
            >> 5U) & ((0x2fU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                      | (0x30U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev 
        = ((((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                        << 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                          >> 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i 
        = ((IData)(vlSelfRef.__PVT__csr_access) ? (0x00000fffU 
                                                   & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : 0U);
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed 
        = (0x00000007ffffffffULL & (VL_EXTENDS_QQ(35,34, 
                                                  ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q)
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      (0x0000ffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res 
                                                                                >> 0x00000010U))))))) 
                                    + (VL_EXTENDS_QQ(35,34, 
                                                     (0x00000003ffffffffULL 
                                                      & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (0x0000ffffU 
                                                                            & (- (IData)(
                                                                                ((0U 
                                                                                != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                                                                                [0U] 
                                                                                >> 0x00000021U)))))))) 
                                                           << 0x00000012U) 
                                                          | (QData)((IData)(
                                                                            (0x0003ffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                                                                                [0U] 
                                                                                >> 0x00000010U))))))
                                                          : 
                                                         VL_MULS_QQQ(34, 
                                                                     (0x00000003ffffffffULL 
                                                                      & VL_EXTENDS_QI(34,17, 
                                                                                (0x0000ffffU 
                                                                                & vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i))), 
                                                                     (0x00000003ffffffffULL 
                                                                      & VL_EXTENDS_QI(34,17, 
                                                                                (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                                                                >> 0x00000010U)))))))) 
                                       + VL_EXTENDS_QQ(35,34, 
                                                       (0x00000003ffffffffULL 
                                                        & VL_MULS_QQQ(34, 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, 
                                                                                ((0x00010000U 
                                                                                & (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode) 
                                                                                << 0x00000010U) 
                                                                                & (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i 
                                                                                >> 0x0000000fU))) 
                                                                                | (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i 
                                                                                >> 0x00000010U)))), 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, 
                                                                                ((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) 
                                                                                & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b)) 
                                                                                << 0x00000010U) 
                                                                                | (0x0000ffffU 
                                                                                & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                                                                >> 0x00000010U)
                                                                                 : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i)))))))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__pack_result 
        = ((0x24U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
            ? ((0xffff0000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
               | (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                  >> 0x00000010U)) : ((0x25U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                       ? ((0x0000ff00U 
                                           & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))
                                       : ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))));
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.__PVT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i))) 
                                                  << 1U))));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = (0x00000003ffffffffULL & (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                      ? vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                              << 2U))
                                          : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                    << 3U))
                                              : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                     << 4U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                                                     << 1U)))))) 
                                    + (0x00000001ffffffffULL 
                                       & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                           ? vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_b
                                           : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                               ? (~ 
                                                  ((QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                   << 1U))
                                               : ((QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                  << 1U))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)
            ? (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_data_q)
            : (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo));
    if ((0x13U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = (0x000000ffU & (~ (((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 0x0000001bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                >> 0x00000016U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x00000013U))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                             >> 0x0000000eU)) 
                                      | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 0x0000000bU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 3U)))))));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    } else if ((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xf0U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | ((0x0000000cU & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                               >> 1U)))) 
                                  << 2U)) | (3U & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b)))))));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0x0fU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | (((0x0000000cU & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                                >> 3U)))) 
                                   << 2U)) | (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                                             >> 2U)))))) 
                  << 4U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0 
            = (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     << 1U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fffff8U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0 
            = (1U | (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           << 1U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00ffffc7U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0) 
                  << 3U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0 
            = (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 1U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fffe3fU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0) 
                  << 6U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0 
            = (1U | (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 1U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fff1ffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0) 
                  << 9U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0 
            = (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 3U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00ff8fffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0) 
                  << 0x0000000cU));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0 
            = (1U | (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 3U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fc7fffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0) 
                  << 0x0000000fU));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0 
            = (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 5U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00e3ffffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0) 
                  << 0x00000012U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0 
            = (1U | (6U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 5U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x001fffffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0) 
                  << 0x00000015U));
    } else if ((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0x000000f0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h) 
                                                 >> 1U)))) 
                               << 4U)) | (0x0000000fU 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h))))));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h002f78e6__0 
            = (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 2U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fffff8U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h002f78e6__0));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h010edd1b__0 
            = (1U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00ffffc7U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h010edd1b__0) 
                  << 3U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17fe2e4c__0 
            = (2U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fffe3fU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17fe2e4c__0) 
                  << 6U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17cb3542__0 
            = (3U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fff1ffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17cb3542__0) 
                  << 9U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h002f78e6__0 
            = (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 1U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00ff8fffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h002f78e6__0) 
                  << 0x0000000cU));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h010edd1b__0 
            = (1U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00fc7fffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h010edd1b__0) 
                  << 0x0000000fU));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17fe2e4c__0 
            = (2U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x00e3ffffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17fe2e4c__0) 
                  << 0x00000012U));
        vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17cb3542__0 
            = (3U | (4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x001fffffU & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelfRef.ex_block_i__DOT__alu_i__DOT____Vlvbound_h17cb3542__0) 
                  << 0x00000015U));
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result 
        = (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = ((((((((2U & ((~ ((IData)(0xffffffffU) << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len))) 
                        << 1U)) | (1U & (~ (((IData)(0xffffffffU) 
                                             << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                            >> 1U)))) 
                << 6U) | (((2U & ((~ (((IData)(0xffffffffU) 
                                       << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                      >> 2U)) << 1U)) 
                           | (1U & (~ (((IData)(0xffffffffU) 
                                        << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                       >> 3U)))) << 4U)) 
              | ((((2U & ((~ (((IData)(0xffffffffU) 
                               << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                              >> 4U)) << 1U)) | (1U 
                                                 & (~ 
                                                    (((IData)(0xffffffffU) 
                                                      << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                     >> 5U)))) 
                  << 2U) | ((2U & ((~ (((IData)(0xffffffffU) 
                                        << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                       >> 6U)) << 1U)) 
                            | (1U & (~ (((IData)(0xffffffffU) 
                                         << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                        >> 7U)))))) 
             << 0x00000018U) | ((((((2U & ((~ (((IData)(0xffffffffU) 
                                                << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & (~ (((IData)(0xffffffffU) 
                                                 << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                >> 9U)))) 
                                   << 6U) | (((2U & 
                                               ((~ 
                                                 (((IData)(0xffffffffU) 
                                                   << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                  >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (((IData)(0xffffffffU) 
                                                      << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                     >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & ((~ (((IData)(0xffffffffU) 
                                                  << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                 >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & (~ (((IData)(0xffffffffU) 
                                                   << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                  >> 0x0000000dU)))) 
                                     << 2U) | ((2U 
                                                & ((~ 
                                                    (((IData)(0xffffffffU) 
                                                      << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                     >> 0x0000000eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(0xffffffffU) 
                                                       << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                      >> 0x0000000fU)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((~ (((IData)(0xffffffffU) << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                            >> 0x00000010U)) << 1U)) 
                 | (1U & (~ (((IData)(0xffffffffU) 
                              << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                             >> 0x00000011U)))) << 6U) 
               | (((2U & ((~ (((IData)(0xffffffffU) 
                               << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & (~ (((IData)(0xffffffffU) 
                                << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & ((~ (((IData)(0xffffffffU) 
                               << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & (~ (((IData)(0xffffffffU) 
                                << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                               >> 0x00000015U)))) << 2U) 
                 | ((2U & ((~ (((IData)(0xffffffffU) 
                                << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                               >> 0x00000016U)) << 1U)) 
                    | (1U & (~ (((IData)(0xffffffffU) 
                                 << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                >> 0x00000017U)))))) 
             << 8U) | (((((2U & ((~ (((IData)(0xffffffffU) 
                                      << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                     >> 0x00000018U)) 
                                 << 1U)) | (1U & (~ 
                                                  (((IData)(0xffffffffU) 
                                                    << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                   >> 0x00000019U)))) 
                         << 6U) | (((2U & ((~ (((IData)(0xffffffffU) 
                                                << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                               >> 0x0000001aU)) 
                                           << 1U)) 
                                    | (1U & (~ (((IData)(0xffffffffU) 
                                                 << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & ((~ 
                                                     (((IData)(0xffffffffU) 
                                                       << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (((IData)(0xffffffffU) 
                                                        << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                       >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      (((IData)(0xffffffffU) 
                                                        << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                       >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (((IData)(0xffffffffU) 
                                                         << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                        >> 0x0000001fU))))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = (1U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode) 
                 | ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                        >> 6U)) & ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? ((0x00000010U 
                                        & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                        ? ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                                               >> 3U)) 
                                           & ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                               ? (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                               : (IData)(
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) 
                                                          & ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0)
                                                              ? (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                                              : 
                                                             (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)))))))
                                        : (IData)((
                                                   (0x0fU 
                                                    == 
                                                    (0x0fU 
                                                     & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) 
                                                   & ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0)
                                                       ? 
                                                      (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i))
                                                       : (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)))))
                                    : (IData)(((8U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) 
                                               & ((4U 
                                                   & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                                    & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i))
                                                    : 
                                                   ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                                    | (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i))))
                                                   : (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))))))));
    if ((0x37U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt 
            = (0x0000001fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                              >> 0x00000010U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                               ? ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0)
                                   ? (- vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                                   : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                               : ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0)
                                   ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i
                                   : (- vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i))));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
            = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode)
                ? 0x80000000U : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_left)
                                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
                                  : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i));
    }
    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op) {
        if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0xdea713f1U : 0xf7011641U);
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                    ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 0x00000018U)
                    : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 0x00000010U)
                        : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i));
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0x1edc6f41U : 0x04c11db7U);
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                [0U];
        }
    } else if (((0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                | (0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
    }
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
    vlSelfRef.__PVT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                  >> 0x0000000bU)))) {
        if ((0x00000400U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000200U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 6U)))) {
                            if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 2U)))) {
                                            vlSelfRef.__PVT__cs_registers_i__DOT__dbg_csr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000400U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000200U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 5U)))) {
                                if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                     >> 1U)))) {
                                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                    ? 0U
                                                    : 0x00000016U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))] 
                                               >> 0x20U));
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))]);
                            } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))]);
                            } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))]);
                            } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))]);
                            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))]);
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000200U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 1U)))) {
                                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_icache_enable__DOT__u_cpuctrlsts_ic_scr_key_valid_q_csr__DOT__rdata_q) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 2U)))) {
                                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                            if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 2U)) 
                                         || (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))));
                        } else {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? 0U : 
                                           vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                           [vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q])
                                        : ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? (0x28001048U 
                                               | (4U 
                                                  & ((((((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q))) 
                                                      >> (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                     << 2U)))
                                            : (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                            }
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                         >> 2U));
                        }
                    } else {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 5U)))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                        if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff8U 
                                                & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                             >> 8U))) || ((1U & (~ 
                                                 ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 7U))) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 6U)) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                       >> 5U))) 
                                                  || ((1U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                          >> 4U)) 
                                                      || ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                               >> 3U))) 
                                                          || ((1U 
                                                               & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 2U)) 
                                                              || ((1U 
                                                                   & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                                      >> 1U)) 
                                                                  || (1U 
                                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))))))))));
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
        if ((0x00000100U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                              >> 6U)))) {
                    if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                    ? ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0fU]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0eU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0dU]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0cU]))
                                        : ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0bU]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0aU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                                ? vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                          >> 2U)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? (((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0x0fU] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0eU] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0dU] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0x0cU]))
                                            : (((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0x0bU] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0aU] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? (((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
                if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0x00000015U)));
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000080U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0x00000010U)));
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000800U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0x0000000bU)));
                                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x8000ffffU 
                                                & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x7fff0000U 
                                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     << 9U)));
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? vlSelfRef.__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : vlSelfRef.cs_registers_i__DOT____VdfgExtracted_hb748c870__0)
                                        : ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))
                                            ? vlSelfRef.__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))];
                } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.__PVT__cs_registers_i__DOT__mhpmevent
                            [(0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__cs_registers_i__DOT__mcountinhibit_q;
                }
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                                vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                            vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
                if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i)))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0x0000000eU)));
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & (vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 9U)));
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000800U & (vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 4U)));
                    vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x00000010U)));
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0x40901104U;
                    } else {
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffffff7U & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (8U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U)));
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffff7fU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 3U)));
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffe7ffU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00001800U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 9U)));
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffdffffU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00020000U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000010U)));
                        vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffdfffffU & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00200000U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000015U)));
                    }
                }
                if ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) {
                    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (QData)((IData)((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res)))));
    if (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
            = (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i)));
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
            = (0x00000003ffffffffULL & vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed);
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                = (0x00000003ffffffffULL & vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed);
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr[2U] = 
        ((QData)((IData)((0x3fffffffU & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                 >> 3U))))) 
         << 2U);
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                  [1U]);
    vlSelfRef.__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i 
        = ((1U & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                     >> 1U)))
                                       ? ((vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                           << 0x00000018U) 
                                          | (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                             >> 8U))
                                       : ((vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                           << 0x00000010U) 
                                          | (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                             >> 0x00000010U)))
            : ((1U & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                              >> 1U))) ? ((vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                           << 8U) | 
                                          (vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i 
                                           >> 0x00000018U))
                : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i));
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__handle_misaligned_q) 
                      << 4U) | ((0x0000000cU & ((IData)(
                                                        (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                         >> 1U)) 
                                                << 2U)) 
                                | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.__PVT__load_store_unit_i__DOT__data_be 
        = Vsim__ConstPool__TABLE_h53822a93_0[__Vtableidx15];
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.__PVT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                                                            [1U] 
                                                            >> 0x0000001fU))))
                  ? (IData)((vlSelfRef.__PVT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                           >> 0x00000020U)))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__47__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__46__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__45__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__44__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__43__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__42__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__41__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__40__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__39__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__38__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__37__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__36__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__35__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__34__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__33__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__32__KET__ 
        = ((0x3fffffffU & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 3U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162)) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49);
    __Vtableidx13 = (((0U != (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                      >> 1U))) << 9U) 
                     | ((0x00000100U & ((((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           ^ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                          >> 0x0000001fU)
                                          ? ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x0000001fU) 
                                             ^ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 0x00000020U)))) 
                                        << 8U)) | (
                                                   ((0U 
                                                     == (IData)(
                                                                (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                 >> 1U))) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vsim__ConstPool__TABLE_h1cc46dda_0[__Vtableidx13];
    vlSelfRef.__PVT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op 
        = ((0x28U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__addr_incr_two 
        = ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o)) 
           & (3U != (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
            << 0x00000010U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_66 
        = ((3U == (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))) 
           | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result 
        = (((((((0x00000080U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                 ? (0x0000000fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                   >> (0x0000001fU 
                                       & VL_SHIFTL_III(5,5,32, 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                           >> 0x00000015U)), 2U))))
                 : 0U) << 0x0000000cU) | (((0x00000040U 
                                            & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                            ? (0x0000000fU 
                                               & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (7U 
                                                                    & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                       >> 0x00000012U)), 2U))))
                                            : 0U) << 8U)) 
             | ((((0x00000020U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                   ? (0x0000000fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                     >> (0x0000001fU 
                                         & VL_SHIFTL_III(5,5,32, 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                             >> 0x0000000fU)), 2U))))
                   : 0U) << 4U) | ((0x00000010U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                    ? (0x0000000fU 
                                       & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                          >> (0x0000001fU 
                                              & VL_SHIFTL_III(5,5,32, 
                                                              (7U 
                                                               & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                  >> 0x0000000cU)), 2U))))
                                    : 0U))) << 0x00000010U) 
           | (((((8U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                  ? (0x0000000fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                    >> (0x0000001fU 
                                        & VL_SHIFTL_III(5,5,32, 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                            >> 9U)), 2U))))
                  : 0U) << 0x0000000cU) | (((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                             ? (0x0000000fU 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(5,5,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                        >> 6U)), 2U))))
                                             : 0U) 
                                           << 8U)) 
              | ((((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                    ? (0x0000000fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(5,5,32, 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                              >> 3U)), 2U))))
                    : 0U) << 4U) | ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                     ? (0x0000000fU 
                                        & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(5,5,32, 
                                                               (7U 
                                                                & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel), 2U))))
                                     : 0U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or)
            ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
               | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
            : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and)
                ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result
                : (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   ^ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
    if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xaaaaaaaaU & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U))) 
               | (0x55555555U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U)));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xccccccccU & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U))) 
               | (0x33333333U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U)));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xf0f0f0f0U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U))) 
               | (0x0f0f0f0fU & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U)));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xff00ff00U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U))) 
               | (0x00ff00ffU & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U)));
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x00000010U))) 
               | (0x0000ffffU & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x00000010U)));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (((IData)(ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_0) 
            << 5U) | (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt));
    vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
        = ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.__PVT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr_insn_o 
        = ((IData)(vlSelfRef.__PVT__csr_access) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr) 
                                                   | ((IData)(
                                                              ((0x0c00U 
                                                                == 
                                                                (0x0c00U 
                                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i))) 
                                                               & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_wr))) 
                                                      | (((3U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__csr_addr_i) 
                                                              >> 8U)) 
                                                          > (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                                         | ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                                            & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__dbg_csr))))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_addr_i[0U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr
        [0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_addr_i[1U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr
        [1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_addr_i[2U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr
        [2U];
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i);
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i);
            }
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                       >> 1U));
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
                      [0U]);
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x00007fffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x00007fffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0fU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__47__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0fU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__47__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002fU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000bfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000bfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0eU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__46__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0eU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__46__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002eU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000dfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000dfffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0dU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__45__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0dU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__45__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002dU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000efffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000efffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0cU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__44__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0cU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__44__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002cU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000f7ffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000f7ffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0bU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__43__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0bU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__43__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002bU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fbffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fbffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0aU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__42__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0aU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__42__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000002aU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fdffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fdffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [9U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__41__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [9U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__41__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000029U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000feffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000feffffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [8U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__40__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [8U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__40__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000028U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ff7fffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ff7fffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [7U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__39__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [7U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__39__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000027U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffbfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffbfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [6U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__38__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [6U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__38__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000026U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffdfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffdfffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [5U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__37__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [5U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__37__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000025U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffefffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffefffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [4U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__36__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [4U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__36__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000024U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fff7ffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fff7ffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [3U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__35__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [3U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__35__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000023U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffbffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffbffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [2U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__34__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [2U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__34__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000022U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffdffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffdffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [1U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__33__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [1U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__33__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000021U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffeffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffeffffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__32__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__32__KET__) 
                                        | ((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 3U))) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                                                      >> 2U)))) 
                                       & ((0x3fffffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 3U))) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000020U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result 
        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
            : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_1 
        = (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op 
           | VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op, 1U));
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_11 
        = ((1U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_12 
        = ((2U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 1U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_13 
        = ((4U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 2U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_14 
        = ((8U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 3U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_15 
        = ((0x00000010U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 4U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_16 
        = ((0x00000020U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 5U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_17 
        = ((0x00000040U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 6U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_18 
        = ((0x00000080U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 7U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_19 
        = ((0x00000100U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 8U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_20 
        = ((0x00000200U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 9U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_21 
        = ((0x00000400U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000aU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_22 
        = ((0x00000800U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000bU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_23 
        = ((0x00001000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000cU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_24 
        = ((0x00002000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000dU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_25 
        = ((0x00004000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000eU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_26 
        = ((0x00008000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000000fU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_27 
        = ((0x00010000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000010U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_28 
        = ((0x00020000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000011U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_29 
        = ((0x00040000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000012U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_30 
        = ((0x00080000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000013U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_31 
        = ((0x00100000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000014U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_32 
        = ((0x00200000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000015U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_33 
        = ((0x00400000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000016U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_34 
        = ((0x00800000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000017U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_35 
        = ((0x01000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000018U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_36 
        = ((0x02000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x00000019U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_37 
        = ((0x04000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001aU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_38 
        = ((0x08000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001bU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_39 
        = ((0x10000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001cU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_40 
        = ((0x20000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001dU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_41 
        = ((0x40000000U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001eU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_42 
        = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            >> 0x0000001fU) ? VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x0000001fU)
            : 0U);
    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o;
    if ((2U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))) {
            if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)));
                    }
                } else {
                    if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                         >> 0x0cU)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 2U)))) {
                            if ((0U == (0x0000001fU 
                                        & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                           >> 7U)))) {
                                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                ? ((0U != (0x0000001fU 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : ((0U == (0x0000001fU 
                                               & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 7U)))
                                        ? 0x00100073U
                                        : (0x00e7U 
                                           | (0x000f8000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)))))
                                : ((0U != (0x0000001fU 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))
                                    : (0x0067U | (0x000f8000U 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     << 8U)))));
                    }
                }
            } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 7U)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
                }
            } else {
                if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                }
            }
        }
    } else if ((1U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        if ((0x00000400U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                            if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00000400U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0cU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                ? ((0x00000020U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))))
                                : ((0x00000020U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))));
                    }
                } else {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                }
            } else {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
            }
        } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0U == ((0x00000020U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U))))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                if ((2U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                           >> 7U)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      << 0x00000012U))))));
                }
            } else {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                    ? (0x6fU | (((((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
        }
    } else if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                          >> 0x0000000dU)))) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o) 
                                            | (0x00000200U 
                                               & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 3U))))));
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                      >> 0x0000000dU)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 5U)))))));
        }
    } else {
        if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0x000000ffU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                          >> 5U)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                      >> 0x0000000dU)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x00010413U | ((0x3c000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 0x00000013U)) 
                                  | ((0x03000000U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 0x0000000dU)) 
                                     | ((0x00800000U 
                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            << 0x00000012U)) 
                                        | ((0x00400000U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 0x00000010U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 5U)))))));
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
    if ((0x12U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode)) 
               | (((4U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                          << 2U)) | ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)) 
                                     | (1U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                                              >> 2U)))) 
                  << 1U));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = ((0x0eU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode)) 
               | (1U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                        >> 3U)));
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = (((((((((0x88224411U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result) 
                      | (0x22001100U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                     | (0x00880044U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                    | (0x00440000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                   | (0x00002200U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                  | (0x44110000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x0000000fU))) 
                 | (0x00008822U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x0000000fU))) 
                | (0x11000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x00000015U))) 
               | (0x00000088U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x00000015U)));
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [0U]) | ((0x00ff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 8U)) 
                         | (0x0000ff00U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 8U))));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [1U]) | ((0x0f000f00U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 4U)) 
                         | (0x00f000f0U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 4U))));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [2U]) | ((0x30303030U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 2U)) 
                         | (0x0c0c0c0cU & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 2U))));
    }
    if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [3U]) | ((0x44444444U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 1U)) 
                         | (0x22222222U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 1U))));
    }
    if ((0x12U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = (((((((((0x88224411U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result) 
                      | (0x22001100U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                     | (0x00880044U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                    | (0x00440000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                   | (0x00002200U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                  | (0x44110000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x0000000fU))) 
                 | (0x00008822U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x0000000fU))) 
                | (0x11000000U & VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x00000015U))) 
               | (0x00000088U & VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x00000015U)));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((QData)((IData)(
                                                                    (((0x0cU 
                                                                       == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                                                      | (0x0bU 
                                                                         == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) 
                                                                     | ((8U 
                                                                         == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                                                        & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                           >> 0x0000001fU))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand))), (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__seed_i 
        = (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
           ^ vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q);
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_mseccfg_d 
        = ((4U & (((~ ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_28) 
                       | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_30) 
                          | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_32) 
                             | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_34) 
                                | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_36) 
                                   | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_38) 
                                      | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_40) 
                                         | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_42) 
                                            | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_44) 
                                               | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_46) 
                                                  | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_48) 
                                                     | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_50) 
                                                        | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_52) 
                                                           | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_54) 
                                                              | ((IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_56) 
                                                                 | (IData)(vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_58))))))))))))))))) 
                   << 2U) & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)) 
           | (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                    | vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (((0x00000010U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (((0x00001000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x00000800U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x00000800U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (((0x00100000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x00080000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x00080000U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (((0x10000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x08000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x08000000U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (((0x00000010U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (((0x00001000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x00000800U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x00000800U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (((0x00100000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x00080000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x00080000U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (((0x10000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x08000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x08000000U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (((0x00000010U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (((0x00001000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                       ? ((0x00000800U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                           ? 3U : 2U) : ((0x00000800U 
                                          & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0aU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0aU]) | (((0x00100000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((0x00080000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((0x00080000U 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0bU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0bU]) | (((0x10000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((0x08000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((0x08000000U 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0cU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0cU]) | (((0x00000010U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((8U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0dU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0dU]) | (((0x00001000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((0x00000800U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((0x00000800U 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0eU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0eU]) | (((0x00100000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((0x00080000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((0x00080000U 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0fU] 
        = ((0x27U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0fU]) | (((0x10000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                          ? ((0x08000000U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                              ? 3U : 2U) : ((0x08000000U 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o)
                                             ? 1U : 0U)) 
                        << 3U));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 2U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x0000000aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x00000012U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x0000001aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 2U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x0000000aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x00000012U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x0000001aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 2U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 0x0000000aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000aU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000aU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000012U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000bU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000bU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x0000001aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000cU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000cU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 2U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000dU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000dU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x0000000aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000eU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000eU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000012U)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000fU] 
        = ((0x1fU & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000fU]) | (0x00000020U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x0000001aU)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | ((4U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o) 
                     | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                 ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 1U) : (3U == 
                                              (3U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))) 
                               << 1U)) | (1U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 8U)) | ((2U & (((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                   >> 9U)
                                                : (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                       >> 8U)))) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                >> 8U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 0x00000010U)) | ((2U 
                                                 & (((1U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                      ? 
                                                     (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000011U)
                                                      : 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                          >> 0x00000010U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000010U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 0x00000018U)) | ((2U 
                                                 & (((1U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                      ? 
                                                     (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000019U)
                                                      : 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                          >> 0x00000018U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000018U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | ((4U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o) 
                     | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                 ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 1U) : (3U == 
                                              (3U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))) 
                               << 1U)) | (1U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 8U)) | ((2U & (((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                   >> 9U)
                                                : (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                       >> 8U)))) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                >> 8U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 0x00000010U)) | ((2U 
                                                 & (((1U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                      ? 
                                                     (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000011U)
                                                      : 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                          >> 0x00000010U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000010U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 0x00000018U)) | ((2U 
                                                 & (((1U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                      ? 
                                                     (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000019U)
                                                      : 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                          >> 0x00000018U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000018U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | ((4U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o) 
                     | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                 ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                    >> 1U) : (3U == 
                                              (3U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))) 
                               << 1U)) | (1U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                            >> 8U)) | ((2U & (((1U 
                                                & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                   >> 9U)
                                                : (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                       >> 8U)))) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                >> 8U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000aU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000aU]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                     >> 0x00000010U)) 
                              | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                          ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000011U)
                                          : (3U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                               >> 0x00000010U)))) 
                                        << 1U)) | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000010U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000bU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000bU]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                     >> 0x00000018U)) 
                              | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                          ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000019U)
                                          : (3U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                               >> 0x00000018U)))) 
                                        << 1U)) | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000018U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000cU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000cU]) | ((4U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o) 
                              | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                          ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 1U)
                                          : (3U == 
                                             (3U & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))) 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000dU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000dU]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                     >> 8U)) | ((2U 
                                                 & (((1U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                                      ? 
                                                     (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 9U)
                                                      : 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                          >> 8U)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 8U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000eU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000eU]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                     >> 0x00000010U)) 
                              | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                          ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000011U)
                                          : (3U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                               >> 0x00000010U)))) 
                                        << 1U)) | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000010U)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0x0000000fU] 
        = ((0x38U & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0x0000000fU]) | ((4U & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                     >> 0x00000018U)) 
                              | ((2U & (((1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                                          ? (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                             >> 0x00000019U)
                                          : (3U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                               >> 0x00000018U)))) 
                                        << 1U)) | (1U 
                                                   & (vlSelfRef.__PVT__cs_registers_i__DOT__dummy_instr_seed_o 
                                                      >> 0x00000018U)))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__illegal_csr_insn_o) 
              | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                 | (((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec)) 
                    | ((3U != (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                       & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec) 
                          | ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec))))))));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.__PVT__imd_val_q_ex[0U];
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                               >> 1U)))
                            : vlSelfRef.__PVT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 1U)))
                                     : vlSelfRef.__PVT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))
                                               ? vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x00000003ffffffffULL;
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i));
        }
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = (((((((2U & (((~ (0U != (0x00007fffU & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                        & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x0000000fU))) 
                       << 1U)) | (1U & ((~ (0U != (0x00003fffU 
                                                   & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                        & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                   >> 0x0000000eU))))) 
               << 6U) | (((2U & (((~ (0U != (0x00001fffU 
                                             & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                  & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                             >> 0x0000000dU))) 
                                 << 1U)) | (1U & ((~ 
                                                   (0U 
                                                    != 
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                             >> 0x0000000cU))))) 
                         << 4U)) | ((((2U & (((~ (0U 
                                                  != 
                                                  (0x000007ffU 
                                                   & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                         >> 0x0000000bU))) 
                                             << 1U)) 
                                      | (1U & ((~ (0U 
                                                   != 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x0000000aU))))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (0U 
                                                      != 
                                                      (0x000001ffU 
                                                       & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 9U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (0x000000ffU 
                                                        & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 8U))))))) 
            << 8U) | (((((2U & (((~ (0U != (0x0000007fU 
                                            & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                 & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                            >> 7U))) 
                                << 1U)) | (1U & ((~ 
                                                  (0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                            >> 6U))))) 
                        << 6U) | (((2U & (((~ (0U != 
                                               (0x0000001fU 
                                                & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                      >> 5U))) 
                                          << 1U)) | 
                                   (1U & ((~ (0U != 
                                              (0x0000000fU 
                                               & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                     >> 4U))))) 
                                  << 4U)) | ((((2U 
                                                & (((~ 
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 3U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 2U))))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (2ULL 
                                                          == 
                                                          (3ULL 
                                                           & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))))));
    vlSelfRef.__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = (((((((2U & (((~ (0U != (0x00007fffU & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x00000010U))))) 
                        & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x0000001fU))) 
                       << 1U)) | (1U & ((~ (0U != (0x00003fffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                              >> 0x00000010U))))) 
                                        & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                   >> 0x0000001eU))))) 
               << 6U) | (((2U & (((~ (0U != (0x00001fffU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                        >> 0x00000010U))))) 
                                  & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                             >> 0x0000001dU))) 
                                 << 1U)) | (1U & ((~ 
                                                   (0U 
                                                    != 
                                                    (0x00000fffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 0x00000010U))))) 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                             >> 0x0000001cU))))) 
                         << 4U)) | ((((2U & (((~ (0U 
                                                  != 
                                                  (0x000007ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                              >> 0x00000010U))))) 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                         >> 0x0000001bU))) 
                                             << 1U)) 
                                      | (1U & ((~ (0U 
                                                   != 
                                                   (0x000003ffU 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 0x00000010U))))) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x0000001aU))))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (0U 
                                                      != 
                                                      (0x000001ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                  >> 0x00000010U))))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 0x00000019U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x00000010U))))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 0x00000018U))))))) 
            << 8U) | (((((2U & (((~ (0U != (0x0000007fU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                       >> 0x00000010U))))) 
                                 & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                            >> 0x00000017U))) 
                                << 1U)) | (1U & ((~ 
                                                  (0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 0x00000010U))))) 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                            >> 0x00000016U))))) 
                        << 6U) | (((2U & (((~ (0U != 
                                               (0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                           >> 0x00000010U))))) 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                      >> 0x00000015U))) 
                                          << 1U)) | 
                                   (1U & ((~ (0U != 
                                              (0x0000000fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x00000010U))))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                     >> 0x00000014U))))) 
                                  << 4U)) | ((((2U 
                                                & (((~ 
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                  >> 0x00000010U))))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 0x00000013U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x00000010U))))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 0x00000012U))))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0x0000000000020000ULL 
                                                          == 
                                                          (0x0000000000030000ULL 
                                                           & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                              >> 0x00000010U)))))));
    vlSelfRef.__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = (((((((IData)(((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                          >> 0x0000002fU) & (~ (0U 
                                                != 
                                                (0x00007fffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                            >> 0x00000020U))))))) 
                << 3U) | (4U & (((~ (0U != (0x00003fffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                       >> 0x00000020U))))) 
                                 & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                            >> 0x0000002eU))) 
                                << 2U))) | ((2U & (
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (0x00001fffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                  >> 0x00000020U))))) 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                               >> 0x0000002dU))) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((~ 
                                                 (0U 
                                                  != 
                                                  (0x00000fffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                              >> 0x00000020U))))) 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                           >> 0x0000002cU)))))) 
             << 0x0000000cU) | ((((2U & (((~ (0U != 
                                              (0x000007ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x00000020U))))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                     >> 0x0000002bU))) 
                                         << 1U)) | 
                                  (1U & ((~ (0U != 
                                             (0x000003ffU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                         >> 0x00000020U))))) 
                                         & (IData)(
                                                   (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                    >> 0x0000002aU))))) 
                                 << 0x0000000aU) | 
                                (((2U & (((~ (0U != 
                                              (0x000001ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                          >> 0x00000020U))))) 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                     >> 0x00000029U))) 
                                         << 1U)) | 
                                  (1U & ((~ (0U != 
                                             (0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                         >> 0x00000020U))))) 
                                         & (IData)(
                                                   (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                    >> 0x00000028U))))) 
                                 << 8U))) | (((((2U 
                                                 & (((~ 
                                                      (0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x00000020U))))) 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                >> 0x00000027U))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((~ 
                                                       (0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                    >> 0x00000020U))))) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                 >> 0x00000026U))))) 
                                               << 6U) 
                                              | (((2U 
                                                   & (((~ 
                                                        (0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                     >> 0x00000020U))))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                  >> 0x00000025U))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((~ 
                                                         (0U 
                                                          != 
                                                          (0x0000000fU 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x00000020U))))) 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x00000024U))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (((~ 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                     >> 0x00000020U))))) 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                  >> 0x00000023U))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((~ 
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x00000020U))))) 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x00000022U))))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            (0x0000000200000000ULL 
                                                             == 
                                                             (0x0000000300000000ULL 
                                                              & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                 >> 0x00000020U)))))));
    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
        vlSelfRef.__PVT__rvfi_mem_wdata_d = vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i;
        vlSelfRef.__PVT__rvfi_mem_addr_d = (IData)(
                                                   (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                    >> 1U));
    } else {
        vlSelfRef.__PVT__rvfi_mem_wdata_d = vlSelfRef.__PVT__rvfi_mem_wdata_q;
        vlSelfRef.__PVT__rvfi_mem_addr_d = vlSelfRef.__PVT__rvfi_mem_addr_q;
    }
    vlSelfRef.__PVT__pmp_req_err[0U] = ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                            & (0x00008000U 
                                               == (0x7ffff800U 
                                                   & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q)))) 
                                        & ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check 
                    = (0x0000ffffU & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
                    [0U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all 
                    = (0x0000ffffU & (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
                    [0U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml 
                    = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp 
                    = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                             >> 1U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                    = (((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp) 
                        | (3U != (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode))) 
                       | ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml) 
                          & (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 0U;
                if ((1U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 1U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 1U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 2U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 2U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 3U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 3U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 4U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 4U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 5U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 5U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 6U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 6U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 7U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 7U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 8U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 8U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 9U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 9U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 0x0aU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0aU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 0x0bU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0bU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 0x0cU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0cU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0dU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                              >> 0x0eU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0eU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                if (((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
                     & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                        >> 0x0000000fU))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                                    >> 0x0fU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
                }
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout)));
    vlSelfRef.__PVT__pmp_req_err[1U] = ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                            & (0x00010000U 
                                               == (0xfffff000U 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                       << 1U)))))) 
                                        & ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check 
                    = (0x0000ffffU & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                              >> 0x10U)));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
                    [1U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all 
                    = (0x0000ffffU & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                              >> 0x10U)));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
                    [1U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml 
                    = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp 
                    = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                             >> 1U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                    = (((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp) 
                        | (3U != (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode))) 
                       | ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml) 
                          & (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 0U;
                if ((1U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 1U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 1U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 2U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 2U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 3U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 3U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 4U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 4U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 5U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 5U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 6U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 6U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 7U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 7U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 8U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 8U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 9U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 9U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 0x0aU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0aU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 0x0bU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0bU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 0x0cU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0cU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0dU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                              >> 0x0eU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0eU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                if (((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
                     & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                        >> 0x0000000fU))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                                    >> 0x0fU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
                }
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout)));
    vlSelfRef.__PVT__pmp_req_err[2U] = ((~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                            & (0x0000000000020000ULL 
                                               == (0x00000001ffffe000ULL 
                                                   & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))) 
                                        & ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check 
                    = (0x0000ffffU & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                              >> 0x20U)));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
                    [2U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all 
                    = (0x0000ffffU & (IData)((vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                              >> 0x20U)));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type 
                    = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
                    [2U];
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml 
                    = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp 
                    = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                             >> 1U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                    = (((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp) 
                        | (3U != (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode))) 
                       | ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml) 
                          & (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 0U;
                if ((1U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 1U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 1U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 2U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 2U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 3U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 3U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 4U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 4U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 5U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 5U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 6U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 6U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 7U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 7U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 8U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 8U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 9U)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 9U)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 0x0aU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0aU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 0x0bU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0bU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 0x0cU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0cU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 0x0dU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0dU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                           & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                              >> 0x0eU)))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0eU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                if (((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
                     & ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                        >> 0x0000000fU))) {
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
                        = (1U & (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                                    >> 0x0fU)));
                    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
                }
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout)));
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_2 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_1 
           | VL_SHIFTL_III(32,32,32, ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_1, 2U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_11;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[1U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_12;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_43 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_11 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_12);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[2U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_13;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[3U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_14;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_44 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_13 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_14);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[4U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_15;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[5U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_16;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_45 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_15 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_16);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[6U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_17;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[7U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_18;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_46 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_17 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_18);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[8U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_19;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[9U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_20;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_47 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_19 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_20);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000aU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_21;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000bU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_22;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_48 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_21 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_22);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000cU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_23;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000dU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_24;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_49 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_23 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_24);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000eU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_25;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000000fU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_26;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_50 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_25 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_26);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000010U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_27;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000011U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_28;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_51 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_27 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_28);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000012U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_29;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000013U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_30;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_52 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_29 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_30);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000014U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_31;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000015U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_32;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_53 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_31 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_32);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000016U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_33;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000017U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_34;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_54 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_33 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_34);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000018U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_35;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x00000019U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_36;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_55 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_35 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_36);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001aU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_37;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001bU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_38;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_56 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_37 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_38);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001cU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_39;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001dU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_40;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_57 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_39 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_40);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001eU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_41;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x0000001fU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_42;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_58 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_41 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_42);
    vlSelfRef.__PVT__if_stage_i__DOT__instr_out = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr)
                                                    ? 
                                                   (0x0033U 
                                                    | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set) 
                                                        << 0x00000019U) 
                                                       | ((0x01ff8000U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_35) 
                                                              << 0x0000000aU)) 
                                                          | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode) 
                                                             << 0x0000000cU))))
                                                    : vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((((((((2U & ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed) 
                        << 1U)) | (1U & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                 >> 1U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 2U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 3U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 4U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 5U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 6U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 7U)))))) 
             << 0x00000018U) | ((((((2U & ((IData)(
                                                   (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 9U)))) 
                                   << 6U) | (((2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & ((IData)(
                                                     (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                      >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x0000000dU)))) 
                                     << 2U) | ((2U 
                                                & ((IData)(
                                                           (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000000fU)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                 >> 0x00000010U)) << 1U)) 
                 | (1U & (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                  >> 0x00000011U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 0x00000012U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x00000013U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x00000017U)))))) 
             << 8U) | (((((2U & ((IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 0x00000018U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x00000019U)))) 
                         << 6U) | (((2U & ((IData)(
                                                   (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 0x0000001aU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                               >> 0x0000001fU))))))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__0__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__1__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [1U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__2__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [2U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__3__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [3U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__4__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [4U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__5__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [5U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__6__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [6U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__7__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [7U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__8__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [8U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__9__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [9U];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__10__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0aU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__11__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0bU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__12__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0cU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__13__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0dU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__14__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0eU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout)));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__15__KET__ 
        = ((IData)((1U == (5U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
           & ([&]() {
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg 
                    = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                    [0x0fU];
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value = 0U;
                if ((0x00000020U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg))) {
                    vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value 
                        = ((1U & (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg))
                            ? ((1U & (~ ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                         >> 1U))) && 
                               (1U & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                      >> 2U))) : ((1U 
                                                   & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                                         >> 2U))));
                }
                vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout 
                    = vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value;
            }(), (IData)(vlSelfRef.__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout)));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
           & (6U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    id_stage_i__DOT____VdfgRegularize_h5aca553c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i)) 
           & (IData)(vlSelfRef.id_stage_i__DOT____VdfgRegularize_h5aca553c_0_7));
    __VdfgRegularize_h2dc7b7d1_1_16 = ((IData)(vlSelfRef.__PVT__div_sel_ex)
                                        ? vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                        : vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_err_o[0U] 
        = vlSelfRef.__PVT__pmp_req_err[0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_err_o[1U] 
        = vlSelfRef.__PVT__pmp_req_err[1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_err_o[2U] 
        = vlSelfRef.__PVT__pmp_req_err[2U];
    vlSelfRef.if_stage_i__DOT____VdfgRegularize_h3a6f7641_0_2 
        = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
           & ((3U == (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))) 
              & vlSelfRef.__PVT__pmp_req_err[1U]));
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_3 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_2 
           | VL_SHIFTL_III(32,32,32, ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_2, 4U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_43;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[1U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_44;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_59 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_43 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_44);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[2U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_45;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[3U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_46;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_60 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_45 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_46);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[4U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_47;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[5U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_48;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_61 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_47 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_48);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[6U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_49;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[7U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_50;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_62 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_49 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_50);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[8U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_51;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[9U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_52;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_63 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_51 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_52);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000aU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_53;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000bU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_54;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_64 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_53 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_54);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000cU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_55;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000dU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_56;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_65 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_55 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_56);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000eU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_57;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0x0000000fU] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_58;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_66 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_57 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_58);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_o = 
        ((IData)(id_stage_i__DOT____VdfgRegularize_h5aca553c_0_6) 
         & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_o = 
        ((IData)(id_stage_i__DOT____VdfgRegularize_h5aca553c_0_6) 
         & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
        if (vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_o) {
            vlSelfRef.__PVT__rvfi_rs1_data_d = vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_a_i;
            vlSelfRef.__PVT__rvfi_rs1_addr_d = vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o;
        } else {
            vlSelfRef.__PVT__rvfi_rs1_data_d = 0U;
            vlSelfRef.__PVT__rvfi_rs1_addr_d = 0U;
        }
        if (vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_o) {
            vlSelfRef.__PVT__rvfi_rs2_addr_d = (0x0000001fU 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U));
            vlSelfRef.__PVT__rvfi_rs2_data_d = vlSelfRef.__PVT__ex_block_i__DOT__multdiv_operand_b_i;
        } else {
            vlSelfRef.__PVT__rvfi_rs2_addr_d = (0x0000001fU 
                                                & 0U);
            vlSelfRef.__PVT__rvfi_rs2_data_d = 0U;
        }
    } else {
        vlSelfRef.__PVT__rvfi_rs1_data_d = vlSelfRef.__PVT__rvfi_rs1_data_q;
        vlSelfRef.__PVT__rvfi_rs1_addr_d = vlSelfRef.__PVT__rvfi_rs1_addr_q;
        vlSelfRef.__PVT__rvfi_rs2_addr_d = (0x0000001fU 
                                            & (IData)(vlSelfRef.__PVT__rvfi_rs2_addr_q));
        vlSelfRef.__PVT__rvfi_rs2_data_d = vlSelfRef.__PVT__rvfi_rs2_data_q;
    }
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = __VdfgRegularize_h2dc7b7d1_1_16;
    vlSelfRef.__PVT__if_stage_i__DOT__if_instr_err 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o) 
           | (vlSelfRef.__PVT__pmp_req_err[0U] | (IData)(vlSelfRef.if_stage_i__DOT____VdfgRegularize_h3a6f7641_0_2)));
    vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_4 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_3 
           | VL_SHIFTL_III(32,32,32, ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_3, 8U));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[0U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_59;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[1U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_60;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_67 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_59 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_60);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[2U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_61;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[3U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_62;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_68 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_61 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_62);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[4U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_63;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[5U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_64;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_69 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_63 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_64);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[6U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_65;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[7U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_66;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_70 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_65 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_66);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497 = ((~ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result) 
                                                  & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__id_exception_o 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__wb_exception_o)) 
           & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.__PVT__id_stage_i__DOT__stall_ld_hz = 
        ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__outstanding_load_wb_i) 
         & (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_a_wb_match_o) 
             & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_o)) 
            | ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o) 
               & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_o))));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__multdiv_imd_val_d
        [0U];
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__multdiv_imd_val_d
        [1U];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op)
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i
            : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz)
                ? ((~ (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_4 
                       | VL_SHIFTL_III(32,32,32, vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_4, 0x00000010U))) 
                   & (~ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op))
                : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[0U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_67;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[1U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_68;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_71 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_67 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_68);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[2U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_69;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[3U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_70;
    ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_72 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_69 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_70);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result 
        = ((0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
            ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
               | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
            : ((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497
                : ((0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                    ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                       ^ vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
                    : (1U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[1U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[2U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[4U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[6U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[8U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000aU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000bU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000cU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000dU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000eU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000000fU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000010U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000011U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000012U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000013U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000014U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000015U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000016U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000017U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000018U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x00000019U] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001aU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001bU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001cU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001dU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001eU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0000001fU] = 0U;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[1U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 1U)) + (1U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 3U)) + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                  >> 2U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 5U)) + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                  >> 4U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 7U)) + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                  >> 6U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 9U)) + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                  >> 8U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0bU] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x0bU)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x0aU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0dU] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x0dU)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x0cU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0fU] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x0fU)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x0eU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x11U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x11U)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x10U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x13U)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x12U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x15U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x15U)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x14U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x17U)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x16U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x19U] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x19U)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x18U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x1bU)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x1aU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1dU] 
        = (0x0000003fU & ((1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                 >> 0x1dU)) + (1U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x0000003fU & ((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x1fU) + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                              >> 0x1eU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [1U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [3U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [5U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0bU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [9U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0bU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0dU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x11U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x13U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x15U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x19U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1bU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1dU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [3U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0bU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x13U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1bU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1fU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0bU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0bU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x13U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1bU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [3U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [5U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [9U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0dU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0bU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0dU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x11U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x11U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x15U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x13U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x15U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x19U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x19U]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1dU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1bU] + vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1dU]));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0U] 
        = (1U & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[2U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [1U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 2U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[4U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [3U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 4U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[6U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [5U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 6U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[8U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [7U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 8U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0aU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [9U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 0x0aU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0cU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0bU] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x0cU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x0eU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0dU] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x0eU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x10U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x0fU] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x10U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x12U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x11U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x12U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x14U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x13U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x14U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x16U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x15U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x16U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x18U] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x17U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x18U))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1aU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x19U] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x1aU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1cU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1bU] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x1cU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1eU] 
        = (0x0000003fU & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                          [0x1dU] + (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                           >> 0x1eU))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage4[0U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_71;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage4[1U] 
        = ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_72;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
        = (ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_71 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_72);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
        = ((((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                        << 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                          >> 1U)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                    >> 0x0000001fU))))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result 
        = ((0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev
            : ((0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                ? VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev, 1U)
                : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw));
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                    ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                       ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 8U))
                    : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                        ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                           ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 0x00000010U))
                        : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
            if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_h62347566__1) {
                if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:1246: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 1246, "");
                    }
                }
            }
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                    ? 1U : 0U);
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_h62347566__1) {
                        if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:1246: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 1246, "");
                            }
                        }
                    }
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                            ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                               ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 8U))
                            : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                   ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 0x00000010U))
                                : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                            ? 1U : 0U);
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                        if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_h62347566__1) {
                            if (vlSelfRef.ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:1246: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_lockstep.u_ibex_lockstep.u_shadow_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1),
                                                 -12,
                                                 vlSymsp->name());
                                    Verilated::runFlushCallbacks();
                                    VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 1246, "");
                                }
                            }
                        }
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                                ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                   ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 8U))
                                : ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                    ? (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                       ^ VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i, 0x00000010U))
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                            = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                ? 1U : 0U);
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    } else {
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    } else {
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            } else {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                    = ((0U == (0x0000001fU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                        ? ((0x00000020U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
                            : vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]) : (vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                                    [0U] | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                    = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                        ? 1U : 0U);
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = ((0U == (0x0000001fU 
                                       & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                                ? ((0x00000020U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                                   [0U]) : (vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                                            [0U] | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                            = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                ? 1U : 0U);
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    } else {
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = (vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                               [0U] | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result);
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result;
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                            = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                ? 1U : 0U);
                        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((0U == vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
                            : vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]);
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                            ? 1U : 0U);
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                }
            } else {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            }
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((0U == (0x0000001fU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                            ? ((0x00000020U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
                                : vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                               [0U]) : (vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                                        [0U] | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                        = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                            ? 1U : 0U);
                    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                    = ((0U == (0x0000001fU & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                        ? ((0x00000020U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i
                            : vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]) : (vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
                                    [0U] | vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we 
                    = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                        ? 1U : 0U);
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            } else {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            }
        } else {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_we = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.__PVT__ex_block_i__DOT__alu_result 
                                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__alu_result 
            = ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                ? ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                    ? ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result)
                                : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result))
                        : ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_497 
                                       | (((~ ((IData)(0xffffffffU) 
                                               << (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len))) 
                                           & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                          << (0x0000001fU 
                                              & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                 >> 0x00000010U))))
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result))
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result))))
                    : ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                                   [0x1fU]) : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                               [0x1fU])) : ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                 ? 
                                                ((0x26U 
                                                  == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                                  >> 0x0000000fU)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i)))
                                                 : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__pack_result)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                                  ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__pack_result
                                                  : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result)
                                                 : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result))))
                : ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                    ? ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result
                                    : (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                : (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? (IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                    : (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                               >> 1U)))))
                        : ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                           >> 1U)) : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result)
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result)
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result))))
                    : ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result))
                            : vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
                        : ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                            ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                            : ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                : (IData)((vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                           >> 1U)))))));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d
        [0U];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d
        [1U];
    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i) {
        vlSelfRef.__PVT__imd_val_d_ex[0U] = __VdfgRegularize_h2dc7b7d1_1_16;
        vlSelfRef.__PVT__imd_val_d_ex[1U] = (QData)((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    } else {
        vlSelfRef.__PVT__imd_val_d_ex[0U] = (QData)((IData)(
                                                            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d
                                                            [0U]));
        vlSelfRef.__PVT__imd_val_d_ex[1U] = (QData)((IData)(
                                                            vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_d
                                                            [1U]));
    }
    vlSelfRef.__PVT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.__PVT__imd_val_d_ex[0U];
    vlSelfRef.__PVT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.__PVT__imd_val_d_ex[1U];
    vlSelfRef.__PVT__ex_block_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.__PVT__imd_val_d_ex[0U];
    vlSelfRef.__PVT__ex_block_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.__PVT__imd_val_d_ex[1U];
}

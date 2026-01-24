// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp17_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_155))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_157))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_mul___ctor_var_reset(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_b_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16850365506322810530ull);
    vlSelf->chn_b_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162467270669676242ull);
    vlSelf->chn_b_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307224015079505439ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_b_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422829178647546904ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 977535422555755945ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10867421934043910605ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18110263303724974296ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10160255924968387538ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14568272823465489802ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5251887960848607312ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8294523430310641961ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8907274359961865809ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14888266340142974647ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7284647987718628632ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12938074305634326245ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14519134318127564153ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2886100459269596571ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126086354081718105ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5179983211266773222ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17923685388330843462ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10153584291349890004ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13173201516174595578ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665849413087381957ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15042326630793248483ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16944084085185133475ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344106428921406764ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12623170983203081486ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7997170312259633903ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10492456619268756826ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1890718814314167854ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4869729282291339906ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13416132456827497965ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15312774393877462220ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2623012970570762452ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15435293078049457749ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1929044275809779961ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8764169892117832988ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6893214302258265801ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15630559020809506206ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14939866312043462981ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031171947277703276ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7882114379951710354ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7045148819485161780ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674272166060990815ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5444879811624932406ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 988258198452538713ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11236285652526452465ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1020459166431426623ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7726487403385806205ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5998422444810882150ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7678143995323337683ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2912075024910836377ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6120373607280182743ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18153810863489098251ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1082550575202687977ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3328990005984396957ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10975199596859592806ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3516846018808178294ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3630702882745096287ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3283486788232796492ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15398725830581117362ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14994686974551584140ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5971020203214160387ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5219860307075900155ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18421449371498098669ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8355994220888603048ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8358881554677697408ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3315792071307898872ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15154144872911940740ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272316687647923130ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2322167776016511454ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11713693299551461524ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18427148558352441167ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17939358951072517552ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16962599912198673553ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6770868263722522875ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5789392117350070553ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9825364508013415690ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655700212897255637ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568870178541471944ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 486240520391523771ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9404091107138109348ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2200661506809124586ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8967051605144448174ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10627977905721189830ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10110977466569650673ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16035510886287301239ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17893186187747496527ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11332878287208266872ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10482646502272716785ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1377954093301793887ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4442732919833483471ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12233850619379264616ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5235539616284437500ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4302873786979512247ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 560502433362783160ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4242876879459265068ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14405663426210726836ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17355634281831481173ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7741720498519554359ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9482174511259786222ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3473486852936919395ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418559768979983381ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17765943469767348425ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7046884895762790081ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 729570677814721794ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14641800372371380802ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1211091314703603480ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3281597294860126948ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17943538818786748531ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2114904312892954449ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4640176025710221977ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7271430350936295827ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11338951810315108591ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3780759522816969119ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6049847015370134489ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422436755810780707ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2089671389310179457ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9208584826223823912ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4998620089587185040ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15949659960414989765ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17463715133080512717ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1220220048723039274ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14538356239003343503ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14014659248586055258ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7052427878651681811ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10631613216433466295ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3613878383130289844ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694214606225414720ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461130634442375911ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3869273947888423580ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17022054112645547206ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7024712820516938638ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15507049644673188085ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15763275662623042661ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9536933188669655836ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4334108967875815795ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10762139257172705805ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16784690328103191035ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17335596495323861274ull);
    vlSelf->HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15444098369098447068ull);
    vlSelf->HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7574580702164049028ull);
    vlSelf->HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6020203572824981101ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8158570954880168538ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12276333131670519048ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15101513881793015224ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8077955994288047840ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10012248940515259257ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 400732327899635770ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9875520406517404352ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14755682890133625404ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17277639406429365183ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1238930429612363171ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1733969813345749402ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5060708390654672097ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 498778790192375870ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288563166380651374ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15179535318403631259ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15098174995538940250ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 875403022679633885ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16485645147126740546ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13106480164807492100ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8595636103113458825ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16681825858422046125ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9714139678086100764ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8622119724481566777ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5672502386085600005ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17602794370129449844ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 682410727826525797ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6501501070025280527ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805463731093051698ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5172313499007953393ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16030462464418662601ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419564288334154775ull);
    vlSelf->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2449989579608541456ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__8__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 322648811086771189ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__8__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9180579080021320907ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__9__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6837998073964003736ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__9__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10800172430116112009ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__10__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5596761745004695766ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__10__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13433667843377499445ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__11__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11911538092898764813ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__11__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14341606396278723830ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__14__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15619705363379957039ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__14__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17957565681866182402ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__15__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15861897422160853583ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__15__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4401758038210337723ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__16__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18243503998702569573ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__16__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15547412952346608935ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__36__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7198025270597092969ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__36__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3222764805852170162ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__39__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13055361524492472594ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__39__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4698094843149265897ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__39__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15865077749235643431ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__40__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17907007892127696216ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__40__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6736912039696463956ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__40__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7213983650710008760ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__73__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 37586612798577516ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__73__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7331467635872739237ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__74__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3350912730896861024ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__74__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2172332197858353388ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__75__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10043015405459505562ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__75__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3107312223239463906ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__76__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15093932581187758556ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__76__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9760137710873002291ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__79__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4558209243464166707ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__79__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16907825756716124200ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__80__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17811687426636022050ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__80__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11535879823068998158ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__81__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5658702537767690412ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__81__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5058295099417865103ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__101__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13725990769607689870ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__101__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14005700593115487684ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14162078166929529293ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__104__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10695506189192715743ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__104__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3521198183875517584ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__105__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 989997134733304350ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__105__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1894121378056691394ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__105__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096945669896956738ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__138__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17884541089864330266ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__138__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17570114650495482097ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__139__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6636468389366411240ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__139__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5410651241035274583ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__140__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 111848459763067617ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__140__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14005065292595212703ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__141__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5657630145098869259ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__141__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13772779465526880204ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__144__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10095723522106274269ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__144__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12344585082434300508ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__145__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11281506417325245209ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__145__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13334275791429474586ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__146__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9280661189718247413ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__146__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4872445509296019228ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__166__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13009010519405448450ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__166__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10730633299693037727ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4941302844609892910ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__169__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3900681369315566844ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__169__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9510120557864530817ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__170__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3876178642824139808ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__170__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17271956251076405143ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__170__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9085429246971755007ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__203__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13855369463430685659ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__203__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 699354145799872992ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__204__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1465976254706786941ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__204__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9391738048013959375ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__205__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 42968602491476174ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__205__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7569442441200217355ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__206__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10415288876908392632ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__206__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13196930909223383167ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__209__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14620681462225458417ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__209__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10775463132837370127ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__210__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14262048529596432165ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__210__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11354229915066046854ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__211__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18382748561601346999ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__211__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3856053605920055755ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__231__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14821821510816487018ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__231__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11753820461956046323ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7676478701491638223ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__234__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18299369237522125600ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__234__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13635331648080194192ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3240633561841722448ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__235__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9107497213716976487ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__235__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5725681102790642022ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__268__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4064909747674711888ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__268__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2187925710459638872ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__269__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8910515492704343968ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__269__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14415000159201614569ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__270__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3217929235206377788ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__270__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1808015621175241219ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__271__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2669150657916800580ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__271__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4263909296686643681ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__274__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4377567623831384023ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__274__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2750445789174394123ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__275__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15917523974204068636ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__275__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11743972026888256018ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__276__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13947010185369272284ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__276__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3837362257374986256ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__296__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11591375542001013243ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__296__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1757142079003313489ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__299__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10437832753765436508ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__299__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13796369622864068679ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__299__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 483226563033526417ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__300__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14908809623656278609ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__300__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2942022418957465542ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__300__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16883211245927298006ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14143225577650958448ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__333__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7776448649915005101ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14989343897863586793ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__334__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11621206230615547112ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4001577678513865839ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__335__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15138747585347503408ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6195801205847248838ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__336__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 779588336689217705ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3887368591349312044ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__339__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14777328836581809218ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18346955848728463832ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__340__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16047190435451445374ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6069576244752393889ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__341__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11524829269884432090ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7646412985916850659ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__361__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9380284024302002788ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8365681432209733451ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5911093847326406589ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__364__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7465224681306616615ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8807594687628389837ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 150449706590392121ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__365__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15258942028193785246ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15870070402637585822ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__398__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5391344298629099069ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13980109648808621851ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__399__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8166666245552527846ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5601306729133529812ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__400__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11678928501238450705ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 324504531947750796ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__401__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6391294598395467798ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2644062148586337101ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__404__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17815462947841883117ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14090264832940532028ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__405__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8177690104910447655ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11124729885894002415ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__406__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4772236415691297187ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11906984251859278361ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__426__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 151771017032225924ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14833710043785057161ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7485506442261685320ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__429__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12136386708363512967ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16090175644124413952ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12672000894840657597ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__430__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2621484726218581084ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12730721707193408759ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__463__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17588769159367540622ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1304472257779913307ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__464__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6013991066690459805ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10001042064462637737ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__465__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15357547744265217918ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11339162536919919112ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__466__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13766673437405740344ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10261927272859742883ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__469__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16673826265663133335ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12625783273322465241ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__470__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6863157529086344957ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 858588754435401354ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__471__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5725251858577739777ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10034063234300560285ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__491__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8657280645221258128ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6643714265346661771ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11176016938799366574ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__494__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3798231683768814149ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1301948184378006529ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12731909287383826194ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__495__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1150802478344963329ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11901447756337515497ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__528__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6079917892657350009ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10025041725405147593ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__529__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5378648174514626884ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17798780199795714179ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__530__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13664146459903493844ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3515077696276630204ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__531__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13435632419832139277ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11627934765534033011ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__534__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1112945703866659218ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 740270561823978012ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__535__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5323195951217479056ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13118321747999117105ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__536__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2217429077576341263ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18331055177673504855ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__556__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6917122842023281017ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9006098597975574150ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15095178959489580918ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__559__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16122737021923919542ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15643585442983516801ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13006240124404298661ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__560__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837134358410543171ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6577549834344247785ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__593__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6891106957359376436ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1544646162740439629ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__594__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6767877861945983544ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16572786220551398531ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__595__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11619186111960926448ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10814789126250395250ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__596__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18443067726620611202ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1572190712796651300ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__599__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 311072749843310988ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9943971442670603537ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__600__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 84199285398513793ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 463381171203004413ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__601__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3477456868613167820ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12484438334497965984ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__621__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9564888338569378222ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14681395939633180927ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4570118152564490651ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__624__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3678192749824481529ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2354538695532805109ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9321481063407979080ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__625__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16584573330566873723ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15063943303153969313ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17009024674191294191ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9424682227507806843ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10747626707428521801ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18406997311045994270ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14345204986629144784ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13245569503952338530ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1368415670250439226ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7000085483613102310ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9515980566605488869ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7941529391784342998ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17661508548155787550ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18259784125166541041ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4992169855359431820ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6102012526763315347ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5814360328781234217ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 364912810190133038ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9171586959406735047ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15948507683819160567ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14274787510530004186ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18076960264423008814ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13626909808567207610ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6930685251663073380ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10126633870916052858ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11481716324002285994ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14030788396338415082ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 168897936862272990ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6032233181867138250ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7336261612563754370ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5567168690729388974ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15268756734513122287ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4646695683471706180ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7389589885944516839ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4423605881292460711ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7042151188432926664ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1207298726708080993ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3108363704417855272ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334043438114267439ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18048642907451171763ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 489119421208519588ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14358161147239978238ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1981086896275745774ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12047741744972958128ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15594986923326768793ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4190951548000416130ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11304354780103933157ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15907207718732967605ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14006641954184310143ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11944955382861568810ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9272048238793086493ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9571039421798857297ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13652585086008852629ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10967209397500815091ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2420247082050744640ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16130458465714603520ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2311093624896792588ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10043512374379741184ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10903899523952613873ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8154071759026158028ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5657019242392549791ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6503587812679880815ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3601059840050888386ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14124875456384719743ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3440295694085861706ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 482009134097282733ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13510883607918345720ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14473439076228454764ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13047264872092244726ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18206225555135918507ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17671351303653464383ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13277038623349368510ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16203252508316290066ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12769122449808954142ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2152238419451470998ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12432540901441125140ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2646644354938373401ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7484971059181163632ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16925365212289869624ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4672576537366526336ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13590192433030078175ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 65228120149273404ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17560006319507862663ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8006365246216122988ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5745786741672083021ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13016178581662300296ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 742783740243836620ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15191313324858067819ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7736176965951163161ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6161163878651994126ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9158502067991471374ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9914884022163111769ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10396340108542289300ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9646453706897793837ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17546450851128529052ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4104975821417685440ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9946914104536636488ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16181450317265274455ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16268422141242905348ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2209675756218401890ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5396449516890852318ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6829080686271376342ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 240947166283593619ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3508398463263029339ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4974301630187156274ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2704770779679611032ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17266317926680953485ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17253792861797196505ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15892180961642570403ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1884006516421224520ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15952834764786930737ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13695829343933672378ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6178869839087739204ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 601065872020540482ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 327248277277978369ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18124918601408064110ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 883029077753660653ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17104058464824318369ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15212561956255696731ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9880260351651561909ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9520112878463918085ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10547293607101446409ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7392181303177039438ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3821214901732399711ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4799190359068831542ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14827513676212908209ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1912512994303218133ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5453684800035601065ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14392805067944282299ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12816349584283764002ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17100109410371618460ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6518639782442141499ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17530076164635177382ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11549996383708498203ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6001451364981756377ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13226570947207981976ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16391159044518217826ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6485528312790391571ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 587605585559141759ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14455751521095096489ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12636175634839062975ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8692131922530599173ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7015260053132816090ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15398041278644223940ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1719951108815934076ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6101963742216701090ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3510706016381470778ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18340350247579599288ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602849004358266202ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14805815265796881239ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3373047251427100454ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5653790594043601157ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5015393352633384242ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4448372442296402616ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4747371005021784256ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5473585604257882146ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1944232577726678897ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6583527201580776352ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5164369910237066919ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3732041918145843304ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12712414308552868755ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1368234385639507865ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9633359956498464222ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15702632738750692904ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14046470105669395124ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10599750788374085300ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4061460974513176847ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9829995245014014906ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2172085749566726097ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6893251908684400370ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14113402779512031881ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13470537739147569480ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16595854909248329369ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1046756992719052995ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5713564655851945927ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18333944586069347671ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1779767405347460655ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7632445235855097215ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14338808915358934572ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7532976883024526438ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3845770644150028174ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6452142429853639735ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4228146891043031463ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14206999362520962362ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11928851854534448878ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4290128416014952016ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8074858863877160166ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1041917153858160056ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7091301031712785797ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14450402196816889090ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12111574353024606820ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3503612457475930164ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13483806753943636285ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3528392656943737810ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 762232813963125005ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6106957912046705315ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4304388181133342418ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13116511214746539958ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5735956793066862527ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7000528452886632337ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9625534212725238251ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9287375686382650799ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17209339043605224609ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13988408980874692642ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17205078943803757785ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3508927071706744908ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 205571225224013775ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1804957454426848500ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16031670675237181362ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16392490832341049753ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8974994624762503738ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14601352822544090973ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14211490740141911694ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1567691111190140019ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15270295938762212983ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16196211129211226215ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3985083507209718248ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10267765406871940315ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12844567648680956809ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15524026290442472294ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5520956421615590248ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8438003533318673088ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12272953113835041798ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7242297600052634467ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7076046764788695481ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 686763309312742092ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4280461475735722320ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15636752531418393940ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18326048108738778174ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4215689912234125414ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13666260198079243011ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17036536934245110728ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8687478614361516221ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4241820312117362445ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 926008511602090016ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9753327266254994215ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8327514403203657870ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17052407489084942805ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15549785722741007631ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15548343335237459551ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17641386034560191657ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__input_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8136912854407825456ull);
    vlSelf->__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16288433288876396301ull);
}

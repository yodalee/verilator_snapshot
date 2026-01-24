// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__118(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__118\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<24>/*767:0*/ __Vtemp_33;
    VlWide<24>/*767:0*/ __Vtemp_66;
    // Body
    __Vtemp_33[2U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                           >> 1U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                               >> 1U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[2U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                             >> 1U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                                >> 1U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[2U]));
    __Vtemp_33[5U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                           >> 3U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                               >> 3U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[5U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                             >> 3U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                                >> 3U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[5U]));
    __Vtemp_33[8U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                           >> 5U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                               >> 5U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[8U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                             >> 5U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                                >> 5U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[8U]));
    __Vtemp_33[0x0000000bU] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 7U))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 7U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000bU]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 7U))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 7U)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000bU]));
    __Vtemp_33[0x0000000eU] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 9U))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 9U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000eU]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 9U))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 9U)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000eU]));
    __Vtemp_33[0x00000011U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000bU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000bU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000011U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000bU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000bU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000011U]));
    __Vtemp_33[0x00000014U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000dU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000dU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000014U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000dU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000dU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000014U]));
    __Vtemp_33[0x00000017U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000fU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000fU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000017U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000fU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000fU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000017U]));
    __Vtemp_66[2U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                           >> 1U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                               >> 1U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[2U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                             >> 1U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                                >> 1U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[2U]));
    __Vtemp_66[5U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                           >> 3U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                               >> 3U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[5U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                             >> 3U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                                >> 3U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[5U]));
    __Vtemp_66[8U] = (((((IData)((0x0000ffffffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                           >> 5U))))))) 
                         >> 0x00000010U) | ((IData)(
                                                    ((0x0000ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                               >> 5U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[8U]) 
                      | ((((IData)((0x0000ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                             >> 5U))))))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                                >> 5U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[8U]));
    __Vtemp_66[0x0000000bU] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                    >> 7U))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                     >> 7U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000bU]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                      >> 7U))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 7U)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000bU]));
    __Vtemp_66[0x0000000eU] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                    >> 9U))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                     >> 9U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000eU]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                      >> 9U))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 9U)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000eU]));
    __Vtemp_66[0x00000011U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                    >> 0x0000000bU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                     >> 0x0000000bU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000011U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                      >> 0x0000000bU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000bU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000011U]));
    __Vtemp_66[0x00000014U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                    >> 0x0000000dU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                     >> 0x0000000dU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000014U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                      >> 0x0000000dU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000dU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000014U]));
    __Vtemp_66[0x00000017U] = (((((IData)((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                    >> 0x0000000fU))))))) 
                                  >> 0x00000010U) | 
                                 ((IData)(((0x0000ffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                     >> 0x0000000fU)))))) 
                                           >> 0x00000020U)) 
                                  << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000017U]) 
                               | ((((IData)((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                      >> 0x0000000fU))))))) 
                                    >> 0x00000010U) 
                                   | ((IData)(((0x0000ffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000fU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000017U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[1U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 1U))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[1U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 1U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[1U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 1U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[1U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 1U))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[2U] 
        = (__Vtemp_33[2U] | __Vtemp_66[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[3U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 2U))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[3U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 2U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[3U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 2U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[3U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 2U))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[3U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[4U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 3U))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 2U)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[4U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 3U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 2U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[4U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 3U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 2U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[4U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 3U))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 2U)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[5U] 
        = (__Vtemp_33[5U] | __Vtemp_66[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[6U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 4U))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[6U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 4U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[6U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 4U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[6U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 4U))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[6U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[7U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 5U))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 4U)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[7U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 5U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 4U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[7U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 5U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 4U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[7U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 5U))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 4U)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[7U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[8U] 
        = (__Vtemp_33[8U] | __Vtemp_66[8U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[9U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 6U))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[9U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 6U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[9U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 6U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[9U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 6U))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[9U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000aU] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 7U))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 6U)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000aU]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 7U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 6U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000aU])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 7U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 6U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000aU]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 7U))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 6U)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000bU] 
        = (__Vtemp_33[0x0000000bU] | __Vtemp_66[0x0000000bU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000cU] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 8U))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000cU]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 8U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000cU])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 8U))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000cU]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 8U))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000dU] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 9U))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 8U)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000dU]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 9U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000dU])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 9U))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000dU]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 9U))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 8U)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000eU] 
        = (__Vtemp_33[0x0000000eU] | __Vtemp_66[0x0000000eU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x0000000fU] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000aU))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000fU]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 0x0000000aU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000fU])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 0x0000000aU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000fU]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000aU))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000010U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 0x0000000bU))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000aU)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000010U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000bU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000aU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000010U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 0x0000000bU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 0x0000000aU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000010U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 0x0000000bU))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 0x0000000aU)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000010U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000011U] 
        = (__Vtemp_33[0x00000011U] | __Vtemp_66[0x00000011U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000012U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000cU))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000012U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 0x0000000cU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000012U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 0x0000000cU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000012U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000cU))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000012U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000013U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 0x0000000dU))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000cU)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000013U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000dU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000cU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000013U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 0x0000000dU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 0x0000000cU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000013U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 0x0000000dU))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 0x0000000cU)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000013U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000014U] 
        = (__Vtemp_33[0x00000014U] | __Vtemp_66[0x00000014U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000015U] 
        = ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                     >> 0x0000000eU))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000015U]) 
            | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                       >> 0x0000000eU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000015U])) 
           | (((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                       >> 0x0000000eU))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000015U]) 
              | ((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                         >> 0x0000000eU))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000015U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000016U] 
        = ((((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                       >> 0x0000000fU))))))) 
               << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0) 
                                                                    >> 0x0000000eU)))))) 
                                          >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000016U]) 
            | ((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                         >> 0x0000000fU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1) 
                                                                      >> 0x0000000eU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000016U])) 
           | (((((IData)((0x0000ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                         >> 0x0000000fU))))))) 
                 << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2) 
                                                                      >> 0x0000000eU)))))) 
                                            >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000016U]) 
              | ((((IData)((0x0000ffffffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                   >> 0x0000000fU))))))) 
                   << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3) 
                                                                        >> 0x0000000eU)))))) 
                                              >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000016U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_0_sft[0x00000017U] 
        = (__Vtemp_33[0x00000017U] | __Vtemp_66[0x00000017U]);
}

void Vsim___024root___nba_comb__TOP__119(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__119\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[7U];
}

void Vsim___024root___nba_comb__TOP__120(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__120\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000011U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000012U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000013U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000014U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000015U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000016U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000017U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[5U];
}

void Vsim___024root___nba_comb__TOP__121(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__121\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000011U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000012U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000013U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000014U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000015U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000016U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000017U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[5U];
}

void Vsim___024root___nba_comb__TOP__122(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__122\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000011U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000012U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000013U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000014U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000015U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000016U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000017U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[5U];
}

void Vsim___024root___nba_comb__TOP__123(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__123\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000011U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__r_nv_ram_rws_32x768__DOT__ram_Inst_32X288_0_288.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000012U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000013U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000014U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000015U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000016U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000017U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[5U];
}

void Vsim___024root___nba_comb__TOP__124(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__124\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[7U];
}

void Vsim___024root___nba_comb__TOP__125(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__125\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_79 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_78 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_77 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_76 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_75 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_74 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_73 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_72 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_71 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_70 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_69 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_68 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_67 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_66 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_65 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65.out_partial_data);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_wr_elem_64 
        = ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64.out_partial_valid))) 
           & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64.out_partial_data);
}

void Vsim___024root___nba_comb__TOP__126(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__126\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[0U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31.out_final_sat) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30.out_final_sat) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29.out_final_sat) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28.out_final_sat))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27.out_final_sat) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26.out_final_sat) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25.out_final_sat) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24.out_final_sat))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20.out_final_sat))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19.out_final_sat) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18.out_final_sat) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17.out_final_sat) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16.out_final_sat))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12.out_final_sat))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8.out_final_sat))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7.out_final_sat) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6.out_final_sat) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5.out_final_sat) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4.out_final_sat))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0.out_final_sat))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[1U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63.out_final_sat) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62.out_final_sat) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61.out_final_sat) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60.out_final_sat))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59.out_final_sat) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58.out_final_sat) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57.out_final_sat) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56.out_final_sat))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52.out_final_sat))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51.out_final_sat) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50.out_final_sat) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49.out_final_sat) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48.out_final_sat))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44.out_final_sat))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40.out_final_sat))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39.out_final_sat) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38.out_final_sat) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37.out_final_sat) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36.out_final_sat))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32.out_final_sat))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[2U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95.out_final_sat) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94.out_final_sat) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93.out_final_sat) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92.out_final_sat))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91.out_final_sat) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90.out_final_sat) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89.out_final_sat) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88.out_final_sat))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84.out_final_sat))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83.out_final_sat) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82.out_final_sat) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81.out_final_sat) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80.out_final_sat))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76.out_final_sat))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72.out_final_sat))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71.out_final_sat) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70.out_final_sat) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69.out_final_sat) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68.out_final_sat))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64.out_final_sat))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[3U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127.out_final_sat) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126.out_final_sat) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125.out_final_sat) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124.out_final_sat))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123.out_final_sat) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122.out_final_sat) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121.out_final_sat) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120.out_final_sat))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116.out_final_sat))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115.out_final_sat) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114.out_final_sat) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113.out_final_sat) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112.out_final_sat))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108.out_final_sat))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107.out_final_sat) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106.out_final_sat) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105.out_final_sat) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104.out_final_sat))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103.out_final_sat) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102.out_final_sat) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101.out_final_sat) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100.out_final_sat))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99.out_final_sat) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98.out_final_sat) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97.out_final_sat) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96.out_final_sat))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_pout_int_vld[0U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31.out_partial_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30.out_partial_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29.out_partial_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28.out_partial_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27.out_partial_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26.out_partial_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25.out_partial_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24.out_partial_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20.out_partial_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19.out_partial_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18.out_partial_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17.out_partial_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16.out_partial_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12.out_partial_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8.out_partial_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7.out_partial_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6.out_partial_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5.out_partial_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4.out_partial_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0.out_partial_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_pout_int_vld[1U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63.out_partial_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62.out_partial_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61.out_partial_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60.out_partial_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59.out_partial_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58.out_partial_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57.out_partial_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56.out_partial_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52.out_partial_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51.out_partial_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50.out_partial_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49.out_partial_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48.out_partial_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44.out_partial_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40.out_partial_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39.out_partial_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38.out_partial_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37.out_partial_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36.out_partial_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32.out_partial_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_pout_int_vld[2U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95.out_partial_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94.out_partial_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93.out_partial_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92.out_partial_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91.out_partial_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90.out_partial_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89.out_partial_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88.out_partial_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84.out_partial_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83.out_partial_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82.out_partial_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81.out_partial_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80.out_partial_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76.out_partial_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72.out_partial_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71.out_partial_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70.out_partial_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69.out_partial_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68.out_partial_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64.out_partial_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_pout_int_vld[3U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127.out_partial_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126.out_partial_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125.out_partial_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124.out_partial_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123.out_partial_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122.out_partial_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121.out_partial_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120.out_partial_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116.out_partial_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115.out_partial_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114.out_partial_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113.out_partial_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112.out_partial_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108.out_partial_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107.out_partial_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106.out_partial_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105.out_partial_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104.out_partial_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103.out_partial_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102.out_partial_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101.out_partial_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100.out_partial_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99.out_partial_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98.out_partial_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97.out_partial_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96.out_partial_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_vld[0U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_31.out_final_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_30.out_final_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_29.out_final_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_28.out_final_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_27.out_final_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_26.out_final_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_25.out_final_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_24.out_final_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_23.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_22.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_21.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_20.out_final_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_19.out_final_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_18.out_final_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_17.out_final_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_16.out_final_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_15.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_14.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_13.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_12.out_final_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_11.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_10.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_9.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_8.out_final_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_7.out_final_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_6.out_final_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_5.out_final_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_4.out_final_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_3.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_2.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_1.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_0.out_final_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_vld[1U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_63.out_final_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_62.out_final_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_61.out_final_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_60.out_final_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_59.out_final_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_58.out_final_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_57.out_final_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_56.out_final_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_55.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_54.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_53.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_52.out_final_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_51.out_final_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_50.out_final_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_49.out_final_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_48.out_final_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_47.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_46.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_45.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_44.out_final_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_43.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_42.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_41.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_40.out_final_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_39.out_final_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_38.out_final_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_37.out_final_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_36.out_final_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_35.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_34.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_33.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_32.out_final_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_vld[2U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_95.out_final_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_94.out_final_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_93.out_final_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_92.out_final_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_91.out_final_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_90.out_final_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_89.out_final_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_88.out_final_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_87.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_86.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_85.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_84.out_final_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_83.out_final_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_82.out_final_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_81.out_final_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_80.out_final_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_79.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_78.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_77.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_76.out_final_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_75.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_74.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_73.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_72.out_final_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_71.out_final_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_70.out_final_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_69.out_final_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_68.out_final_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_67.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_66.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_65.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_64.out_final_valid))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_vld[3U] 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_127.out_final_valid) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_126.out_final_valid) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_125.out_final_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_124.out_final_valid))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_123.out_final_valid) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_122.out_final_valid) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_121.out_final_valid) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_120.out_final_valid))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_119.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_118.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_117.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_116.out_final_valid))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_115.out_final_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_114.out_final_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_113.out_final_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_112.out_final_valid))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_111.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_110.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_109.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_108.out_final_valid))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_107.out_final_valid) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_106.out_final_valid) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_105.out_final_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_104.out_final_valid))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_103.out_final_valid) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_102.out_final_valid) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_101.out_final_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_100.out_final_valid))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_99.out_final_valid) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_98.out_final_valid) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_97.out_final_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_int_96.out_final_valid))))));
}

void Vsim___024root___nba_sequent__TOP__1088(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1088\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pd 
                = (0x7fffffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2wl_pd 
                = (0x0003ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_data);
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2wl_pd = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready));
}

void Vsim___024root___nba_comb__TOP__127(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__127\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_70;
    VlWide<32>/*1023:0*/ __Vtemp_76;
    VlWide<32>/*1023:0*/ __Vtemp_143;
    VlWide<32>/*1023:0*/ __Vtemp_149;
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_225 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_dla_clk_ovr_on_core_sync__DOT__sync_sbus) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_sbus));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[1U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[2U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[3U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[4U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[5U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[6U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[6U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[7U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[7U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[8U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[8U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[9U] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[9U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000aU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000aU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000bU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000bU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000cU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000cU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000dU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000dU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000eU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000eU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000000fU] 
        = ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3)))) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000fU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000010U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000010U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000011U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000011U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000012U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000012U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000013U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000013U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000014U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000014U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000015U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000015U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000016U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000016U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000017U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000017U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000018U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000018U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x00000019U] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000019U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001aU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001aU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001bU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001bU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001cU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001cU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001dU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001dU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001eU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001eU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d4_w[0x0000001fU] 
        = ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                     >> 1U))))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001fU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_add 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_vld)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_size)
            : 0U);
    __Vtemp_70[0U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0U]))))));
    __Vtemp_70[1U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[1U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[1U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[1U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[1U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[1U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[1U]))))));
    __Vtemp_70[2U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[2U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[2U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[2U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[2U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[2U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[2U]))))));
    __Vtemp_70[3U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[3U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[3U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[3U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[3U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[3U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[3U]))))));
    __Vtemp_70[4U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[4U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[4U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[4U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[4U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[4U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[4U]))))));
    __Vtemp_70[5U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[5U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[5U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[5U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[5U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[5U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[5U]))))));
    __Vtemp_70[6U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[6U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[6U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[6U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[6U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[6U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[6U]))))));
    __Vtemp_70[7U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[7U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[7U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[7U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[7U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[7U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[7U]))))));
    __Vtemp_70[8U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[8U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[8U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[8U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[8U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[8U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[8U]))))));
    __Vtemp_70[9U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x0000002aU))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[9U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000028U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[9U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000026U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[9U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000024U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[9U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000022U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[9U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                            >> 0x00000020U))))) 
                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[9U]))))));
    __Vtemp_70[0x0000000aU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000aU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000aU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000aU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000aU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000aU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000aU]))))));
    __Vtemp_70[0x0000000bU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000bU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000bU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000bU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000bU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000bU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000bU]))))));
    __Vtemp_70[0x0000000cU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000cU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000cU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000cU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000cU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000cU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000cU]))))));
    __Vtemp_70[0x0000000dU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000dU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000dU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000dU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000dU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000dU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000dU]))))));
    __Vtemp_70[0x0000000eU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000eU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000eU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000eU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000eU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000eU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000eU]))))));
    __Vtemp_70[0x0000000fU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002aU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000fU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000028U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000fU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000026U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000fU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000024U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000fU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000022U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000fU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000020U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000fU]))))));
    __Vtemp_70[0x00000010U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000010U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000010U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000010U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000010U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000010U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000010U]))))));
    __Vtemp_70[0x00000011U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000011U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000011U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000011U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000011U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000011U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000011U]))))));
    __Vtemp_70[0x00000012U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000012U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000012U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000012U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000012U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000012U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000012U]))))));
    __Vtemp_70[0x00000013U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000013U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000013U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000013U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000013U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000013U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000013U]))))));
    __Vtemp_70[0x00000014U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000014U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000014U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000014U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000014U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000014U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000014U]))))));
    __Vtemp_70[0x00000015U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000015U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000015U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000015U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000015U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000015U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000015U]))))));
    __Vtemp_70[0x00000016U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000016U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000016U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000016U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000016U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000016U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000016U]))))));
    __Vtemp_70[0x00000017U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000017U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000017U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000017U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000017U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000017U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000017U]))))));
    __Vtemp_70[0x00000018U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000018U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000018U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000018U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000018U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000018U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000018U]))))));
    __Vtemp_70[0x00000019U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000019U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000019U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000019U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000019U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000019U]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000019U]))))));
    __Vtemp_70[0x0000001aU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001aU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001aU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001aU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001aU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001aU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001aU]))))));
    __Vtemp_70[0x0000001bU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001bU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001bU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001bU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001bU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001bU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001bU]))))));
    __Vtemp_70[0x0000001cU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001cU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001cU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001cU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001cU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001cU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001cU]))))));
    __Vtemp_70[0x0000001dU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001dU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001dU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001dU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001dU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001dU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001dU]))))));
    __Vtemp_70[0x0000001eU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001eU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001eU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001eU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001eU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001eU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001eU]))))));
    __Vtemp_70[0x0000001fU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x0000002bU))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001fU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000029U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001fU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000027U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001fU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000025U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001fU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x00000023U))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001fU]) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                     >> 0x00000021U))))) 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001fU]))))));
    __Vtemp_76[0U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0U]) 
                                     | __Vtemp_70[0U]))))));
    __Vtemp_76[1U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[1U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[1U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[1U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[1U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[1U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[1U]) 
                                     | __Vtemp_70[1U]))))));
    __Vtemp_76[2U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[2U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[2U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[2U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[2U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[2U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[2U]) 
                                     | __Vtemp_70[2U]))))));
    __Vtemp_76[3U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[3U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[3U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[3U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[3U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[3U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[3U]) 
                                     | __Vtemp_70[3U]))))));
    __Vtemp_76[4U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[4U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[4U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[4U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[4U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[4U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[4U]) 
                                     | __Vtemp_70[4U]))))));
    __Vtemp_76[5U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[5U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[5U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[5U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[5U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[5U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[5U]) 
                                     | __Vtemp_70[5U]))))));
    __Vtemp_76[6U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[6U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[6U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[6U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[6U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[6U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[6U]) 
                                     | __Vtemp_70[6U]))))));
    __Vtemp_76[7U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[7U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[7U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[7U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[7U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[7U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[7U]) 
                                     | __Vtemp_70[7U]))))));
    __Vtemp_76[8U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[8U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[8U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[8U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[8U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[8U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[8U]) 
                                     | __Vtemp_70[8U]))))));
    __Vtemp_76[9U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                 >> 0x00000036U))))) 
                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[9U]) 
                      | (((- (IData)((1U & (IData)(
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                    >> 0x00000034U))))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[9U]) 
                         | (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                       >> 0x00000032U))))) 
                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[9U]) 
                            | (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000030U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[9U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002eU))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[9U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x0000002cU))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[9U]) 
                                     | __Vtemp_70[9U]))))));
    __Vtemp_76[0x0000000aU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000aU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000aU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000aU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000aU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000aU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000aU]) 
                                              | __Vtemp_70[0x0000000aU]))))));
    __Vtemp_76[0x0000000bU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000bU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000bU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000bU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000bU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000bU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000bU]) 
                                              | __Vtemp_70[0x0000000bU]))))));
    __Vtemp_76[0x0000000cU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000cU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000cU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000cU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000cU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000cU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000cU]) 
                                              | __Vtemp_70[0x0000000cU]))))));
    __Vtemp_76[0x0000000dU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000dU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000dU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000dU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000dU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000dU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000dU]) 
                                              | __Vtemp_70[0x0000000dU]))))));
    __Vtemp_76[0x0000000eU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000eU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000eU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000eU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000eU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000eU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000eU]) 
                                              | __Vtemp_70[0x0000000eU]))))));
    __Vtemp_76[0x0000000fU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000036U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000fU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000034U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000fU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000032U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000fU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000030U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000fU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002eU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000fU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002cU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000fU]) 
                                              | __Vtemp_70[0x0000000fU]))))));
    __Vtemp_76[0x00000010U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000010U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000010U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000010U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000010U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000010U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000010U]) 
                                              | __Vtemp_70[0x00000010U]))))));
    __Vtemp_76[0x00000011U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000011U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000011U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000011U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000011U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000011U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000011U]) 
                                              | __Vtemp_70[0x00000011U]))))));
    __Vtemp_76[0x00000012U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000012U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000012U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000012U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000012U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000012U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000012U]) 
                                              | __Vtemp_70[0x00000012U]))))));
    __Vtemp_76[0x00000013U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000013U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000013U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000013U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000013U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000013U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000013U]) 
                                              | __Vtemp_70[0x00000013U]))))));
    __Vtemp_76[0x00000014U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000014U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000014U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000014U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000014U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000014U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000014U]) 
                                              | __Vtemp_70[0x00000014U]))))));
    __Vtemp_76[0x00000015U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000015U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000015U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000015U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000015U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000015U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000015U]) 
                                              | __Vtemp_70[0x00000015U]))))));
    __Vtemp_76[0x00000016U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000016U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000016U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000016U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000016U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000016U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000016U]) 
                                              | __Vtemp_70[0x00000016U]))))));
    __Vtemp_76[0x00000017U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000017U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000017U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000017U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000017U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000017U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000017U]) 
                                              | __Vtemp_70[0x00000017U]))))));
    __Vtemp_76[0x00000018U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000018U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000018U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000018U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000018U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000018U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000018U]) 
                                              | __Vtemp_70[0x00000018U]))))));
    __Vtemp_76[0x00000019U] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000019U]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000019U]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000019U]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000019U]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000019U]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000019U]) 
                                              | __Vtemp_70[0x00000019U]))))));
    __Vtemp_76[0x0000001aU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001aU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001aU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001aU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001aU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001aU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001aU]) 
                                              | __Vtemp_70[0x0000001aU]))))));
    __Vtemp_76[0x0000001bU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001bU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001bU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001bU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001bU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001bU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001bU]) 
                                              | __Vtemp_70[0x0000001bU]))))));
    __Vtemp_76[0x0000001cU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001cU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001cU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001cU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001cU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001cU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001cU]) 
                                              | __Vtemp_70[0x0000001cU]))))));
    __Vtemp_76[0x0000001dU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001dU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001dU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001dU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001dU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001dU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001dU]) 
                                              | __Vtemp_70[0x0000001dU]))))));
    __Vtemp_76[0x0000001eU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001eU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001eU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001eU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001eU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001eU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001eU]) 
                                              | __Vtemp_70[0x0000001eU]))))));
    __Vtemp_76[0x0000001fU] = (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                          >> 0x00000037U))))) 
                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001fU]) 
                               | (((- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000035U))))) 
                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001fU]) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 0x00000033U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001fU]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                >> 0x00000031U))))) 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001fU]) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                   >> 0x0000002fU))))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001fU]) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 0x0000002dU))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001fU]) 
                                              | __Vtemp_70[0x0000001fU]))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0U])) 
              | __Vtemp_76[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[1U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[1U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[1U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[1U])) 
              | __Vtemp_76[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[2U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[2U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[2U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[2U])) 
              | __Vtemp_76[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[3U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[3U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[3U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[3U])) 
              | __Vtemp_76[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[4U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[4U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[4U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[4U])) 
              | __Vtemp_76[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[5U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[5U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[5U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[5U])) 
              | __Vtemp_76[5U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[6U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[6U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[6U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[6U])) 
              | __Vtemp_76[6U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[7U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[7U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[7U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[7U])) 
              | __Vtemp_76[7U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[8U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[8U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[8U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[8U])) 
              | __Vtemp_76[8U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[9U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[9U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[9U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[9U])) 
              | __Vtemp_76[9U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000aU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000aU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000aU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000aU])) 
              | __Vtemp_76[0x0000000aU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000bU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000bU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000bU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000bU])) 
              | __Vtemp_76[0x0000000bU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000cU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000cU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000cU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000cU])) 
              | __Vtemp_76[0x0000000cU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000dU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000dU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000dU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000dU])) 
              | __Vtemp_76[0x0000000dU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000eU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000eU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000eU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000eU])) 
              | __Vtemp_76[0x0000000eU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000000fU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003cU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1_d3[0x0000000fU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003aU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000fU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000038U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000fU])) 
              | __Vtemp_76[0x0000000fU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000010U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000010U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000010U])) 
              | __Vtemp_76[0x00000010U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000011U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[1U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000011U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000011U])) 
              | __Vtemp_76[0x00000011U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000012U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[2U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000012U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000012U])) 
              | __Vtemp_76[0x00000012U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000013U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[3U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000013U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000013U])) 
              | __Vtemp_76[0x00000013U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000014U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[4U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000014U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000014U])) 
              | __Vtemp_76[0x00000014U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000015U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[5U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000015U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000015U])) 
              | __Vtemp_76[0x00000015U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000016U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[6U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000016U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000016U])) 
              | __Vtemp_76[0x00000016U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000017U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[7U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000017U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000017U])) 
              | __Vtemp_76[0x00000017U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000018U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[8U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000018U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000018U])) 
              | __Vtemp_76[0x00000018U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x00000019U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[9U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000019U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000019U])) 
              | __Vtemp_76[0x00000019U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001aU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000aU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001aU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001aU])) 
              | __Vtemp_76[0x0000001aU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001bU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000bU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001bU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001bU])) 
              | __Vtemp_76[0x0000001bU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001cU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000cU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001cU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001cU])) 
              | __Vtemp_76[0x0000001cU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001dU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000dU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001dU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001dU])) 
              | __Vtemp_76[0x0000001dU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001eU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000eU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001eU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001eU])) 
              | __Vtemp_76[0x0000001eU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_data_d4_w[0x0000001fU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000003dU))))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0_d3[0x0000000fU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000003bU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001fU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x00000039U))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001fU])) 
              | __Vtemp_76[0x0000001fU]));
    __Vtemp_143[0U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0U]))))));
    __Vtemp_143[1U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[1U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[1U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[1U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[1U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[1U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[1U]))))));
    __Vtemp_143[2U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[2U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[2U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[2U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[2U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[2U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[2U]))))));
    __Vtemp_143[3U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[3U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[3U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[3U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[3U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[3U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[3U]))))));
    __Vtemp_143[4U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[4U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[4U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[4U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[4U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[4U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[4U]))))));
    __Vtemp_143[5U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[5U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[5U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[5U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[5U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[5U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[5U]))))));
    __Vtemp_143[6U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[6U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[6U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[6U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[6U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[6U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[6U]))))));
    __Vtemp_143[7U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[7U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[7U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[7U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[7U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[7U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[7U]))))));
    __Vtemp_143[8U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[8U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[8U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[8U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[8U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[8U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[8U]))))));
    __Vtemp_143[9U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x0000000cU))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[9U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x0000000aU))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[9U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 8U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[9U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 6U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[9U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 4U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[9U]) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                             >> 2U))))) 
                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[9U]))))));
    __Vtemp_143[0x0000000aU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000aU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000aU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000aU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000aU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000aU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000aU]))))));
    __Vtemp_143[0x0000000bU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000bU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000bU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000bU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000bU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000bU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000bU]))))));
    __Vtemp_143[0x0000000cU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000cU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000cU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000cU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000cU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000cU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000cU]))))));
    __Vtemp_143[0x0000000dU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000dU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000dU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000dU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000dU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000dU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000dU]))))));
    __Vtemp_143[0x0000000eU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000eU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000eU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000eU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000eU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000eU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000eU]))))));
    __Vtemp_143[0x0000000fU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000cU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000000fU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000aU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000000fU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 8U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000000fU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 6U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000000fU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 4U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000000fU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 2U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000000fU]))))));
    __Vtemp_143[0x00000010U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000010U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000010U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000010U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000010U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000010U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000010U]))))));
    __Vtemp_143[0x00000011U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000011U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000011U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000011U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000011U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000011U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000011U]))))));
    __Vtemp_143[0x00000012U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000012U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000012U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000012U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000012U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000012U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000012U]))))));
    __Vtemp_143[0x00000013U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000013U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000013U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000013U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000013U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000013U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000013U]))))));
    __Vtemp_143[0x00000014U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000014U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000014U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000014U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000014U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000014U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000014U]))))));
    __Vtemp_143[0x00000015U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000015U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000015U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000015U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000015U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000015U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000015U]))))));
    __Vtemp_143[0x00000016U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000016U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000016U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000016U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000016U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000016U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000016U]))))));
    __Vtemp_143[0x00000017U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000017U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000017U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000017U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000017U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000017U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000017U]))))));
    __Vtemp_143[0x00000018U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000018U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000018U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000018U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000018U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000018U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000018U]))))));
    __Vtemp_143[0x00000019U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x00000019U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x00000019U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x00000019U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x00000019U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x00000019U]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x00000019U]))))));
    __Vtemp_143[0x0000001aU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001aU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001aU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001aU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001aU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001aU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001aU]))))));
    __Vtemp_143[0x0000001bU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001bU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001bU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001bU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001bU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001bU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001bU]))))));
    __Vtemp_143[0x0000001cU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001cU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001cU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001cU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001cU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001cU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001cU]))))));
    __Vtemp_143[0x0000001dU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001dU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001dU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001dU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001dU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001dU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001dU]))))));
    __Vtemp_143[0x0000001eU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001eU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001eU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001eU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001eU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001eU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001eU]))))));
    __Vtemp_143[0x0000001fU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000dU))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4928[0x0000001fU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x0000000bU))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4929[0x0000001fU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 9U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4930[0x0000001fU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 7U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4931[0x0000001fU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 5U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4932[0x0000001fU]) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                      >> 3U))))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4933[0x0000001fU]))))));
    __Vtemp_149[0U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0U]) 
                                      | __Vtemp_143[0U]))))));
    __Vtemp_149[1U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[1U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[1U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[1U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[1U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[1U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[1U]) 
                                      | __Vtemp_143[1U]))))));
    __Vtemp_149[2U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[2U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[2U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[2U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[2U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[2U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[2U]) 
                                      | __Vtemp_143[2U]))))));
    __Vtemp_149[3U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[3U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[3U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[3U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[3U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[3U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[3U]) 
                                      | __Vtemp_143[3U]))))));
    __Vtemp_149[4U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[4U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[4U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[4U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[4U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[4U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[4U]) 
                                      | __Vtemp_143[4U]))))));
    __Vtemp_149[5U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[5U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[5U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[5U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[5U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[5U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[5U]) 
                                      | __Vtemp_143[5U]))))));
    __Vtemp_149[6U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[6U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[6U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[6U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[6U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[6U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[6U]) 
                                      | __Vtemp_143[6U]))))));
    __Vtemp_149[7U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[7U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[7U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[7U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[7U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[7U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[7U]) 
                                      | __Vtemp_143[7U]))))));
    __Vtemp_149[8U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[8U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[8U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[8U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[8U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[8U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[8U]) 
                                      | __Vtemp_143[8U]))))));
    __Vtemp_149[9U] = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                  >> 0x00000018U))))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[9U]) 
                       | (((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                     >> 0x00000016U))))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[9U]) 
                          | (((- (IData)((1U & (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                        >> 0x00000014U))))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[9U]) 
                             | (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000012U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[9U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000010U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[9U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x0000000eU))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[9U]) 
                                      | __Vtemp_143[9U]))))));
    __Vtemp_149[0x0000000aU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000aU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000aU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000aU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000aU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000aU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000aU]) 
                                               | __Vtemp_143[0x0000000aU]))))));
    __Vtemp_149[0x0000000bU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000bU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000bU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000bU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000bU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000bU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000bU]) 
                                               | __Vtemp_143[0x0000000bU]))))));
    __Vtemp_149[0x0000000cU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000cU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000cU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000cU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000cU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000cU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000cU]) 
                                               | __Vtemp_143[0x0000000cU]))))));
    __Vtemp_149[0x0000000dU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000dU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000dU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000dU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000dU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000dU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000dU]) 
                                               | __Vtemp_143[0x0000000dU]))))));
    __Vtemp_149[0x0000000eU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000eU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000eU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000eU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000eU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000eU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000eU]) 
                                               | __Vtemp_143[0x0000000eU]))))));
    __Vtemp_149[0x0000000fU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000018U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000000fU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000016U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000000fU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000014U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000000fU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000012U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000000fU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000010U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000000fU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000eU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000000fU]) 
                                               | __Vtemp_143[0x0000000fU]))))));
    __Vtemp_149[0x00000010U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000010U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000010U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000010U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000010U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000010U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000010U]) 
                                               | __Vtemp_143[0x00000010U]))))));
    __Vtemp_149[0x00000011U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000011U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000011U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000011U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000011U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000011U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000011U]) 
                                               | __Vtemp_143[0x00000011U]))))));
    __Vtemp_149[0x00000012U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000012U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000012U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000012U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000012U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000012U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000012U]) 
                                               | __Vtemp_143[0x00000012U]))))));
    __Vtemp_149[0x00000013U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000013U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000013U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000013U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000013U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000013U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000013U]) 
                                               | __Vtemp_143[0x00000013U]))))));
    __Vtemp_149[0x00000014U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000014U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000014U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000014U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000014U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000014U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000014U]) 
                                               | __Vtemp_143[0x00000014U]))))));
    __Vtemp_149[0x00000015U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000015U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000015U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000015U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000015U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000015U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000015U]) 
                                               | __Vtemp_143[0x00000015U]))))));
    __Vtemp_149[0x00000016U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000016U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000016U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000016U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000016U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000016U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000016U]) 
                                               | __Vtemp_143[0x00000016U]))))));
    __Vtemp_149[0x00000017U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000017U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000017U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000017U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000017U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000017U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000017U]) 
                                               | __Vtemp_143[0x00000017U]))))));
    __Vtemp_149[0x00000018U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000018U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000018U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000018U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000018U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000018U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000018U]) 
                                               | __Vtemp_143[0x00000018U]))))));
    __Vtemp_149[0x00000019U] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x00000019U]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x00000019U]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x00000019U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x00000019U]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x00000019U]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x00000019U]) 
                                               | __Vtemp_143[0x00000019U]))))));
    __Vtemp_149[0x0000001aU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001aU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001aU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001aU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001aU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001aU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001aU]) 
                                               | __Vtemp_143[0x0000001aU]))))));
    __Vtemp_149[0x0000001bU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001bU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001bU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001bU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001bU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001bU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001bU]) 
                                               | __Vtemp_143[0x0000001bU]))))));
    __Vtemp_149[0x0000001cU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001cU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001cU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001cU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001cU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001cU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001cU]) 
                                               | __Vtemp_143[0x0000001cU]))))));
    __Vtemp_149[0x0000001dU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001dU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001dU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001dU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001dU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001dU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001dU]) 
                                               | __Vtemp_143[0x0000001dU]))))));
    __Vtemp_149[0x0000001eU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001eU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001eU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001eU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001eU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001eU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001eU]) 
                                               | __Vtemp_143[0x0000001eU]))))));
    __Vtemp_149[0x0000001fU] = (((- (IData)((1U & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000019U))))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4922[0x0000001fU]) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                           >> 0x00000017U))))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4923[0x0000001fU]) 
                                   | (((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                              >> 0x00000015U))))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4924[0x0000001fU]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                 >> 0x00000013U))))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4925[0x0000001fU]) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                    >> 0x00000011U))))) 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4926[0x0000001fU]) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                                                       >> 0x0000000fU))))) 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4927[0x0000001fU]) 
                                               | __Vtemp_143[0x0000001fU]))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0U])) 
              | __Vtemp_149[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[1U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[1U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[1U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[1U])) 
              | __Vtemp_149[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[2U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[2U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[2U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[2U])) 
              | __Vtemp_149[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[3U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[3U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[3U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[3U])) 
              | __Vtemp_149[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[4U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[4U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[4U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[4U])) 
              | __Vtemp_149[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[5U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[5U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[5U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[5U])) 
              | __Vtemp_149[5U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[6U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[6U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[6U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[6U])) 
              | __Vtemp_149[6U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[7U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[7U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[7U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[7U])) 
              | __Vtemp_149[7U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[8U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[8U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[8U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[8U])) 
              | __Vtemp_149[8U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[9U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[9U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[9U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[9U])) 
              | __Vtemp_149[9U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000aU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000aU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000aU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000aU])) 
              | __Vtemp_149[0x0000000aU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000bU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000bU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000bU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000bU])) 
              | __Vtemp_149[0x0000000bU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000cU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000cU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000cU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000cU])) 
              | __Vtemp_149[0x0000000cU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000dU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000dU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000dU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000dU])) 
              | __Vtemp_149[0x0000000dU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000eU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000eU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000eU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000eU])) 
              | __Vtemp_149[0x0000000eU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000000fU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001eU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000000fU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001cU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000000fU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001aU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000000fU])) 
              | __Vtemp_149[0x0000000fU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000010U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000010U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000010U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000010U])) 
              | __Vtemp_149[0x00000010U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000011U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000011U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000011U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000011U])) 
              | __Vtemp_149[0x00000011U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000012U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000012U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000012U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000012U])) 
              | __Vtemp_149[0x00000012U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000013U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000013U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000013U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000013U])) 
              | __Vtemp_149[0x00000013U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000014U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000014U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000014U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000014U])) 
              | __Vtemp_149[0x00000014U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000015U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000015U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000015U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000015U])) 
              | __Vtemp_149[0x00000015U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000016U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000016U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000016U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000016U])) 
              | __Vtemp_149[0x00000016U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000017U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000017U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000017U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000017U])) 
              | __Vtemp_149[0x00000017U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000018U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000018U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000018U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000018U])) 
              | __Vtemp_149[0x00000018U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x00000019U] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x00000019U]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x00000019U]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x00000019U])) 
              | __Vtemp_149[0x00000019U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001aU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001aU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001aU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001aU])) 
              | __Vtemp_149[0x0000001aU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001bU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001bU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001bU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001bU])) 
              | __Vtemp_149[0x0000001bU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001cU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001cU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001cU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001cU])) 
              | __Vtemp_149[0x0000001cU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001dU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001dU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001dU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001dU])) 
              | __Vtemp_149[0x0000001dU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001eU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001eU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001eU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001eU])) 
              | __Vtemp_149[0x0000001eU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d4_w[0x0000001fU] 
        = (((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                      >> 0x0000001fU))))) 
            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4919[0x0000001fU]) 
           | ((((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                          >> 0x0000001dU))))) 
                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4920[0x0000001fU]) 
               | ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
                                            >> 0x0000001bU))))) 
                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4921[0x0000001fU])) 
              | __Vtemp_149[0x0000001fU]));
}

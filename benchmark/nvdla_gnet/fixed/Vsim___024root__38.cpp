// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__220(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__220\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__tail9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count4))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take4)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count4))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count0))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take0)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count0))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count3))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take3)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count3))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count1))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take1)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count1))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count2))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take2)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count2))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count5))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take5)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count5))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count6))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take6)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count6))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count7))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take7)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count7))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count8))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take8)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count8))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count9))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take9)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count9))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h9a80e116_0_0[vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Pre_h9a80e116_0_0] = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h9a80e116_0_0[vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly] = 1U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Pre_h9a80e116_0_0 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly;
}

void Vsim___024root___nba_sequent__TOP__221(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__221\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__tail9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count4))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing4) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take4)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count4))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count0))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing0) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take0)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count0))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count3))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing3) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take3)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count3))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count1))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing1) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take1)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count1))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count2))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing2) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take2)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count2))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count5))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing5) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take5)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count5))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count6))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing6) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take6)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count6))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count7))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing7) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take7)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count7))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count8))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take8)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count8))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) 
          & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count9))) 
         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_pushing9) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take9)) 
            & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_count9))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h46dd2b73_0_0[vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Pre_h46dd2b73_0_0] = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h46dd2b73_0_0[vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly] = 1U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT____VdfgBinToOneHot_Pre_h46dd2b73_0_0 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_adr_dly;
}

void Vsim___024root___nba_sequent__TOP__222(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__222\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_popping) {
        if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ra))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[3U];
        } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ra))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[3U];
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ra))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[3U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_rd_pd[3U] = 0U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram_we) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff0[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[3U];
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram_we) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_adr))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram__DOT__ram_ff1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pd[3U];
    }
}

void Vsim___024root___nba_sequent__TOP__223(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__223\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__radclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__ra_lat 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__D_Ra_reg_r0;
    }
}

void Vsim___024root___nba_sequent__TOP__224(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__224\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram_we) 
         & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram_we) 
         & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram_we) 
         & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram_we) 
         & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd;
    }
}

void Vsim___024root___nba_sequent__TOP__225(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__225\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[0U] 
            = (((0x4fU >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR][0U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[1U] 
            = (((0x4fU >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR][1U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[2U] 
            = (((0x4fU >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR][2U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim___024root___nba_sequent__TOP__226(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__226\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__SO_int_net 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim___024root___nba_sequent__TOP__227(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__227\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff28 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff27 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff26 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff25 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff24 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff23 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff22 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff21 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff20 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff19 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff18 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff17 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff16 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff15 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff14 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff13 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff12 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff11 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff10 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff29 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff30 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
         & (0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff31 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__cq_rd_pd 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pd_p;
    }
}

void Vsim___024root___nba_sequent__TOP__228(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__228\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[0U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][0U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[1U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][1U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[2U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][2U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[3U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][3U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[4U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][4U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__dout[5U] 
            = (((0x3bU >= (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR))][5U]
                 : 0U) & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim___024root___nba_sequent__TOP__229(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__229\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_accept) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ftrans_2nd 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)
                ? 0U : 1U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ltrans_2nd 
            = ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset))
                ? 1U : 0U);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_accept) 
                & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ftrans_2nd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ltrans_2nd = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__230(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__230\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim___024root___nba_sequent__TOP__231(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__231\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 3U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 4U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 7U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 6U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                 >> 0x0000000aU));
}

void Vsim___024root___nba_sequent__TOP__232(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__232\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4078) 
            & (0U != (0x0000007fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4077)))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001fU];
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 7U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_127_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_127;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_125_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_125;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_124_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_124;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_123_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_123;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_122_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_122;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_121_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_121;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_120_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_120;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_119_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_119;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_118_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_118;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_117_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_117;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_116_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_116;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_115_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_115;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_114_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_114;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_113_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_113;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_112_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_112;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_126_d1 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_125) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                       >> 0x0000001eU))));
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 7U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_127_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_125_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_124_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_123_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_122_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_121_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_120_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_119_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_118_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_117_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_116_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_115_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_114_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_113_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_112_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_126_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 1U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                       >> 0x0000001eU))));
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 1U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 3U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_061_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_061;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_060_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_060;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_059_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_059;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_058_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_058;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_057_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_057;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_056_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_056;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_055_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_055;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_054_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_054;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_053_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_053;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_052_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_052;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_051_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_051;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_050_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_050;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_049_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_049;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_048_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_048;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_063_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_063;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_062_d1 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_061) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                       >> 0x0000001eU))));
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 3U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_061_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_060_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_059_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_058_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_057_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_056_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_055_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_054_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_053_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_052_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_051_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_050_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_049_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_048_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_063_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_062_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 2U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_047_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_047;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_046_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_046;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_045_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_045;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_044_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_044;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_043_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_043;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_042_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_042;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_041_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_041;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_040_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_040;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_039_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_039;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_038_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_038;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_037_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_037;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_036_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_036;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_035_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_035;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032;
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 2U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_047_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_046_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_045_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_044_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_043_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_042_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_041_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_040_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_039_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_038_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_037_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_036_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_035_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 6U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_111_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_111;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_110_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_110;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_109_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_109;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_108_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_108;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_107_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_107;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_106_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_106;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_105_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_105;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_104_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_104;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_103_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_103;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_102_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_102;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_101_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_101;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_100_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_100;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_099_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_099;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_098_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_098;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_097_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_097;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_096_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_096;
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 6U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_111_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_110_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_109_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_108_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_107_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_106_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_105_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_104_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_103_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_102_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_101_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_100_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_099_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_098_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_097_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_096_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 5U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_095_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_095;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_094_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_094;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_093_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_093;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_092_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_092;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_091_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_091;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_090_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_090;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_089_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_089;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_088_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_088;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_087_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_087;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_086_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_086;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_085_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_085;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_084_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_084;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_083_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_083;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_082_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_082;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_081_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_081;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_080_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_080;
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 5U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_095_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_094_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_093_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_092_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_091_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_090_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_089_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_088_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_087_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_086_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_085_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_084_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_083_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_082_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_081_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_080_d1 = 0U;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
            >> 4U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_079_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_079;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_078_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_078;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_077_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_077;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_076_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_076;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_075_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_075;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_074_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_074;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_073_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_073;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_072_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_072;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_071_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_071;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_070_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_070;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_069_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_069;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_068_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_068;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_067_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_067;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_066_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_066;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_065_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_065;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_064_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_064;
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en) 
                   >> 4U))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_079_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_078_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_077_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_076_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_075_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_074_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_073_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_072_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_071_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_070_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_069_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_068_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_067_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_066_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_065_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_064_d1 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data1 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data2 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data3 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data4 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data5 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data6 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data8 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data9 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data10 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data10 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data11 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data11 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data12 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data12 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data13 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data13 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data14 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data14 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data15 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data15 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data16 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data16 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data17 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data17 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data18 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data18 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data19 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data19 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data20 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data20 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data21 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data21 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data22 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data22 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data23 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data23 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data24 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data24 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data25 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data25 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data26 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data26 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data27 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data27 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data28 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data28 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data29 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data29 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data30 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data30 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data31 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data31 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data32 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data32 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data33 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data33 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data34 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data34 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data35 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data35 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data36 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data36 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data37 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data37 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data38 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data38 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data39 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data39 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data40 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data40 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data41 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data41 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data42 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data42 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data43 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data43 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data44 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data44 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data45 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data45 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data46 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data46 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data47 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data47 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data48 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data48 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data49 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data49 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data50 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data50 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data51 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data51 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data52 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data52 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data53 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data53 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data54 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data54 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data55 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data55 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data56 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data56 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data57 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data57 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data58 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data58 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data59 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data59 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data60 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data60 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data61 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data61 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data62 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data62 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data63 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[1U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data63 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data64 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data64 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data65 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data65 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data66 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data66 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data67 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data67 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data68 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data68 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data69 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data69 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data70 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data70 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data71 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data71 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data72 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data72 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data73 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data73 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data74 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data74 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data75 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data75 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data76 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data76 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data77 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data77 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data78 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data78 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data79 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data79 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data80 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data80 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data81 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data81 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data82 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data82 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data83 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data83 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data84 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data84 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data85 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data85 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data86 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data86 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data87 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data87 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data88 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data88 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data89 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data89 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data90 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data90 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data91 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data91 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data92 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data92 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data93 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data93 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data94 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data94 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data95 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[2U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data95 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data96 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data96 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data97 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data97 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data98 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data98 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data99 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data99 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data100 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data100 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data101 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data101 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data102 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data102 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data103 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data103 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data104 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data104 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data105 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data105 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data106 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data106 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data107 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data107 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data108 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data108 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data109 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data109 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data110 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data110 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data111 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data111 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data112 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data112 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data113 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data113 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data114 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data114 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data115 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data115 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data116 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data116 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data117 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data117 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data118 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data118 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data119 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data119 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data120 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data120 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data121 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data121 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data122 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data122 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data123 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data123 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data124 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data124 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data125 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data125 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data126 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data126 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data127 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[3U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data127 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data7 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_data0 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data1 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data2 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data3 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data4 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data5 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data6 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data8 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data8 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data9 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data9 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data10 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data10 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data11 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data11 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data12 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data12 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data13 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data13 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data14 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data14 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data15 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data15 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data16 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data16 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data17 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data17 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data18 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data18 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data19 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data19 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data20 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data20 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data21 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data21 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data22 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data22 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data23 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data23 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data24 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data24 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data25 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data25 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data26 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data26 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data27 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data27 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data28 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data28 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data29 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data29 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data30 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data30 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data31 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data31 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data32 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data32 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data33 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data33 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data34 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data34 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data35 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data35 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data36 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data36 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data37 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data37 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data38 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data38 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data39 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data39 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data40 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data40 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data41 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data41 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data42 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data42 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data43 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data43 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data44 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data44 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data45 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data45 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data46 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data46 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data47 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data47 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data48 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data48 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data49 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data49 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data50 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data50 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data51 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data51 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data52 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data52 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data53 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data53 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data54 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data54 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data55 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data55 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data56 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data56 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data57 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data57 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data58 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data58 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data59 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data59 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data60 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data60 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data61 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data61 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data62 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data62 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data63 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[1U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data63 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data64 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data64 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data65 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data65 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data66 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data66 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data67 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data67 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data68 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data68 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data69 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data69 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data70 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data70 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data71 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data71 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data72 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data72 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data73 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data73 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data74 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data74 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data75 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data75 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data76 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data76 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data77 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data77 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data78 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data78 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data79 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data79 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data80 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data80 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data81 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data81 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data82 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data82 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data83 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data83 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data84 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data84 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data85 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data85 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data86 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data86 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data87 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data87 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data88 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data88 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data89 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data89 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data90 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data90 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data91 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data91 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data92 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data92 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data93 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data93 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data94 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data94 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data95 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[2U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data95 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data96 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data96 = 0U;
    }
    if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data97 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d3;
    } else if ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data97 = 0U;
    }
    if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data98 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d3;
    } else if ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data98 = 0U;
    }
    if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data99 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d3;
    } else if ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data99 = 0U;
    }
    if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data100 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d3;
    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data100 = 0U;
    }
    if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data101 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d3;
    } else if ((0x00000020U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data101 = 0U;
    }
    if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data102 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d3;
    } else if ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data102 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data103 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data103 = 0U;
    }
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data104 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d3;
    } else if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data104 = 0U;
    }
    if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data105 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d3;
    } else if ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data105 = 0U;
    }
    if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data106 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d3;
    } else if ((0x00000400U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data106 = 0U;
    }
    if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data107 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d3;
    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data107 = 0U;
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data108 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d3;
    } else if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data108 = 0U;
    }
    if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data109 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d3;
    } else if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data109 = 0U;
    }
    if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data110 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d3;
    } else if ((0x00004000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data110 = 0U;
    }
    if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data111 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d3;
    } else if ((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data111 = 0U;
    }
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data112 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d3;
    } else if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data112 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data113 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d3;
    } else if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data113 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data114 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d3;
    } else if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data114 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data115 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d3;
    } else if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data115 = 0U;
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data116 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d3;
    } else if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data116 = 0U;
    }
    if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data117 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d3;
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data117 = 0U;
    }
    if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data118 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d3;
    } else if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data118 = 0U;
    }
    if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data119 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d3;
    } else if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data119 = 0U;
    }
    if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data120 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d3;
    } else if ((0x01000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data120 = 0U;
    }
    if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data121 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d3;
    } else if ((0x02000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data121 = 0U;
    }
    if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data122 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d3;
    } else if ((0x04000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data122 = 0U;
    }
    if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data123 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d3;
    } else if ((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data123 = 0U;
    }
    if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data124 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d3;
    } else if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data124 = 0U;
    }
    if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data125 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d3;
    } else if ((0x20000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data125 = 0U;
    }
    if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data126 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d3;
    } else if ((0x40000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data126 = 0U;
    }
    if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data127 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d3;
    } else if ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[3U] 
                >> 0x0000001fU)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data127 = 0U;
    }
    if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d3;
    } else if ((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data7 = 0U;
    }
    if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d3;
    } else if ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_mask[0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_data0 = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d2) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[3U];
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_fp16_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[3U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d3[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[3U];
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__sel_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__sel_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d2;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__sel_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__sel_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 1U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 2U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 3U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 4U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 5U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 6U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 8U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 9U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000000fU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000011U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000012U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000013U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000014U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000015U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000016U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000017U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000018U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x00000019U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000001aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000001bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000001cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000001dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                   >> 0x0000001eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031) 
               & (- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                             >> 0x0000001fU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032) 
               & (- (IData)((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 1U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 2U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 3U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 4U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 5U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 6U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 7U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 8U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 9U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000000fU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000011U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000012U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000013U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000014U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000015U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000016U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000017U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000018U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x00000019U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000001aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000001bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000001cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000001dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                                   >> 0x0000001eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063) 
               & (- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
                             >> 0x0000001fU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064) 
               & (- (IData)((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 1U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 2U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 3U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 4U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 5U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 6U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 7U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 8U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 9U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000000fU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000011U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000012U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000013U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000014U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000015U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000016U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000017U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000018U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x00000019U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000001aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000001bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000001cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000001dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                                   >> 0x0000001eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095) 
               & (- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
                             >> 0x0000001fU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096) 
               & (- (IData)((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 1U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 2U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 3U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 4U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 5U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 6U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 7U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 8U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 9U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000000fU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000011U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000012U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000013U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000014U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000015U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000016U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000017U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000018U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x00000019U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000001aU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000001bU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000001cU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000001dU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126) 
               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                                   >> 0x0000001eU)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d2 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127) 
               & (- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
                             >> 0x0000001fU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d2 
            = (0x000000ffU & (((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)) 
                                 | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))) 
                                | (((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)) 
                                    | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))) 
                                   | ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)) 
                                      | ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)) 
                                         | ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)) 
                                            | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1)))))))
                                ? ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                                    : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 8U))
                                        : ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                                  >> 0x00000010U))
                                            : ((4U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                                    << 8U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                                      >> 0x00000018U))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                                    ? 
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                                     ? 
                                                    ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                        >> 8U))
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1))
                                                      ? 
                                                     ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                         >> 0x00000010U))
                                                      : 
                                                     ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       << 8U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                         >> 0x00000018U)))))))))
                                : 0U) & (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
                                                       >> 7U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d2 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_000_d1)
                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                                : 0U) & (- (IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U])))));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_002_d1 
            = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001) 
                     + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                              >> 2U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1 
            = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005) 
                     + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                              >> 6U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                       >> 0x0000000eU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_000_d1 
            = (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_002_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_000_d1 = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__sel_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[0U] 
        = (((((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d2)) 
                  << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d2)) 
                            << 2U)) | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d2)) 
                                        << 1U) | (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d2)))) 
               << 0x0000000cU) | (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d2)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d2)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d2)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d2)))) 
                                  << 8U)) | ((((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d2)))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d2)) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d2)) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d2)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d2)))))) 
            << 0x00000010U) | (((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d2)))) 
                                 << 0x0000000cU) | 
                                (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d2)))) 
                                 << 8U)) | ((((((0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d2)) 
                                                << 3U) 
                                               | ((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d2)) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d2)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d2)))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d2)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[1U] 
        = (((((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d2)) 
                  << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d2)) 
                            << 2U)) | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d2)) 
                                        << 1U) | (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d2)))) 
               << 0x0000000cU) | (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d2)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d2)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d2)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d2)))) 
                                  << 8U)) | ((((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d2)))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d2)) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d2)) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d2)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d2)))))) 
            << 0x00000010U) | (((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d2)))) 
                                 << 0x0000000cU) | 
                                (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d2)))) 
                                 << 8U)) | ((((((0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d2)) 
                                                << 3U) 
                                               | ((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d2)) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d2)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d2)))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d2)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[2U] 
        = (((((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d2)) 
                  << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d2)) 
                            << 2U)) | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d2)) 
                                        << 1U) | (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d2)))) 
               << 0x0000000cU) | (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d2)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d2)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d2)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d2)))) 
                                  << 8U)) | ((((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d2)))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d2)) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d2)) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d2)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d2)))))) 
            << 0x00000010U) | (((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d2)))) 
                                 << 0x0000000cU) | 
                                (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d2)))) 
                                 << 8U)) | ((((((0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d2)) 
                                                << 3U) 
                                               | ((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d2)) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d2)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d2)))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d2)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int8_w[3U] 
        = (((((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d2)) 
                  << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d2)) 
                            << 2U)) | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d2)) 
                                        << 1U) | (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d2)))) 
               << 0x0000000cU) | (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d2)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d2)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d2)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d2)))) 
                                  << 8U)) | ((((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d2)))) 
                                              << 4U) 
                                             | ((((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d2)) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d2)) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d2)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d2)))))) 
            << 0x00000010U) | (((((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d2)))) 
                                 << 0x0000000cU) | 
                                (((((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d2)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d2)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d2)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d2)))) 
                                 << 8U)) | ((((((0U 
                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d2)) 
                                                << 3U) 
                                               | ((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d2)) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d2)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d2)))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d2)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d2)) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d2)) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d2)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[0U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d2)) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d2)) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d2)) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d2)) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[1U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d2)) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d2)) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d2)) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d2)) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[2U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d2)) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d2)) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d2)) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d2)) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_int16_w[3U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d2)) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d2)) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d2)) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d2)) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d2)) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d2)) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d2)) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d2)) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[0U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != 
                                             (0x0000007fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031_d2))) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029_d2))) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025_d2))) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x0000007fU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017_d2))) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_007_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_000_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[1U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != 
                                             (0x0000007fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_063_d2))) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_062_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_061_d2))) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_060_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_059_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_058_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_057_d2))) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_056_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_055_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_054_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_053_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_052_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_051_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_050_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x0000007fU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_049_d2))) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_048_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_047_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_046_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_045_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_044_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_043_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_042_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_041_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_040_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_039_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_038_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_037_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_036_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_035_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[2U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != 
                                             (0x0000007fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_095_d2))) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_094_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_093_d2))) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_092_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_091_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_090_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_089_d2))) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_088_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_087_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_086_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_085_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_084_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_083_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_082_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x0000007fU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_081_d2))) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_080_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_079_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_078_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_077_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_076_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_075_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_074_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_073_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_072_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_071_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_070_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_069_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_068_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_067_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_066_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_065_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_064_d2))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d2_fp16_w[3U] 
        = (((((((0x0000000cU & ((- (IData)(((0U != 
                                             (0x0000007fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_127_d2))) 
                                            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_126_d2))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x0000007fU 
                                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_125_d2))) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_124_d2))))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_123_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_122_d2))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      ((0U 
                                                        != 
                                                        (0x0000007fU 
                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_121_d2))) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_120_d2))))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_119_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_118_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_117_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_116_d2))))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_115_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_114_d2))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x0000007fU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_113_d2))) 
                                                                 | (0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_112_d2))))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_111_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_110_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_109_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_108_d2))))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_107_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_106_d2))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_105_d2))) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_104_d2))))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x0000007fU 
                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_103_d2))) 
                                                              | (0U 
                                                                 != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_102_d2))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_101_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_100_d2))))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_099_d2))) 
                                                               | (0U 
                                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_098_d2))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_097_d2))) 
                                                                | (0U 
                                                                   != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_096_d2))))))))));
    if ((0x00000200U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[3U];
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__mask_d1[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_001 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_002_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_002_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_002_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_002 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 0x00000010U));
    } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_003 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
               >> 0x00000018U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 0x00000010U));
    } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
               >> 0x00000018U);
    } else if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_004 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 0x00000010U));
    } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
               >> 0x00000018U);
    } else if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]);
    } else if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_005 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 = 0U;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]);
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                              >> 0x00000010U));
    } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
               >> 0x00000018U);
    } else if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]);
    } else if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                              >> 8U));
    } else if ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_006_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_006 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_008 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_009 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    } else if ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_010 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    } else if ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 0x00000010U));
    } else if ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_011 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
               >> 0x00000018U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    } else if ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 0x00000010U));
    } else if ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
               >> 0x00000018U);
    } else if ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_012 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    } else if ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 0x00000010U));
    } else if ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
               >> 0x00000018U);
    } else if ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]);
    } else if ((0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_013 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]);
    } else if ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 8U));
    } else if ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                              >> 0x00000010U));
    } else if ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
               >> 0x00000018U);
    } else if ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]);
    } else if ((0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                              >> 8U));
    } else if ((0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_014_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_014 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_015 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_016 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_017 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    } else if ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_018 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    } else if ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 0x00000010U));
    } else if ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_019 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
               >> 0x00000018U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    } else if ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 0x00000010U));
    } else if ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
               >> 0x00000018U);
    } else if ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_020 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    } else if ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 0x00000010U));
    } else if ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
               >> 0x00000018U);
    } else if ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]);
    } else if ((0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_021 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]);
    } else if ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 8U));
    } else if ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                              >> 0x00000010U));
    } else if ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
               >> 0x00000018U);
    } else if ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]);
    } else if ((0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                              >> 8U));
    } else if ((0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_022 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_023 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_024 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_025 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    } else if ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_026 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    } else if ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 0x00000010U));
    } else if ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_027 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
               >> 0x00000018U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    } else if ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 0x00000010U));
    } else if ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
               >> 0x00000018U);
    } else if ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_028 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    } else if ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 0x00000010U));
    } else if ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
               >> 0x00000018U);
    } else if ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]);
    } else if ((0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_029 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]);
    } else if ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 8U));
    } else if ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                              >> 0x00000010U));
    } else if ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
               >> 0x00000018U);
    } else if ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]);
    } else if ((0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                              >> 8U));
    } else if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_030_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_030 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                              >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)) 
                      | (0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                     | (0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                    | (0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                   | (0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                  | (0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                 | (0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))) 
                | (0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_031 
            = (0x000000ffU & ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]
                               : ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                         >> 8U)) : 
                                  ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                          >> 0x00000010U))
                                    : ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                              >> 0x00000018U))
                                        : ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]
                                            : ((0x1eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                      >> 8U))
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000018U))))))))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)) 
                      | (0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                     | (0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                    | (0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                   | (0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                  | (0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                 | (0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) 
                | (0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 
            = (0x000000ffU & ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]
                               : ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                         >> 8U)) : 
                                  ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                          >> 0x00000010U))
                                    : ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                              >> 0x00000018U))
                                        : ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]
                                            : ((0x1eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                      >> 8U))
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x21U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_032 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)) 
                      | (0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                     | (0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                    | (0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                   | (0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                  | (0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                 | (0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) 
                | (0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]
                               : ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                         >> 8U)) : 
                                  ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                          >> 0x00000010U))
                                    : ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                              >> 0x00000018U))
                                        : ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]
                                            : ((0x1eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                      >> 8U))
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x21U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U]);
    } else if ((0x22U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_033 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U] 
                              >> 8U));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 = 0U;
    if (((((((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)) 
               | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
              | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
             | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
            | (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
           | (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
          | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
         | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U]
                               : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                         >> 8U)) : 
                                  ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                          >> 0x00000010U))
                                    : ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[0U] 
                                              >> 0x00000018U))
                                        : ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U]
                                            : ((6U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                      >> 8U))
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[1U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)) 
                      | (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                     | (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                    | (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                   | (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                  | (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                 | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                | (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U]
                               : ((0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                         >> 8U)) : 
                                  ((0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                          >> 0x00000010U))
                                    : ((0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[2U] 
                                              >> 0x00000018U))
                                        : ((0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U]
                                            : ((0x0eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                      >> 8U))
                                                : (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[3U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)) 
                      | (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                     | (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                    | (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                   | (0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                  | (0x16U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                 | (0x17U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                | (0x18U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & ((0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U]
                               : ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                         >> 8U)) : 
                                  ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                          >> 0x00000010U))
                                    : ((0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[4U] 
                                              >> 0x00000018U))
                                        : ((0x15U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U]
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                      >> 8U))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[5U] 
                                                       >> 0x00000018U))))))))));
    } else if (((((((((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)) 
                      | (0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                     | (0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                    | (0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                   | (0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                  | (0x1eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                 | (0x1fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) 
                | (0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & ((0x19U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                               ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U]
                               : ((0x1aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                   ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                         >> 8U)) : 
                                  ((0x1bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                    ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                          >> 0x00000010U))
                                    : ((0x1cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                            << 8U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[6U] 
                                              >> 0x00000018U))
                                        : ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U]
                                            : ((0x1eU 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                ? (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                      >> 8U))
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[7U] 
                                                       >> 0x00000018U))))))))));
    } else if ((0x21U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U]);
    } else if ((0x22U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U] 
                              >> 8U));
    } else if ((0x23U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_data_034 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__data_d1[8U] 
                              >> 0x00000010U));
    }
}
